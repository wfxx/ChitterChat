
#include "eventmanager.h"

EventManager::EventManager()
{

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

