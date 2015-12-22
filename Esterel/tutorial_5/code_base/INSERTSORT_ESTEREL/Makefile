
CFLAGS=-DTRACE_ACTION # uncomment if you want to see Esterel internals

SRCS=INSERTSORT.c \
	main.c

all: test

test: $(SRCS)
	gcc $(SRCS) $(CFLAGS) -o $@

clean:
	rm test
