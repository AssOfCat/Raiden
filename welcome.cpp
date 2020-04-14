#include "welcome.h"
#include "ui_welcome.h"

Welcome::Welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
    connect(ui->BeginGame,SIGNAL(clicked()),this,SLOT(runGame()));
}

void Welcome::runGame()
{
    //MainScene w;
    //w.show();
    qDebug("123");
}

Welcome::~Welcome()
{
    delete ui;
}
