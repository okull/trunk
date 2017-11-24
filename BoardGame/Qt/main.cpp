#include "mainwindow.h"
#include <iostream>
#include <windows.h>
#include <QApplication>
#include <BoardGameI.h>

typedef BoardGame* (__cdecl *BoardGameCreator)(const wchar_t* title);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Load the DLL
    HINSTANCE dll_handle = ::LoadLibrary(TEXT("BoardGame.dll"));
    if (!dll_handle) {
        std::cout << "Unable to load DLL!\n";
        return 1;
    }

    // Get the function from the DLL
    BoardGameCreator createBoardGame = reinterpret_cast<BoardGameCreator>(
        ::GetProcAddress(dll_handle, "createBoardGame"));
    if (!createBoardGame) {
        std::cout << "Unable to load create_klass from DLL!\n";
        ::FreeLibrary(dll_handle);
        return 1;
    }

    // Ask the factory for a new object implementing the IKlass
    // interface

    BoardGame* game = createBoardGame(L"Chińczyk");
    QString windowTile;
    windowTile=QString::fromWCharArray(game->getTitle());
    w.setWindowTitle(windowTile);

    game->destroy();

    return a.exec();
}
