#include "../../includes/h_tank.h"

void Tank::load_textures()
{
    tx_hull = ft_load_texture(TANK_HULL_PATH);
    tx_gun = ft_load_texture(TANK_GUN_PATH);
    tx_track_1 = ft_load_texture(TANK_TRACK_1_PATH);
    tx_track_2 = ft_load_texture(TANK_TRACK_2_PATH);

    return;
}