#pragma once
#include <QObject>
#include "data_struct.h"
class StructObject : public QObject {
	Q_OBJECT

public:
	StructObject(QObject * parent = Q_NULLPTR);
	~StructObject();

	Data_STATEACK_TypeDef DataStateAck;
	Data_MOVE_TypeDef DataMove;//
	Data_LASERRet_TypeDef DataLaserRet;
	Data_PICTUREINF_TypeDef DataPictureInf;
	Data_GPSCOORD_TypeDef DataCoord;
	Data_SOUNDFSACK_TypeDef DataSoundAck;
	Data_SOUNDCONTROL_TypeDef DataSoundControl;
private:
	
};
