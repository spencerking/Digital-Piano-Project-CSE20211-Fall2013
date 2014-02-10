all: digitalpiano

digitalpiano: piano2.o piano_graphic.o gfx.o wavfile.o piano_main.o piano_sound.o title_screen.o
	gcc piano2.o piano_graphic.o gfx.o wavfile.o piano_main.o piano_sound.o title_screen.o -o digitalpiano -lX11 -lm

piano_main.o: piano_main.c
	gcc -c piano_main.c

piano_graphic.o: piano_graphic.c
	gcc -c piano_graphic.c

gfx.o: gfx.c
	gcc -c gfx.c

wavfile.o: wavfile.c
	gcc -c wavfile.c

piano_sound.o: piano_sound.c
	gcc -c piano_sound.c

title_screen.o: title_screen.c
	gcc -c title_screen.c

piano2.o: piano2.c
	gcc -c piano2.c

