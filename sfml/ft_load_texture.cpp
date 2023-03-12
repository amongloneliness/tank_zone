#include "h_sfml.h"

Texture ft_load_texture(const char *path)
{
    Texture tx;
    int check = tx.loadFromFile(path);

    // проверка успешной загрузки
    if (!check) {
        printf("Ошибка загрузки текстуры спрайта по пути: %s\n", path);
        printf("Проверьте путь запуска приложения и наличие данного файла!\n");
    }

    return tx;
}