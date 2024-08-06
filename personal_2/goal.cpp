#include "goal.h"
#include <QDebug>
#include <algorithm>

Goal::Goal(QString d, QString cat, int ma, int count) : description(d), category(cat), max(ma), counter(count) {
    min = 0;
}

QString Goal::getDescription() const { return description; }
QString Goal::getCategory() const { return category; }
int Goal::getCounter() const { return counter; }
int Goal::getMax() const { return max; }
int Goal::getMin() const { return min; }

void Goal::setDescription(QString s) {
    description = s;
}

void Goal::setCategory(QString s) {
    category = s;
}

void Goal::setCounter(int n) {
    counter = n;
    emit updateTaskSignal();
}

void Goal::setMax(int n) {
    max = n;
    emit updateTaskSignal();
}

void Goal::print() {
    qDebug() << "Description: " << getDescription() <<" Category: "<<getCategory()<<" Total: "<< max << " Counter: " << getCounter();
}

void Goal::addOne() {
    if (counter < max) {
        counter++;
        emit updateTaskSignal();
    } else {
        qDebug() << "limite max superato";
    }
}

void Goal::removeOne() {
    if (counter > min) {
        counter--;
        emit updateTaskSignal();
    } else {
        qDebug() << "limite min superato";
    }
}


Goal::~Goal() {}
