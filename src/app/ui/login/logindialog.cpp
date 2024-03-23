#include "logindialog.h"
#include "ui/login/ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::InitEvent()
{

}

void LoginDialog::ClickRegister()
{

}

void LoginDialog::ClickLogin()
{

}

void LoginDialog::ClickForgot()
{

}
