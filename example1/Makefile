all: app1 app2

app1: app1.c
	gcc -Wall -o app1 -g app1.c

app2: app2.c
	gcc -Wall -o app2 -g app2.c

.PHONY: clean
clean:
	rm -f app1 app2 *.o
