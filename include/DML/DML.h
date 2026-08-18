#ifndef DML_H
#define DML_H

// Includes
#include <SDL3/SDL.h>

// Other includes
#include "Global.h"
#include "Math.h"
#include "Graphics/Graphics.h"
#include "Managers/Audio/AudioManager.h"
#include "Managers/Input/InputManager.h"
#include "Managers/Timer/Timer.h"

// Variables
inline SDL_Event event;

// Functions
void DML_init(int gamepad = 0);

SDL_Event* DML_getEvent();

void DML_Process(bool& running, InputManager* input = nullptr);

void DML_quit();

#endif //DML_H