#ifndef DML_SPRITE2D_H
#define DML_SPRITE2D_H

#include <map>

#include "DML/Math.h"
#include "DML/Graphics/2D/Camera2D/Camera2D.h"
#include "DML/Graphics/Shader/Shader.h"

#include "Animation.h"
#include "DML/Graphics/2D/Texture2D/Texture2D.h"
#include "DML/Shapes/RectangleShape.h"

class Sprite2D
{
public:

    Sprite2D();

    ~Sprite2D();

    // Return functions
    Vec2& getPosition();

    Texture2D* getTexture() const;

    Vec2& getOrigin();

    // Static functions
    // Texture
    void setTexture(Texture2D* tex);

    void setTextureRect(RectangleShape2D& rect);

    // Origin
    void setOrigin(float x, float y);

    void setOrigin(Vec2& org);

    // Position
    void setPosition(float x, float y);

    void setPosition(Vec2& pos);

    // Rotation
    void setRotation(float value);

    void setRotationSpeed(float speed);

    // Transforming
    void setScale(float s_x, float s_y);

    void setScale(Vec2& s_size);

    void flip(bool b, short type);

    void setVisible(bool b) { visible = b; };

    bool getVisible() const { return visible; };

    // Shader
    void setShader(Shader* shdr);

    // Animating
    void set_animated(bool b);

    void create_animation(const char* name, int x, int y, uint16_t f, uint16_t s);

    void set_animation(const char* name, bool l = true);

    void pause_animation(bool b);

    void set_pingpong(bool b);

    void set_frame(uint32_t f) { currentFrame = f; };

    uint32_t get_frame() const { return currentFrame; };

    uint16_t get_frames() const { return frames; };

    void render(const Camera2D* cam = nullptr);

private:
    RectangleShape2D size;

    Texture2D* texture;

    Shader* shader;

    Vec2 origin;

    // Variables
    Vec2 position, scale, aSrcP;

    float rotation;

    uint16_t frames, speed;

    bool flippedH, flippedV, rotated, scaled, animated, pingpong;

    bool visible;

    // Advanced animation control
    bool paused, loop, finished;
    uint32_t currentFrame;
    Uint32 lastTick;
    Uint32 pauseOffset;

    std::map<const char*, Animation> animList;
};

#endif //DML_SPRITE2D_H
