#ifndef DML_ENTITY2D_H
#define DML_ENTITY2D_H

#include <SDL3/SDL.h>

#include "DML/Math.h"
#include "DML/Components/2D/Hitbox/Hitbox2D.h"
#include "DML/Graphics/2D/Sprite2D/Sprite2D.h"

class Entity2D
{
public:
    // Variables
    Vec2 pos, spd;

    Sprite2D sprite;

    bool active = true;

    // Constructor and functions
    Entity2D(Vec2& position, Texture2D* texture);

    virtual ~Entity2D() = default;

    void setHitbox(const Hitbox2D& hitbox);

    void setSize(const int width, const int height);

    void setDirection(bool drt);

    virtual void update() = 0;

    void render(Camera2D* cam = nullptr);

    // Get functions
    Hitbox2D getHitbox() const;

    // Velocity
    Vec2& getVelocity();

    Vec2& getPos();

    int getCollXOffset();

    int getCollYOffset();

    bool getDirection();

    // Other things
    Vec2& getCenter();

    bool getInCamera(Camera2D* camera, float margin = 0);

private:
    Hitbox2D hitbox;

    bool dir;
};
#endif //DML_ENTITY2D_H