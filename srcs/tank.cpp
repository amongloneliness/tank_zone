#include "../includes/h_tank.h"

Tank::Tank(
    const float &t_speed,            // скорость передвижения танка
    const float &t_rotate_speed,     // скорость поворота танка
    const float &t_rotate_gun_speed  // скорость поворота оружия
) {
    speed = t_speed;
    rotate_speed = t_rotate_speed;
    rotate_gun_speed = t_rotate_gun_speed;

    /* значения по-умолчанию */
    tracks_frame = moveX = moveY = 0;

    load_textures();    // загрузка текстур
    set_sprites();      // настройка спрайтов
    set_origin();       // настройка центров спрайтов
}

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

void Tank::load_textures()
{
    tx_hull = ft_load_texture(TANK_HULL_PATH);
    tx_gun = ft_load_texture(TANK_GUN_PATH);
    tx_track_1 = ft_load_texture(TANK_TRACK_1_PATH);
    tx_track_2 = ft_load_texture(TANK_TRACK_2_PATH);

    return;
}

void Tank::set_sprites()
{
    spr_hull.setTexture(tx_hull);
    spr_gun.setTexture(tx_gun);
    spr_track_1.setTexture(tx_track_1);
    spr_track_2.setTexture(tx_track_1);

    return;
}

void Tank::set_origin()
{
    spr_hull.setOrigin(TANK_HULL_W / 2, TANK_HULL_H / 2);
    spr_gun.setOrigin(TANK_GUN_W / 2, TANK_GUN_H * 0.8f);
    spr_track_1.setOrigin(TANK_HULL_W / 4 + TANK_TRACK_W, TANK_TRACK_H / 2);
    spr_track_2.setOrigin(-TANK_HULL_W / 4, TANK_TRACK_H / 2);
    
    return;
}

void Tank::set_pos(const float &x, const float &y)
{
    spr_hull.setPosition(x, y);
    spr_gun.setPosition(x, y);
    spr_track_1.setPosition(x, y);
    spr_track_2.setPosition(x, y);

    return;
}

void Tank::draw(RenderWindow &w)
{
    w.draw(spr_track_1);
    w.draw(spr_track_2);
    w.draw(spr_hull);
    w.draw(spr_gun);

    return;
}

void Tank::swap_tracks()
{
    tracks_frame = (tracks_frame + 1) % 2;

    if (!tracks_frame) {
        spr_track_1.setTexture(tx_track_1);
        spr_track_2.setTexture(tx_track_1);
    } else {
        spr_track_1.setTexture(tx_track_2);
        spr_track_2.setTexture(tx_track_2);
    }

    return;
}