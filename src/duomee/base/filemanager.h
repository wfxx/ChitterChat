#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#define FileMgr FileManager::Instance()

class FileManager
{
public:
    FileManager();
    ~FileManager();

    static FileManager* Instance();
private:
    void InitPath();
    void GetRootPath();

    static FileManager *m_Instance;
};

#endif // FILEMANAGER_H
