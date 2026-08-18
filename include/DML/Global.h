#ifndef DML_GLOBAL_H
#define DML_GLOBAL_H

#include <cstdint>
#include <SDL3/SDL.h>
#include <glad/gl.h>

#define RENDER_NEAREST GL_NEAREST
#define RENDER_LINEAR GL_LINEAR
#define RENDER_MIPMAP_NEAREST 0x00
#define RENDER_MIPMAP_LINEAR 0x01

//// Variables
namespace dml
{
    constexpr std::uint32_t EXIT_SUCSESS = 0x00;
    constexpr std::uint32_t EXIT_FAUILTURE = 0x01;

    constexpr std::uint16_t APV = 1;					// Pause value for pausing animation
    constexpr std::uint16_t MAX_CHANNELS = 16;		// Maximum value of channels for sounds

    extern short CAM_MORGIN;
    extern float CELL_SIZE;

    // Graphics
    extern int SCREEN_W;
    extern int SCREEN_H;

    extern int RENDER_TYPE;
    extern int RENDER_SCALE;
    extern int RENDER_TYPE_MIPMAP;

    constexpr std::uint16_t FPS = 0x3c;
    constexpr int frameDelay = 1000 / FPS;

    inline GLuint VAO, VBO;

    constexpr float quadVertices[] = {
        // pos
        0.0f, 1.0f, 0.0f, 1.0f,
        0.0f, 0.0f, 0.0f, 0.0f,
        1.0f, 0.0f, 1.0f, 0.0f,

        0.0f, 1.0f, 0.0f, 1.0f,
        1.0f, 0.0f, 1.0f, 0.0f,
        1.0f, 1.0f, 1.0f, 1.0f
    };

    // Functions
    void setScreenSize(int w, int h);

    void RenderScale(int scale);
    void RenderType(int render = RENDER_LINEAR, int mipmap = RENDER_MIPMAP_LINEAR);

    void setCellSize(int size);
    void setCameraMorgin(int morgin);

    void initGLquad();
}

// Hitboxes
#define PLAYER_HITBOX 	{0x04, 0x02, 0x08, 0x0e}
#define BOX_HITBOX		{0x00, 0x00, dml::CELL_SIZE, dml::CELL_SIZE}

// Colors
#define WHITE {0xff, 0xff, 0xff, 0xff}
#define BLACK {0x00, 0x00, 0x00, 0xff}
#define RED   {0xff, 0x00, 0x00, 0xff}
#define GREEN {0x00, 0xff, 0x00, 0xff}
#define BLUE  {0x00, 0x00, 0xff, 0xff}

#endif //DML_GLOBAL_H
