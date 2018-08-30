#include "serialportitem.h"
#include <QtSerialPort/QSerialPortInfo>


SerialPortItem::SerialPortItem(QQuickItem *parent):
    QQuickItem(parent)
	, Dao(0)
	, m_dataStateAck("")
	, m_fSCode("")

{
    // By default, QQuickItem does not draw anything. If you subclass
    // QQuickItem to create a visual item, you will need to uncomment the
    // following line and re-implement updatePaintNode()

    // setFlag(ItemHasContents, true);
	connect(&thread, &MasterThread::response, this, &SerialPortItem::recive);
	connect(&thread, &MasterThread::error, this, &SerialPortItem::processError);
	connect(&thread, &MasterThread::timeout, this, &SerialPortItem::processTimeout);
	
}

SerialPortItem::~SerialPortItem()
{
	//file.close();
}

QString SerialPortItem::dataStateAck()
{
	return m_dataStateAck;
}

QString SerialPortItem::fSCode()
{
	return m_fSCode;
}

void SerialPortItem::setDataStateAck(const QString & s)
{
	emit dataStateAckChanged();
}
void SerialPortItem::setFSCode(const QString & s)
{
	emit fSCodeChanged();
}
QString SerialPortItem::portName()
{
	return m_portName;
}

int SerialPortItem::waitTimeOut()
{
	return m_waitTimeOut;
}

QString SerialPortItem::errorInfo()
{
	return m_errorInfo;
}

QString SerialPortItem::timeoutInfo()
{
	return m_timeoutInfo;
}

QString SerialPortItem::normalInfo()
{
	return m_normalInfo;
}

void SerialPortItem::setPortName(const QString & str)
{
	m_portName = str;
	emit portNameChanged();
}

void SerialPortItem::setWaitTimeOut(const int & i)
{
	m_waitTimeOut = i;
	emit waitTimeOutChanged();
}

void SerialPortItem::setErrorInfo(const QString & str)
{
	m_errorInfo = str;
	emit errorInfoChanged();
}

void SerialPortItem::setTimeoutInfo(const QString & str)
{
	m_timeoutInfo = str;
	emit timeoutInfoChanged();
}

void SerialPortItem::setNormalInfo(const QString & str)
{
	m_normalInfo = str;
	emit normalInfoChanged();
}

void SerialPortItem::processError(const QString &s)
{
	//m_errorInfo = s;
	setErrorInfo(s);
}

void SerialPortItem::processTimeout(const QString &s)
{
	//m_timeoutInfo = s;
	setTimeoutInfo(s);
}

void SerialPortItem::send(const QString & portName, int waitTimeout, const QByteArray & request)
{
	thread.transaction(portName,waitTimeout,request);
}

void SerialPortItem::recive(const QByteArray & b)
{
	QJsonObject jsonObj;
	/*QDir logDir;
	QString dirPath = logDir.currentPath();
	logDir.mkpath(dirPath + "/log");

	QString filePath = dirPath + "/log/" + "log.txt";
	QFile file(filePath);
	if (file.open(QIODevice::WriteOnly))
	{
		QTextStream in(&file);
		qDebug() << "文件打开成功";
	}
	QTextStream in(&file);
	in << b << "\n";*/
	//setNormalInfo(b.toHex(':'));
	if (b[0] == (char)0xaa && b[b.size() - 1] == (char)0xbb)
	{
		switch (b[4])
		{
		case CMD_MOVE: //0
		{
			memcpy(&Dao.DataMove, b.data() + 5, b[1] - 6);//截取字节段copy到结构体。
			jsonObj["speed"] = Dao.DataMove.Speed;
			jsonObj["direction"] = Dao.DataMove.Direction;
			jsonObj["lightpower"] = Dao.DataMove.lightpower;
			jsonObj["roll"] = Dao.DataMove.Roll;
			jsonObj["deepset"] = Dao.DataMove.Deepset;
			jsonObj["Yaw"] = Dao.DataMove.Yaw;
			//QJsonDocument doc(jsonObj);
			//QString strJson(doc.toJson(QJsonDocument::Compact));
			//qDebug() << jsonObj << endl;
			//m_dataMove = strJson;
			//setDataMove(m_dataMove);
			setNormalInfo("CMD_MOVE");
		}		
			break;
		case CMD_STATE:
		{
			memcpy(&Dao.DataStateAck, b.data() + 5, b[1] - 6);//截取字节段copy到结构体。
			
			jsonObj["speed"] = Dao.DataStateAck.Speed;
			jsonObj["direction"] = Dao.DataStateAck.Direction;
			jsonObj["power"] = Dao.DataStateAck.Power;
			jsonObj["temp"] = Dao.DataStateAck.Temp;
			jsonObj["hum"] = Dao.DataStateAck.Hum;
			jsonObj["roll"] = Dao.DataStateAck.Roll;
			jsonObj["pitch"] = Dao.DataStateAck.Pitch;
			jsonObj["yaw"] = Dao.DataStateAck.Yaw;
			jsonObj["pointID"] = Dao.DataStateAck.PointID;
			jsonObj["v"] = Dao.DataStateAck.V;
			jsonObj["nowDeepth"] = Dao.DataStateAck.NowDeepth;
			jsonObj["point_x"] = Dao.DataStateAck.Point.x;
			jsonObj["point_y"] = Dao.DataStateAck.Point.y;
			//qDebug() << jsonObj << endl;
			QJsonDocument doc(jsonObj);
			QString strJson(doc.toJson(QJsonDocument::Compact));

			m_dataStateAck = strJson;
			setDataStateAck(m_dataStateAck);
			//
			setNormalInfo(m_dataStateAck);
		}			
			break;
		case CMD_FORMATE:

			break;
		case CMD_LASERCONTROL:
			setNormalInfo("CMD_LASERCONTROL");
			break;
		case CMD_PICTUREINF:
		{
			memcpy(&Dao.DataPictureInf, b.data() + 5, b[1] - 6);//截取字节段copy到结构体。
			qDebug() << " DataPictureInf " 
					 << Dao.DataPictureInf.directx << ":" << Dao.DataPictureInf.directy << ":" << Dao.DataPictureInf.length
					 << endl;
			QString str = " DataPictureInf : " + QString::number(Dao.DataPictureInf.directx) 
						+ "," + QString::number(Dao.DataPictureInf.directy)
						+ "," + QString::number(Dao.DataPictureInf.length);
			setNormalInfo(str);
		}
			break;
		case CMD_GPSCOORD:
		{
			memcpy(&Dao.DataCoord, b.data() + 5, b.count() - 6);//截取字节段copy到结构体。
			qDebug() << " DataCoord " << Dao.DataCoord.pt.x << ":" << Dao.DataCoord.pt.y << endl;
			QString str = " DataCoord = " + QString::number(Dao.DataCoord.pt.x) + "," + QString::number(Dao.DataCoord.pt.y);
			setNormalInfo(str);
		}
			break;
		case CMD_SOUNDCONTROL:
		{
			//qDebug() << " b.data()" << b.toHex();
			memcpy(&Dao.DataSoundAck, b.data() + 5, b.count() - 6);//截取字节段copy到结构体。

			for (int i = 0; i < b.count() - 6; i++)
			{
				QString j = QString::number(i);
				jsonObj[j] = Dao.DataSoundAck.FScode[i];
			}
			QJsonDocument doc(jsonObj);
			QString strJson(doc.toJson(QJsonDocument::Compact));
			m_fSCode = strJson;
			setFSCode(m_fSCode);
			setNormalInfo(m_fSCode);
			//qDebug() <<  " m_fSCode " << m_fSCode << endl;
		}
			break;
		case CMD_DOWNLOADCONTROL:

			break;
		default:
			break;
		}
	}
	else
	{
		return ;
	}
}

void SerialPortItem::read(const QJsonObject & json)
{

}

void SerialPortItem::write(QJsonObject &json) const
{
	json["speed"] = Dao.DataStateAck.Speed;
	json["direction"] = Dao.DataStateAck.Direction;
	json["power"] = Dao.DataStateAck.Power;
	json["temp"] = Dao.DataStateAck.Temp;
	json["hum"] = Dao.DataStateAck.Hum;
	json["roll"] = Dao.DataStateAck.Roll;
	json["pitch"] = Dao.DataStateAck.Pitch;
	json["yaw"] = Dao.DataStateAck.Yaw;
	json["pointID"] = Dao.DataStateAck.PointID;
	json["v"] = Dao.DataStateAck.V;
	json["nowDeepth"] = Dao.DataStateAck.NowDeepth;
	json["point_x"] = Dao.DataStateAck.Point.x;
	json["point_y"] = Dao.DataStateAck.Point.y;
}

// 关闭串口功能
Q_INVOKABLE void SerialPortItem::stop()
{
	send("Because serial is closed", m_waitTimeOut, ""); //由于没有com，所以serial会关掉，从而实现关闭串口功能
	return Q_INVOKABLE void();
}

Q_INVOKABLE void SerialPortItem::sendMove(short speed, short dir, short light, short deepset, short roll, short yaw)
{
	//QByteArray sendData;
	Dao.DataMove.Speed = speed;       //正负100 //油门百分比 负数代表反向
	Dao.DataMove.Direction = dir;     //正负100 //油门 
	Dao.DataMove.lightpower = light;  //设备灯控 0-100 亮度 
	Dao.DataMove.Deepset = deepset;   //-100 ~ +100
	Dao.DataMove.Roll = roll;		  //定侧倾角  默认 0度 
	Dao.DataMove.Yaw = yaw;			  //定向  ENABLE:开始锁定	DISABLE 

	QByteArray desData;
	QByteArray Code;
	desData.clear();
	desData[0] = 0xAA;
	desData[1] = sizeof(Dao.DataMove) + 6;
	desData[2] = 0xFE; //自身ID
	desData[3] = 0x01; //目标ID
	desData[4] = 0x00; //CMD_MOVE
	Code = QByteArray::fromRawData((char*)&Dao.DataMove, sizeof(Dao.DataMove));
	desData += Code;

	desData += 0xBB;
	send(m_portName, m_waitTimeOut, desData);
	return Q_INVOKABLE void();
}

Q_INVOKABLE void SerialPortItem::sendState(int a, int b, int c)
{
	QByteArray desData;
	QByteArray Code;
	desData.clear();
	desData[0] = 0xAA;
	desData[1] = 1 + 6;
	desData[2] = 0xFE; //自身ID
	desData[3] = 0x01; //目标ID
	desData[4] = 0x01; //CMD_STATE
	Code[0] = 0x00;
	desData += Code;

	desData += 0xBB;
	send(m_portName, m_waitTimeOut, desData);
	return Q_INVOKABLE void();
}

Q_INVOKABLE void SerialPortItem::sendLaserControl(quint8 a)
{
	Dao.DataLaserRet.EnOrDisEN = a;
	QByteArray desData;
	QByteArray Code;
	desData.clear();
	desData[0] = 0xAA;
	desData[1] = sizeof(Dao.DataLaserRet) + 6;
	desData[2] = 0xFE; //自身ID
	desData[3] = 0x01; //目标ID
	desData[4] = 0x03; //CMD_LASERCONTROL
	Code = QByteArray::fromRawData((char*)&Dao.DataLaserRet, sizeof(Dao.DataLaserRet));
	desData += Code;

	desData += 0xBB;
	send(m_portName, m_waitTimeOut, desData);
	return Q_INVOKABLE void();
}

Q_INVOKABLE void SerialPortItem::sendSoundControl(quint8 a, quint8 b, quint8 c)
{
	Dao.DataSoundControl.RorWCro = a;
	Dao.DataSoundControl.GetFS = b;

	QByteArray desData;
	QByteArray Code;
	desData.clear();
	desData[0] = 0xAA;
	desData[1] = sizeof(Dao.DataSoundControl) + 6;
	desData[2] = 0xFE; //自身ID
	desData[3] = 0x01; //目标ID
	desData[4] = 0x06; //CMD_SOUNDCONTROL
	Code = QByteArray::fromRawData((char*)&Dao.DataSoundControl, sizeof(Dao.DataSoundControl));
	desData += Code;

	desData += 0xBB;
	send(m_portName, m_waitTimeOut, desData);
	return Q_INVOKABLE void();
}

Q_INVOKABLE void SerialPortItem::sendPictureInf()
{
	QByteArray desData;
	QByteArray Code;
	desData.clear();
	desData[0] = 0xAA;
	desData[1] = 1 + 6;
	desData[2] = 0xFE; //自身ID
	desData[3] = 0x01; //目标ID
	desData[4] = 0x04; //CMD_PICTUREINF
	Code[0] = 0x00;
	desData += Code;

	desData += 0xBB;
	send(m_portName, m_waitTimeOut, desData);
	return Q_INVOKABLE void();
}

Q_INVOKABLE void SerialPortItem::sendGPSCoord()
{
	QByteArray desData;
	QByteArray Code;
	desData.clear();
	desData[0] = 0xAA;
	desData[1] = 1 + 6;
	desData[2] = 0xFE; //自身ID
	desData[3] = 0x01; //目标ID
	desData[4] = 0x05; //CMD_GPSCOORD
	Code[0] = 0x00;
	desData += Code;

	desData += 0xBB;
	send(m_portName, m_waitTimeOut, desData);
	return Q_INVOKABLE void();
}
