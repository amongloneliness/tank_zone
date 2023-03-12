#ifndef H_TANK_CONTROL
#define H_TANK_CONTROL

#include "../sfml/h_sfml.h"

/*
    события управления
*/
int ft_isTankUp();         // движение вверх
int ft_isTankDown();       // движение вниз
int ft_isTankRotLeft();    // поворот корпуса влево
int ft_isTankRotRight();   // поворот корпуса вправо
int ft_isGunShot();        // выстрел из орудия
int ft_isGunRotLeft();     // поворот орудия влево
int ft_isGunRotRight();    // поворот орудия вправо

#endif