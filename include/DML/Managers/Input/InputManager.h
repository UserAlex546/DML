#ifndef DML_INPUTMANAGER_H
#define DML_INPUTMANAGER_H

#include <SDL3/SDL.h>
#include <SDL3/SDL_gamepad.h>

class InputManager
{
public:
    InputManager(SDL_Event* e);
    ~InputManager();

    void OpenGamepad(SDL_JoystickID id);

    bool isConnected() const;

    // Button input
    bool get_button(int key, bool gmpd) const;

    void CloseGamepad() const;

    void cleanUp();

private:
    SDL_Event* event;

    const bool* keyboard = SDL_GetKeyboardState(nullptr);

    SDL_Gamepad* gamepad = nullptr;

    float AxisToFloat(Sint16 value);
};

#endif //DML_INPUTMANAGER_H
