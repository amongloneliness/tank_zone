#include "../../includes/h_bullet.h"

void Bullet::update(const float &time, RenderWindow &w)
{
    if (life_time < 0)
        is_active = 0;

    if (is_active) {
        life_time -= time;
        spr_bullet.move(moveX * time * speed, moveY * time * speed);
        w.draw(spr_bullet);
    }

    return;
}