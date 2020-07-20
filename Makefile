all: add-nbo

add-nbo: hw.c
	gcc -o add-nbo hw.c

clean:
	rm -f add-nbo

