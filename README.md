Проект Tank Zone
================

Гайд по запуску **Платформа Linux**
----------------
> 1. скачать git репозиторий "**git clone [ссылка на репозиторий]**".
> 2. запустить в терминале "**sh compile.sh**" внутри архива для компиляции проекта.
> 3. запустить в терминале "**sh start.sh**" для запуска проекта

Альтернативный:
---------------
**Выполнить внутри архива:**

> 1. **mkdir build**
> 2. **cd build**
> 3. **cmake ..**
> 4. **cmake --build .**
> 5. **cd ..**
> 6. **./build/game**
  
Запуск программы относительно корня проекта: ./build/game

Содержимое файла compile.sh
---------------
> #!/bin/bash/  
> mkdir build  
> cd build  
> cmake ..  
> *cmake --build .  
> cd ..  


Содержимое файла start.sh
---------------
> #!/bin/bash/  
> ./build/game  

<iframe
    width="640"
    height="480"
    src="https://youtu.be/PD3d6GlkvTU"
    frameborder="0"
    allow="autoplay; encrypted-media"
    allowfullscreen
>
</iframe>
