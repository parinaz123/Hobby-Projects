
#ifndef __FLOCKING_MONITOR_H
#define __FLOCKING_MONITOR_H

#include "SDL/SDL.h"

#include "utils/SDLHandler.h"

class FlockingMonitor {

	private: 

		SDL_Surface *screen;

	public:

		// Does nothing
		FlockingMonitor();
		// Starts the SDL stuff.
		// Pass -1 as the first argument to get a fullscreen window.
		FlockingMonitor( int, int );

		// Closes the SDL stuff.
		~FlockingMonitor();

};

#endif

