#ifndef DML_TIMER_H
#define DML_TIMER_H

#include <SDL3/SDL.h>
#include "DML/Global.h"

class Timer {
public:
    Timer();

    void init();
    void update() const;
private:
    Uint64 start;
};


#endif //DML_TIMER_H
