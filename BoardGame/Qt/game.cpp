#include "game.h"
#include "loaddll.h"

Game::Game(const wchar_t* title) : m_loader()
{
    try
    {
        m_loader.loadDLL();
    }
    catch(std::exception& e)
    {
        std::cout << e.what();
    }

    m_boardGame = m_loader.createBoardGame(title);
}

Game::~Game()
{
    destroy();
}

void Game::destroy()
{
    m_boardGame->destroy();
}

const wchar_t* Game::getTitle()
{
    return m_boardGame->getTitle();
}
