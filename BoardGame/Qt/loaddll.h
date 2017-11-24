#ifndef LOADDLL_H
#define LOADDLL_H

#include <iostream>
#include <windows.h>
#include <BoardGameI.h>



class DLLLoader
{
    typedef BoardGame* (__cdecl *BoardGameCreator)(const wchar_t* title);

};


#endif // LOADDLL_H
