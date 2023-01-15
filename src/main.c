#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdbool.h>

SDL_Window * window;
SDL_Renderer * renderer;

bool initialize_window(void) {
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		fprintf(stderr, "Error initializing SDL. \n");
		return false;
	}
	// Create a SDL Window
	window = SDL_CreateWindow(
		NULL,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		800,
		600,
		SDL_WINDOW_BORDERLESS
	 );

	 if (!window) {
		fprinf(stderr, "Error creating SDL window. \n");
		return false;
	 }

	// Create a SDL Renderer
	renderer = SDL_CreateRenderer(window, -1, 0);
	if (!renderer) {
		fprinf(stderr, "Error creating SDL renderer. \n");
		return false;
	}

	return true;
}

int main(void) {
	/* Create a SDL Window */

	initialize_window();

	return 0;
}
