all: main.c createnode.c insert.c search.c delete.c display.c writefile.c compare.c search_s.c search_a.c
	gcc -c main.c
	gcc -c createnode.c
	gcc -c insert.c
	gcc -c search.c
	gcc -c delete.c
	gcc -c display.c
	gcc -c writefile.c
	gcc -c compare.c
	gcc -c search_s.c
	gcc -c search_a.c
	gcc -o play *.o

clean:
	rm *.o play