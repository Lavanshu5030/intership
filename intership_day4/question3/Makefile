CC = gcc
CFLAGS = -Wall -Wextra

SRCS = student_management.c main.c
OBJS = $(SRCS:.c=.o)
EXEC = student_management_system

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
