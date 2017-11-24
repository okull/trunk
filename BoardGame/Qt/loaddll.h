#ifndef LOADDLL_H
#define LOADDLL_H

#include <iostream>
#include <windows.h>
#include <exception>
#include <BoardGameI.h>



class DLLLoader
{
    typedef BoardGame* (__cdecl *BoardGameCreator)(const wchar_t* title);

public:
    DLLLoader()
    {
    }

    void loadDLL()
    {
        // Load the DLL
        m_dllHandle = ::LoadLibrary(TEXT("BoardGame.dll"));
        if (!m_dllHandle) {
            throw std::exception("Unable to load DLL!\n");
        }

        // Get the function from the DLL
        createBoardGame = reinterpret_cast<BoardGameCreator>(
            ::GetProcAddress(m_dllHandle, "createBoardGame"));
        if (!createBoardGame) {
            ::FreeLibrary(m_dllHandle);
            throw std::exception("Unable to load create_klass from DLL!\n");
        }
    }

    ~DLLLoader()
    {
        ::FreeLibrary(m_dllHandle);
    }

    BoardGameCreator createBoardGame {nullptr};

private:
    HINSTANCE m_dllHandle;
};


#endif // LOADDLL_H
