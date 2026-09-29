#ifndef CUBE_H
#define CUBE_H
#endif
#ifndef DEBUG
#define DEBUG 0  // Override with -DDEBUG=1
#endif

#if DEBUG
void draw_cube(int x, int y, int z) //makes a 3-inch by 2-1/2-inch 3D box!
{
    glBegin(GL_QUADS);

    // Front
    glColor3f(0.0f + x, 0.0f + y, 0.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x,  1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y,  1.0f + z);

    // Back
    glColor3f(0.0f + x, 0.0f + y, 0.0f + z);
    glVertex3f( 1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y, -1.0f + z);
    glVertex3f( 1.0f + x,  1.0f + y, -1.0f + z);

    // Left
    glColor3f(0.0f + x, 0.0f + y, 0.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y, -1.0f + z);

    // Right
    glColor3f(0.0f + x, 0.0f + y, 0.0f + z);
    glVertex3f(1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f(1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(1.0f + x,  1.0f + y, -1.0f + z);
    glVertex3f(1.0f + x,  1.0f + y,  1.0f + z);

    // Top
    glColor3f(0.0f + x, 0.0f + y, 0.0f + z);
    glVertex3f(-1.0f + x, 1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x, 1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x, 1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x, 1.0f + y, -1.0f + z);

    // Bottom
    glColor3f(0.0f + x, 0.0f + y, 0.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f( 1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f( 1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y,  1.0f + z);

    glEnd();
}

#else
// normal colors
void draw_cube(int x, int y, int z)
{
    glBegin(GL_QUADS);

    // Front
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x,  1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y,  1.0f + z);

    // Back
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f( 1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y, -1.0f + z);
    glVertex3f( 1.0f + x,  1.0f + y, -1.0f + z);

    // Left
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x,  1.0f + y, -1.0f + z);

    // Right
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f(1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f(1.0f + x,  1.0f + y, -1.0f + z);
    glVertex3f(1.0f + x,  1.0f + y,  1.0f + z);

    // Top
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f + x, 1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x, 1.0f + y,  1.0f + z);
    glVertex3f( 1.0f + x, 1.0f + y, -1.0f + z);
    glVertex3f(-1.0f + x, 1.0f + y, -1.0f + z);

    // Bottom
    glColor3f(0.5f, 0.0f, 1.0f);
    glVertex3f(-1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f( 1.0f + x, -1.0f + y, -1.0f + z);
    glVertex3f( 1.0f + x, -1.0f + y,  1.0f + z);
    glVertex3f(-1.0f + x, -1.0f + y,  1.0f + z);

    glEnd();
}

#endif
