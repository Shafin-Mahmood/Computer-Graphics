#include <windows.h>
#include <GL/gl.h> 
#include <GL/glut.h> 
 
void display() {
    glClearColor(1.f, 1.0f, 1.0f, 0.0f); 
    glClear(GL_COLOR_BUFFER_BIT);
 
    gluOrtho2D(0,500,0,500);
 
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.522f, 0.302f);
    glVertex2f(0, 0);
    glVertex2f(900, 0);
    glVertex2f(900, 100);
    glVertex2f(0, 100);
    glEnd();
 
    glBegin(GL_QUADS);
    glColor3f(0.969f, 0.953f, 0.027f);
    glVertex2f(0, 100 );
    glVertex2f(900,100 );
    glVertex2f(900, 200 );
    glVertex2f(0, 200 );
    glEnd();
 
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.522f, 0.302f);
    glVertex2f(0, 200 );
    glVertex2f(900,200 );
    glVertex2f(900, 300 );
    glVertex2f(0, 300 );
    glEnd();
 
    glBegin(GL_QUADS);
    glColor3f(0.969f, 0.953f, 0.027f);
    glVertex2f(0, 300 );
    glVertex2f(900,300 );
    glVertex2f(900, 400 );
    glVertex2f(0, 400 );
    glEnd();
 
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.522f, 0.302f);
    glVertex2f(0, 400 );
    glVertex2f(900,400 );
    glVertex2f(900, 500 );
    glVertex2f(0, 500 );
    glEnd();
 
    glBegin(GL_QUADS);
    glColor3f(0.839f, 0.008f, 0.008f);
    glVertex2f(0, 200 );
    glVertex2f(240,200 );
    glVertex2f(240, 500 );
    glVertex2f(0, 500 );
    glEnd();
 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.f);
    glVertex2f(50, 362.2 );
    glVertex2f(75,390);
    glVertex2f(100, 362.2 );
    glVertex2f(75, 480 );
    glEnd();
 
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(40,440.2);
    glVertex2f(75,390);
    glVertex2f(110,440.2);
    glEnd();
 
    glFlush();
}
 
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 500);
    glutCreateWindow("Flag of Togo");
    int();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}