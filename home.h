#ifndef HOME_H
#define HOME_H

#include <QDialog>

namespace Ui {
class home;
}

class home : public QDialog
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = 0);
    ~home();

private:
    Ui::home *ui;
};

#endif // HOME_H
