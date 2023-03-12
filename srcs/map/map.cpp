#include "../../includes/h_map.h"

Map::Map(
    std::string *t_m_blocks,    // карта в виде массива строк [блоки]
    std::string *t_m_decors,    // карта в виде массива строк [декорации]
    const short &t_width,       // ширина карты [кол-во ячеек]
    const short &t_height       // высота карты [кол-во ячеек]
) {
    m_blocks = t_m_blocks;
    m_decors = t_m_decors;
    width = t_width;
    height = t_height;

    /* параметры по-умолчанию */
    offsetX = offsetY = 0;

    // настройка размеров ячеек
    block.setSize(Vector2f(BLOCK_W, BLOCK_H));
    decor.setSize(Vector2f(DECOR_W, DECOR_H));

    load_textures();        // загружаем текстуры
}