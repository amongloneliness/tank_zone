#include "../../includes/h_tank.h"

void Tank::set_pos(const float &x, const float &y)
{
    spr_hull.setPosition(x, y);
    spr_gun.setPosition(x, y);
    spr_track_1.setPosition(x, y);
    spr_track_2.setPosition(x, y);

    return;
}