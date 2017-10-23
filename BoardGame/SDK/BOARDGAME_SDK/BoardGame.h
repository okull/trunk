// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the BOARDGAME_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// BOARDGAME_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BOARDGAME_EXPORTS
#define BOARDGAME_API __declspec(dllexport)
#else
#define BOARDGAME_API __declspec(dllimport)
#endif

// This class is exported from the BoardGame.dll
class BOARDGAME_API BoardGame {
public:
	BoardGame(const wchar_t* title);
	// TODO: add your methods here.
	const wchar_t* getTitle()
	{
		return m_title;
	}

	const wchar_t* m_title;
};

extern BOARDGAME_API int nBoardGame;

BOARDGAME_API int fnBoardGame(void);
