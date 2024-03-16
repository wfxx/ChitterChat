#ifndef COMMONTOAST_H
#define COMMONTOAST_H

#include <QWidget>

namespace Ui {
class ToastForm;
}

class ToastForm : public QWidget
{
    Q_OBJECT

public:
    explicit ToastForm(QWidget *parent = nullptr);
    ~ToastForm();

private:
    Ui::ToastForm *ui;
};

#endif // COMMONTOAST_H
