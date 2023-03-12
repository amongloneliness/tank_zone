#ifndef H_SPRITES_PATH_H
#define H_SPRITES_PATH_H

/*
 *
 *  Файл содержит расположение всех игровых спрайтов
 *  и их размеры (в пикселях).
 * 
 */

/*
    СОДЕРЖАНИЕ
    -----------------------------

    BLOCK_A         земля:  игровой блок
    BLOCK_B         трава:  игровой блок
    BLOCK_C         грязь:  игровой блок
    
    DECOR_A         коричневый кирпич: декоративный блок
    DECOR_B         серый кирпич:      декоративный блок

    TANK_HULL       корпус танка
    TANK_GUN        орудие танка
    TANK_TRACK      гусеница танка

*/


#define BLOCK_A_PATH    "files/locations/blocks/Block_A"
#define BLOCK_B_PATH    "files/locations/blocks/Block_B"
#define BLOCK_C_PATH    "files/locations/blocks/Block_C"

#define BLOCK_W 128     // ширина спрайта   [кол-во пикселей]
#define BLOCK_H 128     // высота спрайта   [кол-во пикселей]

#define DECOR_A_PATH    "files/locations/decorations/Decor_Tile_A.png"      
#define DECOR_B_PATH    "files/locations/decorations/Decor_Tile_B.png"

#define DECOR_W 128     // ширина спрайта   [кол-во пикселей]
#define DECOR_H 128     // высота спрайта   [кол-во пикселей]

#define TANK_HULL_PATH       "files/tank/Hull.png"
#define TANK_GUN_PATH        "files/tank/Gun.png"
#define TANK_TRACK_1_PATH    "files/tank/Track_1.png"
#define TANK_TRACK_2_PATH    "files/tank/Track_2.png"

#define TANK_HULL_W   256     // ширина спрайта   [кол-во пикселей] 
#define TANK_HULL_H   256     // высота спрайта   [кол-во пикселей]     
#define TANK_GUN_W    76      // ширина спрайта   [кол-во пикселей]  
#define TANK_GUN_H    194     // высота спрайта   [кол-во пикселей]      
#define TANK_TRACK_W  42      // ширина спрайта   [кол-во пикселей]    
#define TANK_TRACK_H  246     // высота спрайта   [кол-во пикселей]    



#endif