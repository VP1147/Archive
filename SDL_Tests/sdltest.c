#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

const int x = 1024;
const int y = 768;
//const int SCREEN_FPS = 60;
//const int SCREEN_TICKS_PER_FRAME = 1000 / SCREEN_FPS;

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
SDL_Event event;

const int Objects = { 1, 2, 3 }; // List of game objects
void DrawPlayer(int size, int x, int y) {
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	SDL_Rect rect;
	rect.x = x-(size/2); rect.y = y-(y/4);
	rect.w = size; rect.h = 20;
	SDL_RenderDrawRect(renderer, &rect);
	SDL_RenderDrawLine(renderer,rect.x,rect.y,rect.x+size-1,rect.y+19);
	SDL_RenderPresent(renderer);
}

void DrawObj(int x, int y) {
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	SDL_Rect rect;
	rect.x = x; rect.y = y;
	rect.w = 20; rect.h = 20;
	SDL_RenderDrawRect(renderer, &rect);
	SDL_RenderPresent(renderer);
}

void Gravity(int Obj) {
	Obj.pos += 1;
}

int main() {
	int posx = 50; int posy; int mousex; int mousey; bool quit = false; 
	bool visible[1] = { false }; 
	SDL_Init(SDL_INIT_VIDEO); 	
	window = SDL_CreateWindow("SDL tests", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, x, y, 0);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	while(!quit) {
		while(SDL_PollEvent(&event) != 0) {
			switch(event.type) {
				case SDL_QUIT: 
					quit = true;
					return 0;
					break;
				case SDL_MOUSEMOTION:
					mousex = event.motion.x;
					mousey = event.motion.y;
					break;
				case SDL_KEYDOWN:
					switch(event.key.keysym.sym) {
						case SDLK_DOWN: posy+=1; break;
						case SDLK_UP: posy-=1; break;
						case SDLK_RIGHT: posx+=1; break;
						case SDLK_LEFT: posx-=1; break;
						case SDLK_RETURN: visible[0] = true; break;	
					}
			}
		}

		DrawPlayer(posx, mousex, y);
		if(visible[0] == true) { DrawObj(x/2,g); g+=1; }
		SDL_SetRenderDrawColor(renderer,0, 0, 0, SDL_ALPHA_OPAQUE);
		SDL_RenderClear(renderer);
		}
	SDL_Quit();
	return 0;
}
	

