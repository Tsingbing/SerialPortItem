#include "serialportitem_plugin.h"
#include "serialportitem.h"

#include <qqml.h>

void SerialPortItemPlugin::registerTypes(const char *uri)
{
    // @uri com.robosea.serialport
    qmlRegisterType<SerialPortItem>(uri, 1, 0, "SerialPortItem");
}

