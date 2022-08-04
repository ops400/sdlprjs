#ifndef IMWI_H
#define IMWI_H
#include <SDL2/SDL.h>
#define SWIDTH 1280 
#define SHEIGHT 720
#define NICEPATH "assets/nice.png"
#define SWPU SDL_WINDOWPOS_UNDEFINED
#define NICEW 480
#define NICEH 480

#ifdef MAINFILE
	#define EXT
#else
	#define EXT extern
#endif

EXT SDL_Renderer* renderer;
EXT SDL_Window* window;
EXT SDL_Rect niceRect;
EXT SDL_Surface* niceSurface;
EXT SDL_Texture* niceTexture;

void sdlInit(int width, int height, char* windowName);
void userInput(void);
void sceneShow(void);
void sceneDraw(void);
void loop(void);
void destroyer(void);

#endif
