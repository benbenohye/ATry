 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setupConnects();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupConnects()
{
    connect(this->ui->prevButton,SIGNAL(clicked(bool)),this,SLOT(handlePrevButtonClicked()));
    connect(this->ui->playButton,SIGNAL(clicked(bool)),this,SLOT(handlePlayButtonClicked()));
    connect(this->ui->nextButton,SIGNAL(clicked(bool)),this,SLOT(handleNextButtonClicked()));
    connect(this->ui->progressSlider,SIGNAL(sliderMoved(int)),this,SLOT(handleProgressSliderMoved(int)));
    connect(this->ui->volumeDial,SIGNAL(sliderMoved(int)),this,SLOT(handleVolumeDialMoved(int)));
}

void MainWindow::handlePrevButtonClicked()
{
    qDebug() <<"prev button click";
}

void MainWindow::handlePlayButtonClicked()
{
    qDebug() <<"play/pause button click";
}

void MainWindow::handleNextButtonClicked()
{
    qDebug() <<"next button click";
}

void MainWindow::handleProgressSliderMoved(int pos)
{
    qDebug() <<"progress moved"<<pos;
}

void MainWindow::handleVolumeDialMoved(int pos)
{
    qDebug() <<"volume moved"<<pos;
}
