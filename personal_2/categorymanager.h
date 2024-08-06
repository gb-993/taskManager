#ifndef CATEGORYMANAGER_H
#define CATEGORYMANAGER_H

#include <QObject>
#include <QWidget>
#include <category.h>

class CategoryManager: public QObject
{
    Q_OBJECT
private:
    QList<Category*> categoryCollection;
public:
    CategoryManager();
    void print();

    void addCategory(Category*);
    void removeCategory(Category*);  // deve rimuovere tutti i suoi goal attenzione!!!
    //void modifyCategory(Category);
};

#endif // CATEGORYMANAGER_H
