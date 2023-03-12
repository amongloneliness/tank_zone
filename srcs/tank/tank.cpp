#include "../../includes/h_tank.h"

Tank::Tank(
    const float &t_speed,             // скорость передвижения танка
    const float &t_rotate_speed,      // скорость поворота танка
    const float &t_rotate_gun_speed,  // скорость поворота оружия
    const float &t_gun_speed          // скорость стрельбы оружия
) {
    speed = t_speed;
    rotate_speed = t_rotate_speed;
    rotate_gun_speed = t_rotate_gun_speed;
    gun_speed = t_gun_speed;

    /* значения по-умолчанию */
    tracks_frame = moveX = moveY = 0;
    border_min_x = border_max_x = border_min_y = border_max_y = 0;

    load_textures();        // загрузка текстур
    load_soundbuffers();    // загрузка буферов звука
    set_sounds();           // настройка звуков
    set_sprites();          // настройка спрайтов
    set_origin();           // настройка центров спрайтов
}