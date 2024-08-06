#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QProgressBar>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void startProgress1();
    void startProgress2();
    void startProgress3();


private:
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QProgressBar *progressBar3;
    QPushButton *startButton1;
    QPushButton *startButton2;
    QPushButton *startButton3;


    QVBoxLayout* mainLayout;
    QHBoxLayout* barAndButtonLayout1;
    QHBoxLayout* barAndButtonLayout2;
    QHBoxLayout* barAndButtonLayout3;


};

#endif // MAINWINDOW_H

