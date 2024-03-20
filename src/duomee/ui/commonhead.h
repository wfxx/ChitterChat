#ifndef COMMONHEAD_H
#define COMMONHEAD_H

#include <QWidget>

namespace Ui {
class CommonHead;
}

class CommonHead : public QWidget
{
    Q_OBJECT

public:
    explicit CommonHead(QWidget *parent = nullptr);
    ~CommonHead();

private:
    Ui::CommonHead *ui;
};

#endif // COMMONHEAD_H
