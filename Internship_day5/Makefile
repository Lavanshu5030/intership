CC = gcc
CFLAGS = -Wall -Wextra

SRCS = date.c main.c
OBJS = $(SRCS:.c=.o)
EXEC = date_system

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
