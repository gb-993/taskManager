#include "mainwindow.h"

#include <QApplication>
#include "goal.h"
#include "category.h"
#include "categorymanager.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Goal g1("mangiare", "salute", 4,0);
    Goal g2;
    g1.print();
    g2.print();
    qDebug()<<"categoria con 2 goal vuoti";
    Category c1("salute");
    c1.addGoal(&g1);
    c1.addGoal(&g2);
    c1.print();
    qDebug()<<"categoria con un task completo";
    g1.print();
    g1.addOne();
    g1.print();
    c1.print();
    qDebug()<<"categoria con un task in meno quindi vuota";
    g1.removeOne();
    c1.print();
    qDebug()<<"category manager con 1 categoria";
    CategoryManager cm;
    cm.addCategory(&c1);
    cm.print();
    qDebug()<<"category manager senza categorie";   // funziona solo se non faccio DELETE CATEGORY
    cm.removeCategory(&c1);
    cm.print();
    //qDebug()<<"tentativo rimozione categoria esistente, ma non dentro al categoryMAnager";
    //cm.removeCategory(&c1);

    return a.exec();
}
