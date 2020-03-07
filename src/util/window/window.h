#ifndef _powergl_util_window_h
#define _powergl_util_window_h

#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>

#include "../../powergl.h"
#include "../app/app.h"


typedef struct powergl_util_window_t powergl_util_window;


struct powergl_util_window_t
{

    powergl_util_app *root_app;
    SDL_Window *window;
    SDL_GLContext context;
    int width;
    int height;
};

powergl_util_window *powergl_util_window_new( powergl_util_app *app );
int powergl_util_window_create( powergl_util_window *, int, int );
int powergl_util_window_run( powergl_util_window * );


#endif
