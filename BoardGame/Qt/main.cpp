#include "mainwindow.h"
#include <QApplication>
#include<memory>
#include <game.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    std::unique_ptr<Game> game = std::make_unique<Game>( L"Chinczyk" );

    QString windowTile;
    windowTile=QString::fromWCharArray(game->getTitle());

    MainWindow w;
    w.setWindowTitle(windowTile);
    w.show();

    return a.exec();
}
