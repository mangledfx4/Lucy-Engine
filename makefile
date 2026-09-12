CC = gcc
WindowsCC = x86_64-w64-mingw32-gcc
CFLAGS = -Wall -Wextra $(shell sdl2-config --cflags)
DCFLAGS = -Wall -Wextra $(shell sdl2-config --cflags) -DDEBUG_POSITION_COLOR=1
LIBS = $(shell sdl2-config --libs) -lSDL2_ttf -lGL

TARGET = Lucy_Engine
DEBUG = DEBUG_Engine
SRC = $(wildcard src/*.c mods/*.c)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

windows: $(SRC)
	$(WindowsCC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)
debug: $(SRC)
	$(CC) $(DCFLAGS) $(SRC) -o $(DEBUG) $(LIBS)
windowsdebug: $(SRC)
	$(WindowsCC) $(DCFLAGS) $(SRC) -o $(DEBUG) $(LIBS)

clean:
	rm -f $(TARGET)
	rm -f $(DEBUG)
