#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include "mainscene.h"

namespace Ui {
class Welcome;
}

class Welcome : public QWidget
{
    Q_OBJECT



public:
    explicit Welcome(QWidget *parent = 0);
    void runGame();
    ~Welcome();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
