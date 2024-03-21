#ifndef FOUNDDIALOG_H
#define FOUNDDIALOG_H

#include <QDialog>

namespace Ui {
class FoundDialog;
}

class FoundDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FoundDialog(QWidget *parent = nullptr);
    ~FoundDialog();

private:
    Ui::FoundDialog *ui;
};

#endif // FOUNDDIALOG_H
