parser: main.c team.c player.c
	gcc -o parser main.c team.c player.c -I.

clean:
	rm parser
