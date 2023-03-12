#include "../../includes/h_tank.h"

void Tank::draw(RenderWindow &w)
{
    w.draw(spr_track_1);
    w.draw(spr_track_2);
    w.draw(spr_hull);
    w.draw(spr_gun);

    return;
}