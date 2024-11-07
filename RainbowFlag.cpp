#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);


    float colors[6][3] = {
        {1.0f, 0.0f, 0.0f},
        {1.0f, 0.5f, 0.0f},
        {1.0f, 1.0f, 0.0f},
        {0.0f, 0.5f, 0.0f},
        {0.0f, 0.0f, 1.0f},
        {0.5f, 0.0f, 0.5f},
    };


    for (int i = 0; i < 6; i++) {
        glColor3fv(colors[i]);
        glBegin(GL_QUADS);
        glVertex2f(-1.0f, 1.0f - (i * 0.333f));
        glVertex2f(1.0f, 1.0f - (i * 0.333f));
        glVertex2f(1.0f, 1.0f - ((i + 1) * 0.333f));
        glVertex2f(-1.0f, 1.0f - ((i + 1) * 0.333f));
        glEnd();
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutCreateWindow("Rainbow Flag");

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
