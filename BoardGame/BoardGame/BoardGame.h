// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the BOARDGAME_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// BOARDGAME_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

//#include <..\Singleton.h>

#include "BoardGameI.h"

// This class is exported from the BoardGame.dll
class BoardGameImpl : public BoardGame
{
public:
	BoardGameImpl(const wchar_t* title);

	void destroy() override;
	// TODO: add your methods here.
	virtual const wchar_t* getTitle() override
	{
		return m_title;
	}

private:
	const wchar_t* m_title;
};

extern "C" BOARDGAME_API BoardGame* __cdecl createBoardGame(const wchar_t* title)
{
	return new BoardGameImpl(title);
}

//extern BOARDGAME_API int nBoardGame;

//BOARDGAME_API int fnBoardGame(void);
