#ifndef FLOOR_H
#define FLOOR_H

void draw_floor(int x, int y, int z) //a nine by nine (going off of in-game cube) floor!
{
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_QUADS);

    glVertex3f(-10.0f + x, 0.0f + y, -10.0f + z);
    glVertex3f( 10.0f + x, 0.0f + y, -10.0f + z);
    glVertex3f( 10.0f + x, 0.0f + y,  10.0f + z);
    glVertex3f(-10.0f + x, 0.0f + y,  10.0f + z);

    glEnd();
}

#endif
//TODO: make it 3D... as in give it THICKNESS
