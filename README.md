# Lucy-Engine

A custom game engine written in C, at 14 years old, and named after a long dead pet bird.

Licensed under GPL-3.0. (see the license file if you wanna look at that)

Here’s the source code. Screw around and find out.

Made while vibing to Three Days Grace, Nirvana, Foo Fighters, Limp Bizkit, etc.

# Features
Uses Lua for:
Mouse input
Camera control
Object creation (see the demo .lua script provided)

My friends like it

# Inspiration

I was mostly inspired by the Cube engine, but if it had the rendering of 2007 Roblox and the abstraction of goldsrc,
Also now inspired by some KILLZONE. And PS2 games

God I have too much free time

# How to compile it

Just provide a compiled version of Lua (according to the version the makefile contains, if needed you can edit it and the code for newer versions) in your Downloads folder and run "make"

Liblua doesn't do anything to help, though I still recommend to have it installed

# why am I using older versions of OpenGL mixed with SDL2?


Legacy OpenGL is light, while SDL2 is easier to use

# Requirements

You're gonna need these (I have the command set up for you already)

sudo apt update (if needed)

sudo apt install build-essential \
    libsdl2-dev \
    libsdl2-ttf-dev \
    libgl-dev \
    liblua5.4-dev

If you use a different Linux distro, use the relevent dependencies if you can find them/make them

# image

<img width="1856" height="999" alt="image" src="https://github.com/user-attachments/assets/072357a0-73e2-45b1-9b51-7550edfeb3ce" />
