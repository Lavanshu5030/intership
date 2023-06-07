TARGET=main
CSCRS=$(TARGET).c in_out.c sel.c
COBJS=$(CSCRS:.c=.o)

CC=gcc
CFLAGS=
LFLAGS=

$(TARGET).out: $(COBJS)
	$(CC) $(CFLAGS) -o $(TARGET).out $^ 

%.o: %.c
	$(CC) -c $(CFLAGS) $<

run:
	./$(TARGET).out

clean:
	rm *.o $(TARGET).out

.phony: run clean