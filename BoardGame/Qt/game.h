#ifndef GAME_H
#define GAME_H

#include <loaddll.h>

class Game : public BoardGame
{
public:
    Game(const wchar_t* title);

    ~Game();

    /*< BoardGame >*/
    void destroy() override;

    const wchar_t* getTitle() override;
    /*< BoardGame />*/

private:
    BoardGame* m_boardGame{nullptr};
    DLLLoader m_loader;

};

#endif // GAME_H
