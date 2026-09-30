CC = gcc

LUA = $(HOME)/Downloads/lua-5.5.1

CFLAGS = -Wall -Wextra $(shell sdl2-config --cflags) -I$(LUA)/src
DCFLAGS = -Wall -Wextra $(shell sdl2-config --cflags) -DDEBUG=1 -I$(LUA)/src

LIBS = $(shell sdl2-config --libs) -lSDL2_ttf -lGL \
       -L$(LUA)/src -llua -lm -ldl

TARGET = lucyengine
DEBUG = engine
SRC = $(wildcard src/*.c mods/*.c)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

debug: $(SRC)
	$(CC) $(DCFLAGS) $(SRC) -o $(DEBUG) $(LIBS)

clean:
	rm -f $(TARGET)
	rm -f $(DEBUG)