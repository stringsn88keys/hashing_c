CC=gcc
CFLAGS=-I.
LIBS=-lssl -lcrypto

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

md5: md5.o 
	$(CC) -o md5 md5.o $(LIBS)

.PHONY: clean

clean:
	rm *.o *~