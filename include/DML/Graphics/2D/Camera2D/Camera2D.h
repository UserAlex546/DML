#ifndef DML_CAMERA2D_H
#define DML_CAMERA2D_H

#include "DML/Math.h"
#include "DML/Shapes/RectangleShape.h"

class Camera2D
{
public:
    Camera2D();

    // Viewport
    void setViewportSize(int width, int height);
    int getViewportWidth()  const;
    int getViewportHeight() const;

    // Center (aka position)
    void setCenter(const Vec2& newCenter);
    Vec2 getCenter() const;

    // Move the camera by an offset (in world units)
    void move(const Vec2& offset);

    // Zoom
    void setZoom(float newZoom);
    float getZoom() const;


    void zoom(float factor);
    void zoomIn(float amount = 0.1f);
    void zoomOut(float amount = 0.1f);


    Vec2 worldToScreen(const Vec2& worldPos) const;
    Vec2 screenToWorld(const Vec2& screenPos) const;

    RectangleShape2D applyToRect(const RectangleShape2D& worldRect) const;

private:
    Vec2 center;
    float currentZoom;
    int viewportWidth;
    int viewportHeight;
};

#endif //DML_CAMERA2D_H
