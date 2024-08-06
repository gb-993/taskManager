#include "mainwindow.h"
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent) {

    resize(600,600);
    mainLayout = new QVBoxLayout(this);
    barAndButtonLayout1 = new QHBoxLayout();
    barAndButtonLayout2 = new QHBoxLayout();
    barAndButtonLayout3 = new QHBoxLayout();

    // Hlayout 1
    progressBar1 = new QProgressBar(this);
    startButton1 = new QPushButton("Start", this);  // Aggiunto testo al pulsante
    progressBar1->setRange(0, 100);
    progressBar1->setStyleSheet(
        "QProgressBar {"
        "    border: 2px solid grey;"
        "    border-radius: 5px;"
        "    text-align: center;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #05B8CC;"  // Colore di riempimento
        "    width: 20px;"
        "}"
        );

    barAndButtonLayout1->addWidget(startButton1);
    barAndButtonLayout1->addWidget(progressBar1);

    // Hlayout 2
    progressBar2 = new QProgressBar(this);
    startButton2 = new QPushButton("Start", this);  // Aggiunto testo al pulsante
    progressBar2->setRange(0, 100);
    progressBar2->setStyleSheet(
        "QProgressBar {"
        "    border: 2px solid grey;"
        "    border-radius: 5px;"
        "    text-align: center;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #05B8CC;"  // Colore di riempimento
        "    width: 20px;"
        "}"
        );

    barAndButtonLayout2->addWidget(startButton2);
    barAndButtonLayout2->addWidget(progressBar2);

    // Hlayout 3
    progressBar3 = new QProgressBar(this);
    startButton3 = new QPushButton("Start", this);  // Aggiunto testo al pulsante
    progressBar3->setRange(0, 100);
    progressBar3->setStyleSheet(
        "QProgressBar {"
        "    border: 2px solid grey;"
        "    border-radius: 5px;"
        "    text-align: center;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #05B8CC;"  // Colore di riempimento
        "    width: 20px;"
        "}"
        );

    barAndButtonLayout3->addWidget(startButton3);
    barAndButtonLayout3->addWidget(progressBar3);

    // connect
    connect(startButton1, &QPushButton::clicked, this, &MainWindow::startProgress1);
    connect(startButton2, &QPushButton::clicked, this, &MainWindow::startProgress2);
    connect(startButton3, &QPushButton::clicked, this, &MainWindow::startProgress3);

    // layout
    mainLayout->addLayout(barAndButtonLayout1);
    mainLayout->addLayout(barAndButtonLayout2);
    mainLayout->addLayout(barAndButtonLayout3);

    setLayout(mainLayout);

}

void MainWindow::startProgress1() {
    progressBar1->setValue(50);
    QCoreApplication::processEvents();
}
void MainWindow::startProgress2() {
    progressBar2->setValue(50);
    QCoreApplication::processEvents();
}
void MainWindow::startProgress3() {
    progressBar3->setValue(50);
    QCoreApplication::processEvents();
}

MainWindow::~MainWindow() {
    // Codice di pulizia se necessario
}
