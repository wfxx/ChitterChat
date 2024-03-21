#ifndef USERDATA_H
#define USERDATA_H

#include "QtCore/qmetatype.h"
#include "QtCore/qstring.h"
class UserData
{
public:
    UserData();
private:
    QString m_NikeName;
    QString m_HeadUrl;
    QString m_PhoneNum;
    QDate *m_BirthDay;
};

#endif // USERDATA_H
