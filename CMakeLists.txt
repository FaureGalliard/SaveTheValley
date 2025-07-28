cmake_minimum_required(VERSION 3.10)
project(SaveValley)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ruta a tus archivos fuente
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE HEADERS "include/*.hpp")

# Incluir headers
include_directories(include)
# .hpp o h
include_directories("lib/SFML/include")
include_directories("lib")
# .a o .lib
link_directories("lib/SFML/lib")


# Ejecutable
add_executable(SaveValley ${SOURCES} ${HEADERS})

# Link SFML
target_link_libraries(SaveValley
 sfml-graphics
  sfml-window 
  sfml-system
   sfml-audio
   sfml-network)

