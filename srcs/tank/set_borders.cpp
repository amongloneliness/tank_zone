#include "../../includes/h_tank.h"

void Tank::set_borders(
    const float &t_border_min_x,        // минимальное значение x по OX
    const float &t_border_max_x,        // максимальное значение x по OX
    const float &t_border_min_y,        // минимальное значение y по OY
    const float &t_border_max_y         // максимальное значение y по OY
) {
    border_min_x = t_border_min_x - spr_hull.getPosition().x;
    border_max_x = t_border_max_x - spr_hull.getPosition().x;
    border_min_y = t_border_min_y - spr_hull.getPosition().y;
    border_max_y = t_border_max_y - spr_hull.getPosition().y;

    return;
}