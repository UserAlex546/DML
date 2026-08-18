#ifndef DML_TILE2D_H
#define DML_TILE2D_H

#include "DML/Global.h"
#include "DML/Math.h"
#include "DML/Graphics/Graphics.h"

struct TileD {
    short id;
    char flip;
};

struct Tile2D {
    Vec2 position, velocity, start_pos;
    RectangleShape2D hitbox;
    uint16_t gType;
    uint8_t cType;
    uint8_t mType;

    Sprite2D sprite;
    bool flipped;

    Tile2D(Vec2 pos, RectangleShape2D hb, Texture2D* texture);

    RectangleShape2D getHitbox() const;

    void move(Vec2& move);

    void setSpriteDst(RectangleShape2D& dst);

    void setShader(Shader* shader);

    void animate(const char* name, RectangleShape2D dst, short f, short s);

    void setFlipping(unsigned char flip);

    bool getInCamera(Camera2D* camera, float margin) const;

    void render(Camera2D* cam = nullptr);
};

#endif //DML_TILE2D_H