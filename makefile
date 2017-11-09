sigfile: signals.c
	gcc signals.c -o sigfile
run: sigfile
	./sigfile