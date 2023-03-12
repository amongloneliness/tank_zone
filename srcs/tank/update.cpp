#include "../../includes/h_tank.h"

void Tank::update(
    const float &time,  // внутреннее время
    RenderWindow &w     // экземпляр окна
) {
    /*  -----------------------------------
        |           управление            |
        -----------------------------------
    */

    // поворот корпуса
    if (ft_isTankRotLeft() != ft_isTankRotRight()) {
        float temp_rotate = ft_isTankRotRight() ? 
            rotate_speed * time : -rotate_speed * time;

        spr_hull.rotate(temp_rotate);
        spr_gun.rotate(temp_rotate);
        spr_track_1.rotate(temp_rotate);
        spr_track_2.rotate(temp_rotate);

        swap_tracks();      // меняем текстуры гусениц
    }

    // поворот орудия
    if (ft_isGunRotLeft() != ft_isGunRotRight() && !ft_isGunShot()) {
        float temp_rotate = ft_isGunRotRight() ?
            rotate_gun_speed * time : -rotate_gun_speed * time; 
        
        spr_gun.rotate(temp_rotate);
    }

    // движение танка
    if (ft_isTankUp() != ft_isTankDown()) {
        float temp_speed = ft_isTankUp() ? speed * time : -speed * time;
        float deg = (spr_hull.getRotation() - 90) / 180 * M_PI;

        moveX += temp_speed * cos(deg);
        moveY += temp_speed * sin(deg);

        // меняем текстуры гусениц
        if (ft_isTankRotLeft() == ft_isTankRotRight())
            swap_tracks();
    }

    /* стрельба */

    draw(w);    // отрисовка объектов

    return;
}