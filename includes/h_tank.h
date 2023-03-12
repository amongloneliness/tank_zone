#ifndef H_TANK_H
#define H_TANK_H

#include <math.h>
#include "h_sprites_path.h"
#include "../sfml/h_sfml.h"
#include "h_tank_control.h"

class Tank {
    private:
        float speed;                // скорость передвижения танка
        float rotate_speed;         // скорость поворота танка
        float rotate_gun_speed;     // скорость поворота оружия
        float moveX;                // движение по OX
        float moveY;                // движение по OY
        float border_min_x;         // ограничение движения по OX
        float border_max_x;         // ограничение движения по OX
        float border_min_y;         // ограничение движения по OY
        float border_max_y;         // ограничение движения по OY
        int tracks_frame;           // кадр гусениц на данный момент
        Texture tx_hull;            // текстура:  корпус танка
        Texture tx_gun;             // текстура:  орудие танка
        Texture tx_track_1;         // текстура:  гусеница танка (состояние 1)
        Texture tx_track_2;         // текстура:  гусеница танка (состояние 2)
        Sprite spr_hull;            // спрайт:  корпус танка
        Sprite spr_gun;             // спрайт:  орудие танка
        Sprite spr_track_1;         // спрайт:  гусеница танка 1
        Sprite spr_track_2;         // спрайт:  гусеница танка 2
        
        void load_textures();       // загрузка текстур
        void set_sprites();         // настройка спрайтов
        void set_origin();          // настройка центров изображений
        void draw(RenderWindow &w);               // отрисовка спрайтов
        void swap_tracks();         // смена текстур у спрайтов гусениц

    public:
        // конструктор
        Tank(
            const float &t_speed,            // скорость передвижения танка
            const float &t_rotate_speed,     // скорость поворота танка
            const float &t_rotate_gun_speed  // скорость поворота оружия
        );

        // обновление / отрисовка
        void update(
            const float &time,  // внутреннее время
            RenderWindow &w     // экземпляр окна
        );

        // установка начальных координат относительно окна
        void set_pos(const float &x, const float &y);

        // вернуть значение moveX
        float get_moveX();

        // вернуть значение moveY
        float get_moveY();

        // установить ограничения по OX и OY
        void set_borders(
            const float &t_border_min_x,        // минимальное значение x по OX
            const float &t_border_max_x,        // максимальное значение x по OX
            const float &t_border_min_y,        // минимальное значение y по OY
            const float &t_border_max_y         // максимальное значение y по OY
        );
};     

#endif