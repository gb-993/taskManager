#ifndef GOAL_H
#define GOAL_H

#include <QObject>
#include <QWidget>

class Goal : public QObject
{
    Q_OBJECT
private:
    QString description;
    QString category;
    int max;
    int min;
    int counter;
signals:
    void updateTaskSignal();
public:
    Goal(QString d = "default_description", QString cat = "default_category", int ma = 4, int count = 0);

    void print();
    void addOne();
    void removeOne();

    QString getDescription() const;
    QString getCategory() const;
    int getCounter() const;
    int getMax() const;
    int getMin() const;

    void setDescription(QString description);
    void setCategory(QString category);
    void setCounter(int counter);
    void setMax(int max);

    ~Goal();
};

#endif // GOAL_H

