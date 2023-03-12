# проверка версии cmake
cmake_minimum_required(VERSION 3.5)

# название проекта
project(game)

# cpp файлы
set(SOURCE_CPP 
    main.cpp    sfml/ft_load_texture.cpp   sfml/ft_isKeyA.cpp    sfml/ft_isKeyLeft.cpp
    sfml/ft_isKeySpace.cpp    sfml/ft_isKeyD.cpp    sfml/ft_isKeyRight.cpp
    sfml/ft_isKeyUp.cpp    sfml/ft_isKeyDown.cpp    sfml/ft_isKeyS.cpp
    sfml/ft_isKeyW.cpp    srcs/tank.cpp    srcs/ft_isTankUp.cpp
    srcs/ft_isTankDown.cpp    srcs/ft_isTankRotLeft.cpp    srcs/ft_isTankRotRight.cpp
    srcs/ft_isGunShot.cpp    srcs/ft_isGunRotLeft.cpp    srcs/ft_isGunRotRight.cpp
)

# заголовочные файлы
set(SOURCE_LIB
    main.cpp    sfml/h_sfml.h    includes/h_sprites_path.h
    includes/h_map.h    includes/h_tank.h    includes/h_tank_control.h
)

find_package(SFML 2.5 COMPONENTS graphics audio REQURED)

# создание исполняемого файла
add_executable(game ${SOURCE_CPP})

# создание статической библиотеки
add_library(lib STATIC ${SOURCE_LIB})

# линковка программы с библиотекой
target_link_libraries(game lib sfml-graphics sfml-audio) 
