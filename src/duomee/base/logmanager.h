#ifndef LOGMANAGER_H
#define LOGMANAGER_H

#include "QtCore/qobject.h"

class LogManager : public QObject
{
    Q_OBJECT
public:
    LogManager();
    ~LogManager();

    static void Install();
    static void Uninstall();
    static void OutMsg(QtMsgType type, const QMessageLogContext &content, const QString &msg);
};

#endif // LOGMANAGER_H
