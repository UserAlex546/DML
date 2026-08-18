#ifndef DML_RECTANGLESHAPE_H
#define DML_RECTANGLESHAPE_H

#include "DML/Typedef.h"

struct RectangleShape2D {
    float x, y, w, h;

    RectangleShape2D() : x(0), y(0), w(0), h(0) {}
    RectangleShape2D(float i_x, float i_y, float i_w, float i_h):
    x(i_x), y(i_y), w(i_w), h(i_h) {}

    void resize(float i_x, float i_y, float i_w, float i_h) {
        x = i_x;
        y = i_y;
        w = i_w;
        h = i_h;
    }
};

struct RectangleShape3D {
    float x, y, z, w, h, d;

    RectangleShape3D(): x(0), y(0), z(0), w(0), h(0), d(0) {}

    RectangleShape3D(float i_x, float i_y, float i_z, float i_w, float i_h, float i_d):
    x(i_x), y(i_y), z(i_z), w(i_w), h(i_h), d(i_d) {}
};


#endif //DML_RECTANGLESHAPE_H
