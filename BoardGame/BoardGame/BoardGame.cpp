// BoardGame.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "BoardGame.h"


// This is an example of an exported variable
BOARDGAME_API int nBoardGame=0;

// This is an example of an exported function.
BOARDGAME_API int fnBoardGame(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see BoardGame.h for the class definition
BoardGame::BoardGame(const wchar_t* title) : m_title(title)
{
}