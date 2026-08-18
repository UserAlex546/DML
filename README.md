# DML – Dynamic Multimedia Library

**DML** is a lightweight C++ game framework built on top of **SDL3** and **OpenGL**.  
It provides a simple, high-level API for creating 2D games with sprites, animations, cameras, input handling, audio, tilemaps, and more.

---

## Features

- **Window & Rendering**
  - Easy window creation with OpenGL context
  - Fullscreen toggle
  - VSync control
  - Custom clear color

- **2D Graphics**
  - `Sprite2D` with texture, origin, scale, rotation, flipping
  - Frame-based animations (with pause, loop, ping-pong support)
  - `Camera2D`
  - Custom shaders
  - Texture loading (via `stb_image`)
  - Basic shapes (`RectangleShape`, `TriangleShape`, `SphereShape`)

- **Managers**
  - `InputManager` (keyboard + gamepad support)
  - `AudioManager` (up to 16 channels)
  - `Timer`

- **2D Components**
  - `Entity2D`
  - `Hitbox2D`
  - `Tile2D` / `Map2D`

- **Utilities**
  - Math helpers (`Vec2`, etc.)
  - Global settings (screen size, render scale, cell size, etc.)

---

## Project Structure
DML/
├── bin/
│   └── DML.dll          # Runtime library
├── lib/
│   ├── libDML.dll.a     # Import library (MinGW)
│   └── cmake/DML/       # CMake config
├── include/
│   ├── DML/             # Main headers
│   ├── glad/            # OpenGL loader
│   ├── KHR/
│   └── stb_image.h
└── README.md

---

## Requirements

- **C++17** or newer
- **SDL3** development libraries
- OpenGL 3.3+ compatible GPU
- Compiler: MinGW-w64 / MSVC / Clang (currently distributed as MinGW DLL)

---

## Quick Start

### 1. Link

```cmake
cmake_minimum_required(VERSION 3.16)
project(MyGame)

set(CMAKE_CXX_STANDARD 17)

find_package(SDL3 REQUIRED)

add_executable(MyGame main.cpp)

target_include_directories(MyGame PRIVATE path/to/DML/include)
target_link_directories(MyGame PRIVATE path/to/DML/lib)
target_link_libraries(MyGame PRIVATE DML SDL3::SDL3)
```

### 2. Include

```cpp
#include <DML/DML.h>

```

## Link against:

DML (or libDML.dll.a)
SDL3
OpenGL

## Example (simple window):
```cpp
#include <DML/DML.h>

int main() {
    DML_init();                          // Initialize SDL3 + OpenGL

    Window window("My Game", 1280, 720);
    dml::initGLquad();                  // initialize GL quad for drawing

    InputManager input;

    bool running = true;
    while (running) {
        DML_Process(running, &input);    // Handle events + input

        Window::clear(0.1f, 0.1f, 0.15f);

        // --- Your game logic & rendering here ---

        window.display();
    }

    DML_quit();
    return 0;
}
```

## Author
UserAlex546
