#include "../../includes/h_tank.h"

void Tank::set_origin()
{
    spr_hull.setOrigin(TANK_HULL_W / 2, TANK_HULL_H / 2);
    spr_gun.setOrigin(TANK_GUN_W / 2, TANK_GUN_H * 0.8f);
    spr_track_1.setOrigin(TANK_HULL_W / 4 + TANK_TRACK_W, TANK_TRACK_H / 2);
    spr_track_2.setOrigin(-TANK_HULL_W / 4, TANK_TRACK_H / 2);
    
    return;
}