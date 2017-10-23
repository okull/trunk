#include "mainwindow.h"
#include <QApplication>
#include <BoardGame.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    BoardGame game(L"Chińczyk");
    QString windowTile;
    windowTile=QString::fromWCharArray(game.getTitle());
    w.setWindowTitle(windowTile);

    return a.exec();
}
