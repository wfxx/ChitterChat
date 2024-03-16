#include "commonToast.h"
#include "ui_toastform.h"

ToastForm::ToastForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ToastForm)
{
    ui->setupUi(this);
}

ToastForm::~ToastForm()
{
    delete ui;
}
