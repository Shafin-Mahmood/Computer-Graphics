#include <GL/glut.h>

void init() {
    glClearColor(0.5, 0.5, 0.5, 1.0); 
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    
    glColor3f(0.0, 1.0, 0.0); 
    glBegin(GL_LINES);
        glVertex2f(0.0, -1.0);
        glVertex2f(0.0, 1.0);
        glVertex2f(-1.0, 0.0);
        glVertex2f(1.0, 0.0);
    glEnd();

    
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.8, 0.2);
        glVertex2f(-0.6, 0.6);
        glVertex2f(-0.4, 0.2);
    glEnd();

   
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.4, 0.2);
        glVertex2f(0.6, 0.2);
        glVertex2f(0.7, 0.4);
        glVertex2f(0.6, 0.6);
        glVertex2f(0.4, 0.6);
        glVertex2f(0.3, 0.4);
    glEnd();

   
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.6, -0.6);
        glVertex2f(-0.6, -0.4);
        glVertex2f(-0.4, -0.4);
        glVertex2f(-0.4, -0.6);
    glEnd();

   
    glColor3f(1.0, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.4, -0.6);
        glVertex2f(0.5, -0.4);
        glVertex2f(0.6, -0.6);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Vertex, Primitive & Color");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
