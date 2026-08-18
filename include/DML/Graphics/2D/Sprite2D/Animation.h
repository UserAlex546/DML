#ifndef DML_ANIMATION_H
#define DML_ANIMATION_H

struct Animation {
    int x, y;

    unsigned short frames, speed;

    Animation(): x(0), y(0), frames(0), speed(0) {}

    Animation(int i_x, int i_y, short f, short s):
        x(i_x), y(i_y), frames(f), speed(s) {}
};

#endif //DML_ANIMATION_H