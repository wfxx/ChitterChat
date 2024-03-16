#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#define EventMgr EventManager::Instance()

class EventManager
{

public:
    EventManager();
    ~EventManager();

    static EventManager* Instance();
private:
    static EventManager* m_Instance;
};
#endif // EVENTMANAGER_H
