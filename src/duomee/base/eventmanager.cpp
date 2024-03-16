
#include "eventmanager.h"

EventManager::EventManager()
{
    m_EventMap = new QMap<int, QList<std::function<void(void)>>>();
}

EventManager::~EventManager()
{

}

EventManager* EventManager::Instance()
{
    if (m_Instance == nullptr) {
        m_Instance = new EventManager();
    }
    return m_Instance;
}

void EventManager::Register(int id, std::function<void(void)> call)
{
    if (m_EventMap->contains(id)) {
        auto list = m_EventMap->value(id);
        list.append(call);
    } else {
        auto list = new QList<std::function<void(void)>>();
        list->append(call);
        m_EventMap->insert(id, *list);
    }
}

void EventManager::Unregister(int id)
{
    if (!m_EventMap->contains(id))
        return;
    m_EventMap->remove(id);
}

void EventManager::Trigger(int id)
{
    if (!m_EventMap->contains(id))
        return;
    auto list = m_EventMap->value(id);
    foreach (auto call, list) {
        call();
    }
}

