#include "../../includes/h_map.h"

void Map::load_textures()
{
    tx_block_1 = ft_load_texture(BLOCK_A_PATH);
    tx_block_2 = ft_load_texture(BLOCK_B_PATH);
    tx_block_3 = ft_load_texture(BLOCK_C_PATH);
    tx_decor_1 = ft_load_texture(DECOR_A_PATH);
    tx_decor_2 = ft_load_texture(DECOR_B_PATH);

    return;
}