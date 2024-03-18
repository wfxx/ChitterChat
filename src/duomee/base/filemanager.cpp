#include "filemanager.h"

FileManager::FileManager()
{
    InitPath();
}

FileManager::~FileManager()
{

}

FileManager* FileManager::Instance()
{
    if (m_Instance == nullptr) {
        m_Instance = new FileManager();
    }
    return m_Instance;
}

void FileManager::InitPath()
{

}
