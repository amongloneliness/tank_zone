#include "../../includes/h_bullet.h"

Bullet::Bullet()
{
    is_active = speed = life_time = moveX = moveY = 0;
    tx_bullet = ft_load_texture(BULLET_PATH);
    spr_bullet.setTexture(tx_bullet);
    spr_bullet.setOrigin(BULLET_W / 2, BULLET_H + TANK_GUN_H * 0.2f);
}