#include "../../includes/h_tank.h"

void Tank::set_sprites()
{
    spr_hull.setTexture(tx_hull);
    spr_gun.setTexture(tx_gun);
    spr_track_1.setTexture(tx_track_1);
    spr_track_2.setTexture(tx_track_1);

    return;
}