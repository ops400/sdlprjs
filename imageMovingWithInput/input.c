#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "imwi.h"

void userInput(void){
	SDL_Event userInputEvent;
	
	while(SDL_PollEvent(&userInputEvent)){
		switch(userInputEvent.type){
			case SDL_KEYDOWN:
				switch(userInputEvent.key.keysym.sym){
					case SDLK_ESCAPE:
						destroyer();
						IMG_Quit();
						SDL_Quit();
						break;
					case SDLK_LEFT:
						niceRect.x--;
						break;
					case SDLK_RIGHT:
						niceRect.x++;
						break;
					case SDLK_UP:
						niceRect.y--;
						break;
					case SDLK_DOWN:
						niceRect.y++;
						break;
					default:
						break;
				}
				break;
			default:
				break;
		}
	}

}
