#include "founddialog.h"
#include "ui/login/ui_founddialog.h"

FoundDialog::FoundDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FoundDialog)
{
    ui->setupUi(this);
}

FoundDialog::~FoundDialog()
{
    delete ui;
}
