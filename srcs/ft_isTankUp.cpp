#include "../includes/h_tank_control.h"

int ft_isTankUp()
{
    return ft_isKeyUp() || ft_isKeyW();
}