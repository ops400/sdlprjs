#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "imwi.h"

void sdlInit(int width, int height, char* windowName){
	int renderFlags, windowFlags;
	renderFlags = SDL_RENDERER_ACCELERATED;
	windowFlags = 0;

	if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0){
		printf("Error at SDL_Init %s\n", SDL_GetError());
		exit(1);
	}

	if(IMG_Init(IMG_INIT_PNG) == 0){
		printf("Error at IMG_Init\n");
		exit(1);
	}

	window = SDL_CreateWindow(windowName, SWPU, SWPU, width, height, windowFlags);

	if(!window){
		printf("Error at window%s\n", SDL_GetError());
		exit(1);
	}

	renderer = SDL_CreateRenderer(window, -1, renderFlags);

	if(!renderer){
		printf("Error at renderer%s\n", SDL_GetError());
		exit(1);
	}
	
	niceRect.w = NICEW;
	niceRect.h = NICEH;

	niceSurface = IMG_Load(NICEPATH);
	if(niceSurface ==  NULL){
		printf("Error at niceSurface%s\n", IMG_GetError());
		exit(1);
	}

	niceTexture =  SDL_CreateTextureFromSurface(renderer, niceSurface);
	if(niceTexture ==  NULL){
		printf("Error at niceTexture\n");
		exit(1);
	}

}
