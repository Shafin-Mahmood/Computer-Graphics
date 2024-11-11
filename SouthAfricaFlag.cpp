#include <windows.h>

#include <GL/gl.h>

#include <GL/glut.h>
 
void display() {

    glClearColor(0.014f, 0.522f, 0.016f, 0.0f);
 
    glClear(GL_COLOR_BUFFER_BIT);
 
 
    // Set up a 2D orthographic projection

    gluOrtho2D(0, 1000, 0, 1000);

    //yellow

    glBegin(GL_TRIANGLES);

       glColor3f (1.0f, 0.808f, 0.0f);

       glVertex2f(0, 200);

       glVertex2f(260, 502);

       glVertex2f(0, 800);

       glEnd();

    //black

       glBegin(GL_TRIANGLES);

       glColor3f (0.0f, 0.0f, 0.0f);

       glVertex2f(0, 300);

       glVertex2f(200, 502);

       glVertex2f(0,720 );

       glEnd();
 
       //white

       glBegin(GL_QUADS);

       glColor3f(1.0f, 1.0f, 1.0f);
 
       glVertex2f(1000, 400);

       glVertex2f(1000, 0);
 
       glVertex2f(100,0);

       glVertex2f(400, 400);

       glEnd();
 
       //blue

       glBegin(GL_QUADS);

       glColor3f(0.00f, 0.008f, 0.502f);
 
       glVertex2f(1000, 350);

       glVertex2f(1000, 0);
 
       glVertex2f(150,0);

       glVertex2f(410, 350);

       glEnd();

       //white

       glBegin(GL_QUADS);

       glColor3f(1.0f, 1.0f, 1.0f);
 
       glVertex2f(1000, 600);

       glVertex2f(1000, 1000);
 
       glVertex2f(100,1000);

       glVertex2f(400, 600);

       glEnd();

       //red

       glBegin(GL_QUADS);

       glColor3f(1.0f, 0.0f, 0.0f);
 
       glVertex2f(1000, 650);

       glVertex2f(1000, 1000);
 
       glVertex2f(150,1000);

       glVertex2f(410, 650);

       glEnd();
 
       glFlush();

}
 
int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitWindowSize(1200, 600);

    glutInitWindowPosition(0, 0);

    glutCreateWindow("Flag of South-Africa");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;

}
 
 
 
 
 