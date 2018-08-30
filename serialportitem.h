#ifndef SERIALPORTITEM_H
#define SERIALPORTITEM_H

#include <QQuickItem>
#include "structobject.h"
#include "masterthread.h"
#include <QJsonObject>
#include <QString>
#include <QJsonDocument>
#include <QFile>
#include <QDir>

class SerialPortItem : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(SerialPortItem)
	Q_PROPERTY(QString dataStateAck   READ dataStateAck   WRITE setDataStateAck   NOTIFY dataStateAckChanged)
	Q_PROPERTY(QString fSCode   READ fSCode   WRITE setFSCode   NOTIFY fSCodeChanged)
	//////////////////////////////////serialport 连接属性////////////////////////////////////////
	Q_PROPERTY(QString portName READ portName WRITE setPortName NOTIFY portNameChanged)
	Q_PROPERTY(int waitTimeOut READ waitTimeOut WRITE setWaitTimeOut NOTIFY waitTimeOutChanged)
	Q_PROPERTY(QString errorInfo READ errorInfo WRITE setErrorInfo NOTIFY errorInfoChanged)
	Q_PROPERTY(QString timeoutInfo READ timeoutInfo WRITE setTimeoutInfo NOTIFY timeoutInfoChanged)
	Q_PROPERTY(QString normalInfo READ normalInfo WRITE setNormalInfo NOTIFY normalInfoChanged)
signals:
	void dataStateAckChanged();
	void fSCodeChanged();
	//serialport 属性///
	void portNameChanged();
	void waitTimeOutChanged();
	void errorInfoChanged();
	void timeoutInfoChanged();
	void normalInfoChanged();

public slots:
	Q_INVOKABLE void stop();
	Q_INVOKABLE void sendMove(short speed, short dir, short light, short deepset, short roll, short yaw);
	Q_INVOKABLE void sendState(int a, int b, int c);
	Q_INVOKABLE void sendLaserControl(quint8 a);
	Q_INVOKABLE void sendSoundControl(quint8 a, quint8 b, quint8 c);
	Q_INVOKABLE void sendPictureInf();
	Q_INVOKABLE void sendGPSCoord();

public:
    SerialPortItem(QQuickItem *parent = nullptr);
    ~SerialPortItem();
	
	QString dataStateAck();
	QString fSCode();
	void setDataStateAck(const QString &s);
	void setFSCode(const QString &s);
	//serialport 属性///
	QString portName();
	int waitTimeOut();
	QString errorInfo();
	QString timeoutInfo();
	QString normalInfo();
	void setPortName(const QString &str);
	void setWaitTimeOut(const int &i);
	void setErrorInfo(const QString &str);
	void setTimeoutInfo(const QString &str);
	void setNormalInfo(const QString &str);

	void send(const QString &portName, int waitTimeout, const QByteArray &request);
	void recive(const QByteArray &s);
	void processError(const QString &s);
	void processTimeout(const QString &s);

	//json
	void read(const QJsonObject &json);
	void write(QJsonObject &json) const;

private:
	QString m_dataStateAck;
	QString m_fSCode;
	QString m_portName;
	int m_waitTimeOut;
	QByteArray m_sendData;
	QByteArray m_reciveData;

	MasterThread thread;
	QString m_errorInfo;
	QString m_timeoutInfo;
	QString m_normalInfo;
	StructObject Dao;
	//QFile m_file;
	//QTextStream in;
};

#endif // SERIALPORTITEM_H
