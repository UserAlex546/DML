#ifndef DML_TRIANGLESHAPE_H
#define DML_TRIANGLESHAPE_H

struct TriangleShape2D {
    float x, y, w, h;

    TriangleShape2D() : x(0), y(0), w(0), h(0) {}
    TriangleShape2D(float i_x, float i_y, float i_w, float i_h):
    x(i_x), y(i_y), w(i_w), h(i_h) {}

    void resize(float i_x, float i_y, float i_w, float i_h) {
        x = i_x;
        y = i_y;
        w = i_w;
        h = i_h;
    }
};

#endif //DML_TRIANGLESHAPE_H
