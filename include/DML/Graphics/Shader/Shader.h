#ifndef DML_SHADER_H
#define DML_SHADER_H

#include "DML/Math.h"
#include <glad/gl.h>

struct Shader {
    GLuint id = 0;

    Shader() = default;
    ~Shader() { destroy(); }

    bool loadFromFile(const char* vertexSrc, const char* fragmentSrc);
    void use() const;
    void destroy();

    // Uniforms
    void setInt(const char* name, int value) const;
    void setFloat(const char* name, float value) const;

    void setVec2(const char* name, float x, float y) const;
    void setVec2(const char* name, Vec2 vector) const;

    void setVec3(const char* name, float x, float y, float z) const;
    void setVec3(const char* name, Vec3 vector) const;

    void setVec4(const char* name, float x, float y, float z, float w) const;
    void setVec4(const char* name, Vec4 vector) const;
};

#endif //DML_SHADER_H
