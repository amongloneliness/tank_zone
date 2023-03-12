#include "../includes/h_tank_control.h"

int ft_isTankDown()
{
    return ft_isKeyDown() || ft_isKeyS();
}