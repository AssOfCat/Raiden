#include "mainscene.h"
#include <QApplication>
#include <QResource>
#include <welcome.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QResource::registerResource(GAME_RES_PATH);
    Welcome firstW;
    firstW.show();



    return a.exec();
}
