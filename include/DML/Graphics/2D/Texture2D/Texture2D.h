#ifndef DML_TEXTURE2D_H
#define DML_TEXTURE2D_H

#include <glad/gl.h>
#include <SDL3/SDL.h>

struct Texture2D {
    GLuint id = 0;
    float width = 0;
    float height = 0;

    Texture2D() = default;
    ~Texture2D() { destroy(); }

    Texture2D& operator=(Texture2D&& other) noexcept;

    bool loadFromFile(const char* path);
    bool loadFromSurface(SDL_Surface* surface);

    void bind(unsigned int uint = 0) const;

    void resize(float width, float height);

    void destroy();
};

#endif //DML_TEXTURE2D_H
