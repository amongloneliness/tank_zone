# проверка версии cmake
cmake_minimum_required(VERSION 3.5)

# название проекта
project(game)

# cpp файлы
set(SOURCE_CPP main.cpp)

# заголовочные файлы
set(SOURCE_LIB
    main.cpp sfml/h_sfml.h   includes/h_map.h
)

find_package(SFML 2.5 COMPONENTS graphics audio REQURED)

# создание исполняемого файла
add_executable(game ${SOURCE_CPP})

# создание статической библиотеки
add_library(lib STATIC ${SOURCE_LIB})

# линковка программы с библиотекой
target_link_libraries(game lib sfml-graphics sfml-audio) 
