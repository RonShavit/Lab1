count-words: count-words.c
	gcc -g  -Wall -m32 -o count-words count-words.c

base: base.h base.c
	gcc -g -Wall -m32 -o base base.c

clean:
	rm count-words base

map_menu: base.c base.h map_menu.c map_menu.h
	gcc -g -c -Wall -m32 -o base.o base.c
	gcc -g -c -Wall -m32 -o map_menu.o map_menu.c
	gcc -g -Wall -m32 -o map_menu map_menu.o base.o
