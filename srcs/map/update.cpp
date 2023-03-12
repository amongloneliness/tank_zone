#include "../../includes/h_map.h"

void Map::update(RenderWindow &w)
{
    for (short i = 0; i < width; i++) {
        for (short j = 0; j < height; j++) {
            block.setPosition(i * BLOCK_W - offsetX, j * BLOCK_H - offsetY);
            decor.setPosition(i * DECOR_W - offsetX, j * DECOR_H - offsetY);
            
            // выбор текстуры для игрового блока
            if (m_blocks[i][j] == '0')
                block.setTexture(&tx_block_1);
            else if (m_blocks[i][j] == '1')
                block.setTexture(&tx_block_2);
            else if (m_blocks[i][j] == '2')
                block.setTexture(&tx_block_3);

            // выбор текстуры для декоративного блока
            if (m_decors[i][j] == '0')
                decor.setTexture(&tx_decor_1);
            else if (m_decors[i][j] == '1')
                decor.setTexture(&tx_decor_2);

            // вывод блоков
            w.draw(block);
            
            // вывод декораций
            if (m_decors[i][j] != ' ')
                w.draw(decor);
        }
    }


    return;
}