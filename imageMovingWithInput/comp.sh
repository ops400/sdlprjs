gcc *.c -c $(pkg-config --libs --cflags sdl2 SDL2_image)
gcc *.o -o imwi $(pkg-config --libs --cflags sdl2 SDL2_image)
rm -rv *.o
