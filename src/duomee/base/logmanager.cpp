#include "logmanager.h"

LogManager::LogManager()
{

}

LogManager::~LogManager()
{

}

void LogManager::Install()
{
    qInstallMessageHandler(OutMsg);

}

void LogManager::Uninstall()
{
    qInstallMessageHandler(0);
}

void LogManager::OutMsg(QtMsgType type, const QMessageLogContext &content, const QString &msg)
{
    switch(type) {

    }
}
