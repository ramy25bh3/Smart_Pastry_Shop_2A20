#ifndef ACHAT_H
#define ACHAT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <vector>
#include <QDate>
class achat
{
public:
    achat();
    achat(QString ,QDate ,int,int  ,QString ,QString ,QString ,int );
    bool ajouter_achat();
    bool modif_achat();
    bool supp_achat(int);
   QSqlQueryModel * afficher2();

   QSqlQueryModel * combobox2();


    QSqlQueryModel * combobox3();

    QSqlQueryModel *  cherchera(int,int,QString,QDate,int);

     QSqlQueryModel *  triera(int ,int);
private:
    int id_a;
    int id_e;
    QString nom_c;
    QString prenom_c;
    QDate date;
    QString produit;
    int quantite;
    QString conf;


};

#endif // ACHAT_H
