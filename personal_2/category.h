#ifndef CATEGORY_H
#define CATEGORY_H

#include <QObject>
#include <QWidget>
#include <QProgressBar>
#include <QDebug>
#include "goal.h"

class Category : public QObject
{
    Q_OBJECT
private:
    QString description;
    QList<Goal*> goalCollection;
    int totalTask;
    int completedTask;

public:
    Category(QString description = "default_category_description");
    void print();
    QString getDescription();
    int getTotalTask();
    int getCompletedTask();
    ~Category();

public slots:
    void addGoal(Goal*); // apre QDialog per creazione (secondo modo per aggiungere sensore;
    void removeGoal(Goal*); // effetto su quello selezionato
    void modifyGoal(Goal*, int, int); // apre una QDialog per modificare dati ( visitor per modificarla a seconda del sensore)
    void refreshTask();
};

#endif // CATEGORY_H

