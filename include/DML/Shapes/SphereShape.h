#ifndef DML_SPHERESHAPE_H
#define DML_SPHERESHAPE_H

struct SphereShape2D {
    float x, y, w, h;

    SphereShape2D() : x(0), y(0), w(0), h(0) {}
    SphereShape2D(float i_x, float i_y, float i_w, float i_h):
    x(i_x), y(i_y), w(i_w), h(i_h) {}

    void resize(float i_x, float i_y, float i_w, float i_h) {
        x = i_x;
        y = i_y;
        w = i_w;
        h = i_h;
    }
};

#endif //DML_SPHERESHAPE_H
