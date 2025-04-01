count-words: count-words.c
	gcc -g  -Wall -m32 -o count-words count-words.c

clean:
	rm count-words
