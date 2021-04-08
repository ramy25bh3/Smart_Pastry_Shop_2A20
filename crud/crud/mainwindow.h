#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fournisseur.h"
#include "connexion.h"
#include "comm_achats.h"
#include <QSqlTableModel>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
#include "C:\Users\BNA\Desktop\Projet C++\crud\crud\SmtpClient-for-Qt-1.1\src/SmtpMime"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static EmailAddress * stringToEmail(const QString & str);
    void refreshw();
    void afficher();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_suppr_f_clicked();

    void on_pushButton_pdf_clicked();

    void on_rech_bouton_returnPressed();

    void on_pushButton_trier_fournisseur_clicked();

    void on_addAttachment_2_clicked();

    void on_sendEmail_2_clicked();

    void errorMessage(const QString & message);
    void on_export_2_clicked();
    void on_pushButton_3_clicked();

    void on_pushButton_mod_com_clicked();

    void on_pushButton_suppr_f_2_clicked();

    void on_imprint_ca_clicked();

    void on_pushButton_trier_comm_clicked();

    void on_rech_bouton_2_returnPressed();


private:
    Ui::MainWindow *ui;
    fournisseur f;
    QSqlTableModel *model;
    fournisseur tmpfournisseur;
    comm_achats tmpcomma;

};
#endif // MAINWINDOW_H
