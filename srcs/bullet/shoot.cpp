#include "../../includes/h_bullet.h"

void Bullet::shoot(
    const float &t_life_time,       // время жизни
    const float &t_speed,           // скорость пули
    const float &t_moveX,           // движение по OX
    const float &t_moveY,           // движение по OY
    const float &pos_x,             // начальная позиция x
    const float &pos_y,             // начальная позиция y
    const float &rotation           // поворот пули
) {
    is_active = 1;
    life_time = t_life_time * 60;
    speed = t_speed;
    moveX = t_moveX;
    moveY = t_moveY;
    spr_bullet.setPosition(pos_x, pos_y);
    spr_bullet.setRotation(rotation);

    return;
}