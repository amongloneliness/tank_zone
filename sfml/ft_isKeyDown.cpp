#include "h_sfml.h"

int ft_isKeyDown()
{
    return Keyboard::isKeyPressed(Keyboard::Down);
}