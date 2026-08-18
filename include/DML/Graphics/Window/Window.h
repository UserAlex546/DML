#ifndef DML_WINDOW_H
#define DML_WINDOW_H

#include <SDL3/SDL.h>
#include <glad/gl.h>

class Window {
public:
    Window(const char* title, int w, int h, int flags = 0);
    ~Window();

    // idk
    void setIcon(const char* path);

    // Fullscreen stuff
    void setupFullscreen() const;
    void toggleFullscreen();

    // Graphics stuff
    static void vsync(int value);

    void display() const;

    static void clear(float r = 0, float g = 0, float b = 0);

    void cleanUp();

    SDL_Window* getWindow() const;
private:
    SDL_Window* window;
    SDL_GLContext context;
    SDL_DisplayMode target_mode;

    int windowedX, windowedY, windowedW, windowedH;
    bool fullscreen;
};


#endif //DML_WINDOW_H
