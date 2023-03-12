#ifndef H_SFML_H
#define H_SFML_H

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

/*
    обработка нажатий клавиш
*/
int ft_isKeyUp();           // стрелка вверх
int ft_isKeyDown();         // стрелка вниз
int ft_isKeyLeft();         // стрека влево
int ft_isKeyRight();        // стрелка вправо
int ft_isKeyW();            // клавиша W
int ft_isKeyS();            // клавиша S
int ft_isKeyA();            // клавиша A
int ft_isKeyD();            // клавиша D
int ft_isKeySpace();        // клавиша Space

/*
    другие прототипы
*/
Texture ft_load_texture(const char *path);    // возвращает объект [текстура] по указанному пути

#endif