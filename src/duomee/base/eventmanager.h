#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include "QtCore/qmap.h"
#include <functional>

#define EventMgr EventManager::Instance()

class EventManager
{

public:
    EventManager();
    ~EventManager();

    static EventManager* Instance();

    void Register(int id, std::function<void(void)> call);
    void Unregister(int id);
    void Trigger(int id);
private:
    QMap<int, QList<std::function<void(void)>>> *m_EventMap;

    static EventManager *m_Instance;
};
#endif // EVENTMANAGER_H
