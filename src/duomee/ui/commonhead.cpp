#include "commonhead.h"
#include "ui_commonhead.h"

CommonHead::CommonHead(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CommonHead)
{
    ui->setupUi(this);
}

CommonHead::~CommonHead()
{
    delete ui;
}
