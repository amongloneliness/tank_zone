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
        if (sound_rattle.getStatus() != Sound::Playing)
            sound_rattle.play();
            
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
        if (sound_rattle.getStatus() != Sound::Playing)
            sound_rattle.play();

        float temp_speed = ft_isTankUp() ? speed * time : -speed * time;
        float deg = (spr_hull.getRotation() - 90) / 180 * M_PI;
        float new_moveX = moveX + temp_speed * cos(deg);
        float new_moveY = moveY + temp_speed * sin(deg);
        
        if (new_moveX > border_min_x && new_moveX < border_max_x)
            moveX = new_moveX;

        if (new_moveY > border_min_y && new_moveY < border_max_y)
            moveY = new_moveY;

        // меняем текстуры гусениц
        if (ft_isTankRotLeft() == ft_isTankRotRight()) {
            swap_tracks();
        }
    }

    // остановка звука
    if (ft_isTankUp() == ft_isTankDown() && ft_isTankRotLeft() == ft_isTankRotRight()) {
        if (sound_rattle.getStatus() == Sound::Playing) {
            sound_rattle.stop();
            sound_rattle_end.play();
        }
    }

    // стрельба из орудия
    if (ft_isGunShot()) {
        if (sound_fire.getStatus() == Sound::Stopped) {
            float deg = (spr_gun.getRotation() - 90) / 180 * M_PI;

            bullet.shoot(time,
                gun_speed,
                cos(deg),
                sin(deg),
                spr_gun.getPosition().x,
                spr_gun.getPosition().y,
                spr_gun.getRotation()
            );
            
            sound_fire.play();
        }
    }

    bullet.update(time, w);
    draw(w);    // отрисовка объектов

    return;
}