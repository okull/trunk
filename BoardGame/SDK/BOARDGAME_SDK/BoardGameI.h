#pragma once

#ifdef BOARDGAME_EXPORTS
#define BOARDGAME_API __declspec(dllexport)
#else
#define BOARDGAME_API __declspec(dllimport)
#endif

class BoardGame
{
protected:
	~BoardGame() = default;
public:
	virtual void destroy() = 0;
	virtual const wchar_t* getTitle() = 0;
};