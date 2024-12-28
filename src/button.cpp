#include "button.hpp"

Button::Button(const char *imagePath, Vector2 imagePosition, float scale)
{
    Image image = LoadImage(imagePath);

    int originalWidth = image.width;
    int originalHeight = image.height;

    int newWidth = static_cast<int>(originalWidth * scale);
    int newHeight = static_cast<int>(originalHeight * scale);

    ImageResize(&image, newWidth, newHeight);
    texture = LoadTextureFromImage(image);
    UnloadImage(image);
    position = imagePosition;
}

Button::~Button()
{
    UnloadTexture(texture);
}

void Button::Draw()
{
    DrawTextureV(texture, position, (wasHoveredBefore ? darkenColor : normalColor));
}

void Button::SetPosition(Vector2 newPosition)
{
    position = newPosition;
}

bool Button::isPressed(Vector2 mousePos, bool mousePressed)
{   
    Rectangle rect = {position.x, position.y, static_cast<float>(texture.width), static_cast<float>(texture.height)};
    
    bool isHovered = CheckCollisionPointRec(mousePos, rect);

    if (!isHovered && wasHoveredBefore)
    {
        UnHovered();
        wasHoveredBefore = false;
    }
    else if (isHovered && !wasHoveredBefore)
    {
        Hovered();
        wasHoveredBefore = true;
    }

    return isHovered && mousePressed;
}

void Button::Hovered()
{
    SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
}

void Button::UnHovered()
{
    SetMouseCursor(MOUSE_CURSOR_DEFAULT);
}
