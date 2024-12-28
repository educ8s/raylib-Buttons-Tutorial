#pragma once
#include <raylib.h>

class Button
{
    public:
        Button(const char* imagePath, Vector2 imagePosition, float scale);
        ~Button();
        void Draw();
        bool isPressed(Vector2 mousePos, bool mousePressed);
        void SetPosition(Vector2 newPosition);

    private:
        Texture2D texture;
        Vector2 position;
        bool wasHoveredBefore = false;

        Color normalColor = WHITE;
        Color darkenColor = { 50, 50, 50, 255 };

        void Hovered();
        void UnHovered();
};