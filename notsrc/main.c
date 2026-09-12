#include "window.h"
//#include "textrender.h"
#include <SDL_ttf.h>
#include "3Drenderer.h"
#include <GL/gl.h>
#include "cube.h"
#include "floor.h"
 int X_size = 1280; //1280 or 800
 int Y_size = 720; //720 or 600
int angle_x = 0.0;
int angle_y = 0.0;
float angle = 0.0f;


int quit(void)
{
    return 0;
    //TTF_Quit(); //makes EVERYTHING give up

}

int main(int argc, char *argv[])
{


    // const char *say = "Hello, Lucy Engine!";
    // const char *font = "fontbold.ttf";
     const char *title = "Overwrite test for mod devs";
     FILE *file = fopen("Test.stxt", "r");
    //
     if (argc > 1)
     {
         title = argv[1];
     }
     // if (argc > 2)
     // {
     //     file = argv[2];
     // }
     // char line[256];
     //
     // while (fgets(line, sizeof(line), file))
     // {
     //     printf("Read: %s", line);
     // }
     //
     // fclose(file);
        int x = 0;
        int y = 0; //WHY DIDN'T YOU GUYS HAVE SEMICOLONS?
        int z = 0;
       x =+ atoi(argv[2]);
       y =+ atoi(argv[3]);
       z =+ atoi(argv[4]);
     // int x1 = atoi(argv[5]);
     // int y1 = atoi(argv[6]);
     // int z1 = atoi(argv[7]);
    // if (argc > 2)
    // {
    //     say = argv[2];
    // }
    //
    // if (argc > 3)
    // {
    //     font = argv[3];
    // }
    //
    // make_window(title);
    make_3d_window(X_size, Y_size, title);
    printf("Window created with the name of %s\n", title);


    // TTF_Init(); //makes TTF have a life

    int running = 1; //tells the engine that its alive
    // printf("Cube will be drawn at: %d, %d, %d\n", x, y, z);
    // printf("Cube Two(2) will be drawn at: %d, %d, %d\n", x1, y1, z1);
    SDL_Event event;
    while (running)
    {

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT) //the little X button/ALT+F4
            {
                running = 0;
                printf("Window closed\n");
                // quit();
            }
            if (event.type == SDL_MOUSEMOTION)
            {
                angle_y += event.motion.xrel;
                angle_x += event.motion.yrel;
                // printf("Mouse X", angle_x, "\n");
                // printf("Mouse Y", angle_y, "\n");
            }
        }

        //SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); //background colour: also going off of RGBA, though Alpha does nothing
       // SDL_RenderClear(renderer);
        // draw_text(50, 50, 200, 30, "HI!", "font.ttf");
        // draw_text(50, 100, 200, 30, say, font);
      //  SDL_RenderPresent(renderer); //shows you whatever you wanted to

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glLoadIdentity();

        glTranslatef(0.0f, 0.0f, -5.0f);
        //glRotatef(angle, 1.0f, 1.0f, 0.0f);
        glRotatef(angle_x, 1.0f, 0.0f, 0.0f);
        glRotatef(angle_y, 0.0f, 1.0f, 0.0f);

        draw_cube(x, y, z); //YOU CAN MOVE THE CUBE AGAIN!
        draw_floor(0, -1, 0);
        //draw_floor();
        //printf ("Floor drawn!");

        SDL_GL_SwapWindow(window);

        //angle += 1.0f;
    }
    return 0;
}
