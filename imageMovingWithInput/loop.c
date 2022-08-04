#include <SDL2/SDL.h>
#include "imwi.h"

void loop(void){
	sceneDraw();
	userInput();
	sceneShow();
	SDL_Delay(16);
}
