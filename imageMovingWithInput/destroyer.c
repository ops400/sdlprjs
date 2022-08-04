#include "SDL2/SDL.h"
#include "imwi.h"

void destroyer(void){
	SDL_FreeSurface(niceSurface);
	SDL_DestroyTexture(niceTexture);
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}
