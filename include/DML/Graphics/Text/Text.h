#ifndef DML_TEXT_H
#define DML_TEXT_H

#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <vector>

#include "DML/Graphics/2D/Texture2D/Texture2D.h"
#include "DML/Graphics/Shader/Shader.h"

#include "DML/Graphics/2D/Camera2D/Camera2D.h"
#include "DML/Math.h"

class Text
{
public:
    Text();
    ~Text();

    void load_font(const char* path, float size);

    // Simple draw (default color = white)
    void draw_text(const char* text, Vec2 pos, Shader* shader, Camera2D* cam = nullptr);
    void draw_text_scale(const char* text, Vec2 pos, Vec2 scale, Shader* shader, Camera2D* cam = nullptr);
    void draw_text_rotated(const char* text, Vec2 pos, float rotation, Shader* shader, Camera2D* cam = nullptr);

    // Draw with color
    void draw_text_c(const char* text, SDL_Color color, Vec2 pos, Shader* shader, Camera2D* cam = nullptr);
    void draw_text_scale_c(const char* text, SDL_Color color, Vec2 pos, Vec2 scale, Shader* shader, Camera2D* cam = nullptr);
    void draw_text_rotated_c(const char* text, SDL_Color color, Vec2 pos, float rotation, Shader* shader, Camera2D* cam = nullptr);

    // Custom text (color, scaling, rotation)
    // TODO: Finish ts later
    // TODO: Nevermind
    void draw_text_custom(const char* text, SDL_Color color, Vec2 pos, Vec2 scale, float rotation, Shader* shader, Camera2D* cam = nullptr);

    void render();

    void clear();
    void cleanUp();
private:
    struct TextStr {
        Texture2D* texture = nullptr;
        Shader* shader = nullptr;
        RectangleShape2D dstr = { 0.0f, 0.0f, 0.0f, 0.0f };

        Camera2D* cam = nullptr;

        float rotation = 0.0f;

        bool rotating = false;

        Vec2 scale = {1.0f, 1.0f};
        Vec2 origin = {0.0f, 0.0f};
    };

    TTF_Font* font = nullptr;
    std::vector<TextStr> strings;
};

#endif //DML_TEXT_H
