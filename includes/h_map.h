#ifndef H_MAP_H
#define H_MAP_H

#include <string>
#include "../sfml/h_sfml.h"
#include "h_sprites_path.h"

class Map {
    private:
        std::string *m_blocks;  // карта в виде массива строк [блоки]
        std::string *m_decors;  // карта в виде массива строк [декорации]
        int width;              // ширина карты: кол-во ячеек
        int height;             // высота карты: кол-во ячеек
        float offsetX;          // смещение по OX
        float offsetY;          // смещение по OY
        Texture tx_block_1;     // текстура:    блок 1
        Texture tx_block_2;     // текстура:    блок 2
        Texture tx_block_3;     // текстура:    блок 3
        Texture tx_decor_1;     // текстура:    декорация 1
        Texture tx_decor_2;     // текстура:    декорация 2
        RectangleShape block;   // объект: блок
        RectangleShape decor;   // объект: декорация

        void load_textures();   // установка текстур
    public:
        /* конструктор */
        Map(
            std::string *t_m_blocks,    // карта в виде массива строк [блоки]
            std::string *t_m_decors,    // карта в виде массива строк [декорации]
            const short &t_width,       // ширина карты [кол-во ячеек]
            const short &t_height       // высота карты [кол-во ячеек]
        );

        // отрисовка и обновление карты
        void update(RenderWindow &w);

        // смещение карты
        void set_offset(const float &x, const float &y);
};

#endif