TARGET=piksi_system_daemon
SOURCES= \
	cellmodem.c \
	main.c \
	ntrip.c \
	skylark.c \
	whitelists.c

LIBS=-lczmq -lsbp -lpiksi
CFLAGS=-std=gnu11

CROSS=

CC=$(CROSS)gcc

all:	$(TARGET)
$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES) $(LIBS)

clean:
	rm -rf $(TARGET)
