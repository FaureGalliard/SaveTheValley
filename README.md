# Modo Debug
cmake --preset debug
cmake --build --preset debug

# Modo Release
cmake --preset release
cmake --build --preset release

# Instrucciones
Linux: Asegurate de tener descargado sfml 3.0.0 y ejecuta comandos de arriba
Windows: Compila con los comandos de arriba y despues copia los .dll de lib/SFML/bin con esta forma sfml-xx-3.dll