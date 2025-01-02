#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

void blackbox()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(100, 200);
    glVertex2f(400, 200);
    glVertex2f(400, 350);
    glVertex2f(100, 350);
    glEnd();
    int d = 10;
    for (int i = 0;i < 7;i++)
    {


        glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(110 + d * i, 350 + d * i);
        glVertex2f(390 - d * i, 350 + d * i);
        glVertex2f(390 - d * i, 360 + d * i);
        glVertex2f(110 + d * i, 360 + d * i);
        glEnd();
    }
    for (int i = 0;i < 7;i++)
    {


        glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(110 + d * i, 200 - d * i);
        glVertex2f(390 - d * i, 200 - d * i);
        glVertex2f(390 - d * i, 190 - d * i);
        glVertex2f(110 + d * i, 190 - d * i);
        glEnd();
    }






}

void yellow()
{


    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(110, 200);
    glVertex2f(390, 200);
    glVertex2f(390, 350);
    glVertex2f(110, 350);
    glEnd();

    int d = 10;
    for (int i = 0;i < 6;i++)
    {


        glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(120 + d * i, 350 + d * i);
        glVertex2f(380 - d * i, 350 + d * i);
        glVertex2f(380 - d * i, 360 + d * i);
        glVertex2f(120 + d * i, 360 + d * i);
        glEnd();
    }

    for (int i = 0;i < 6;i++)
    {


        glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(120 + d * i, 200 - d * i);
        glVertex2f(380 - d * i, 200 - d * i);
        glVertex2f(380 - d * i, 190 - d * i);
        glVertex2f(120 + d * i, 190 - d * i);
        glEnd();
    }






}


void black2()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(120, 210);
    glVertex2f(380, 210);
    glVertex2f(380, 340);
    glVertex2f(120, 340);
    glEnd();



    int d = 10;
    for (int i = 0;i < 5;i++)
    {


        glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(130 + d * i, 340 + d * i);
        glVertex2f(370 - d * i, 340 + d * i);
        glVertex2f(370 - d * i, 350 + d * i);
        glVertex2f(130 + d * i, 350 + d * i);
        glEnd();
    }


    for (int i = 0;i < 5;i++)
    {


        glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(130 + d * i, 210 - d * i);
        glVertex2f(370 - d * i, 210 - d * i);
        glVertex2f(370 - d * i, 200 - d * i);
        glVertex2f(130 + d * i, 200 - d * i);
        glEnd();
    }









}
void others()
{//left
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(200, 380);
    glVertex2f(230, 380);
    glVertex2f(230, 390);
    glVertex2f(200, 390);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(230, 390);
    glVertex2f(240, 390);
    glVertex2f(240, 400);
    glVertex2f(230, 400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(270, 390);
    glVertex2f(280, 390);
    glVertex2f(280, 400);
    glVertex2f(270, 400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(190, 380);
    glVertex2f(190, 350);
    glVertex2f(230, 350);
    glVertex2f(230, 380);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(200, 350);
    glVertex2f(200, 340);
    glVertex2f(220, 340);
    glVertex2f(220, 350);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(280, 380);
    glVertex2f(310, 380);
    glVertex2f(310, 390);
    glVertex2f(280, 390);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(280, 380);
    glVertex2f(280, 350);
    glVertex2f(320, 350);
    glVertex2f(320, 380);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(290, 350);
    glVertex2f(290, 340);
    glVertex2f(310, 340);
    glVertex2f(310, 350);
    glEnd();

    //lower
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(200, 170);
    glVertex2f(250, 170);
    glVertex2f(250, 160);
    glVertex2f(200, 160);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(200, 180);
    glVertex2f(240, 180);
    glVertex2f(240, 170);
    glVertex2f(200, 170);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(210, 190);
    glVertex2f(240, 190);
    glVertex2f(240, 180);
    glVertex2f(210, 180);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(220, 200);
    glVertex2f(230, 200);
    glVertex2f(230, 190);
    glVertex2f(220, 190);
    glEnd();




    //rightlower
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(260, 170);
    glVertex2f(310, 170);
    glVertex2f(310, 160);
    glVertex2f(260, 160);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(270, 180);
    glVertex2f(310, 180);
    glVertex2f(310, 170);
    glVertex2f(270, 170);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(270, 190);
    glVertex2f(300, 190);
    glVertex2f(300, 180);
    glVertex2f(270, 180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(280, 200);
    glVertex2f(290, 200);
    glVertex2f(290, 190);
    glVertex2f(280, 190);
    glEnd();




}

void lines()
{
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.89f, 0.5f, 0.89f);

    for (int x = 0; x <= 600; x += 10)
    {
        glVertex2f(x, 0);
        glVertex2f(x, 600);
    }

    for (int y = 0; y <= 600; y += 10)
    {
        glVertex2f(0, y);
        glVertex2f(600, y);
    }

    glEnd();
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0, 500, 0, 500);
    blackbox();
    yellow();
    black2();
    others();
    lines();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 25);
    glutCreateWindow("Batman Logo");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
