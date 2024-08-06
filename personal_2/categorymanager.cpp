#include "categorymanager.h"

CategoryManager::CategoryManager() {}

void CategoryManager::print(){
    qDebug()<<"Elenco categorie: ";
    if (categoryCollection.isEmpty()){
        qDebug()<<"lista categorie vuota";
    }
    if (!categoryCollection.isEmpty()){
        for (auto category : categoryCollection){
            qDebug()<<category->getDescription();
        }
    }
}

void CategoryManager::addCategory(Category* category){
    categoryCollection.push_back(category);
}


void CategoryManager::removeCategory(Category* category) {
    categoryCollection.removeOne(category);
    if (category) delete category;
}

