CC = gcc
CFLAGS = -Wall -Wextra -pedantic

SRCS = main.c catalog.c
OBJS = $(SRCS:.c=.o)
EXECUTABLE = library_catalog

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJS)