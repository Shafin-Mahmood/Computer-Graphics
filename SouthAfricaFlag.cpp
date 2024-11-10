#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    
    glBegin(GL_QUADS);
   
    glColor3f(0.86f, 0.08f, 0.24f); 
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    
    
    glColor3f(0.0f, 0.2f, 0.6f); 
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    
    glEnd();

    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.2f); 
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(-1.0f, -0.2f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); 

    
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(-1.0f, 0.2f);

    
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(-1.0f, -0.2f);

    glEnd();

    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.84f, 0.0f); 
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-0.2f, 0.0f);
    glEnd();

    
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f); 
    glVertex2f(-1.0f, 0.9f);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.3f, 0.0f);
    glEnd();

    glFlush();
}

void setupGL() {
    glClearColor(1.0, 1.0, 1.0, 1.0); 
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutCreateWindow("South African Flag");
    setupGL();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
