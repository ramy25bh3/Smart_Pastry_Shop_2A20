#ifndef LOGIN_H
#define LOGIN_H

#include "mainwindow.h"
#include <QSound>
#include <QPropertyAnimation>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT


public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    //login();

private slots:
    void on_pushButton_clicked();
signals :
    void sig();

private:
    Ui::login *ui;
    MainWindow *m;
    QSound *son;
    QPropertyAnimation *animation;

};

#endif // LOGIN_H
