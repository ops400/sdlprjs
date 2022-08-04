#include <SDL2/SDL.h>
#include "imwi.h"

void sceneDraw(void){
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, niceTexture, NULL, &niceRect);
}

void sceneShow(void){
	SDL_RenderPresent(renderer);
}
