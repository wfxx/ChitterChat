#ifndef ACCOUNTDATA_H
#define ACCOUNTDATA_H

#include "QtCore/qstring.h"
class AccountData
{
public:
    AccountData();

    bool Register(QString account, QString password);
    bool Login(QString account, QString password);

    void BindPhone(QString phoneNum);
    void BindEmail(QString emailAddr);

    void CheckPhone(QString phoneNum, int code);
    void CheckEmail(QString emailAddr, int code);
    bool ChangePassword(QString password);
private:
    QString m_Account;
    QString m_Password;
    QString m_PhoneNum;
    QString m_EmailAddr;

    void CheckAccount(QString account);
    void CheckPassword(QString password);
};

#endif // ACCOUNTDATA_H
