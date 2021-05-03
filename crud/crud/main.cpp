#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connexion C;
    bool test;
        test=C.createConnection();
    MainWindow w;

    //stylesheet
    QFile file(":/Toolery.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet { QLatin1String(file.readAll()) };
    a.setStyleSheet(styleSheet);

 if(test)
   //  qDebug() <<"La connexion reussie";
     QMessageBox::information(nullptr,QObject::tr("database is  open"),QObject::tr("La connexion est reussie\n"
                                                                                  "click OK to exit"),
                              QMessageBox::Ok);

 else
     //qDebug()<<"erreur de connection";
     QMessageBox::information(nullptr,QObject::tr("database is  not open"),QObject::tr("La connexion n est pas reussie\n"
                                                                                  "click cancel to exit"),
                              QMessageBox::Cancel);


    w.show();
    return a.exec();
}