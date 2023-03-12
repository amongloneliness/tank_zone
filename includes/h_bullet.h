#include "h_sprites_path.h"
#include "../sfml/h_sfml.h"

class Bullet {
    private:
        Texture tx_bullet;      // текстура: пуля
        Sprite spr_bullet;      // спрайт: пуля
        int is_active;          // состояние пули: [активна / не активна]
        float speed;            // скорость движения пули
        float life_time;        // время жизни пули
        float moveX;            // движение по OX
        float moveY;            // движение по OY
    public:
        // конструктор
        Bullet();

        // выстрел
        void shoot(
            const float &t_life_time,       // время жизни
            const float &t_speed,           // скорость пули
            const float &t_moveX,           // движение по OX
            const float &t_moveY,           // движение по OY
            const float &pos_x,             // начальная позиция x
            const float &pos_y,             // начальная позиция y
            const float &rotation           // поворот пули
        );

        // отрисовка / обновление
        void update(
            const float &time,
            RenderWindow &w
        );
};