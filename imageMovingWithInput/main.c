#define MAINFILE
#include <SDL2/SDL.h>
#include "imwi.h"

int main(int argc, char** argv){
	SDL_Renderer* renderer;
	SDL_Window* window;
	SDL_Rect niceRect;
	SDL_Surface* niceSurface;
	SDL_Texture* niceTexture;
	
	sdlInit(SWIDTH, SHEIGHT, "Moving a image with the arrow keys");

	while(1){
		loop();
	}

	return 0;
}
