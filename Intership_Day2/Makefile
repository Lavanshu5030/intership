CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lm
TARGET = calculate_area_and_peri_of_shapes
SRCS = calculate_area_and_peri_of_shapes.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

