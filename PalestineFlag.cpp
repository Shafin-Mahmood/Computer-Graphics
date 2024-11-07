#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    float colors[3][3] = {
        {0.0f, 0.0f, 0.0f},
        {1.0f, 1.0f, 1.0f},
        {0.0f, 0.5f, 0.0f}
    };


    for (int i = 0; i < 3; i++) {
        glColor3fv(colors[i]);
        glBegin(GL_QUADS);
        glVertex2f(-1.0f, 1.0f - (i * 0.666f));
        glVertex2f(1.0f, 1.0f - (i * 0.666f));
        glVertex2f(1.0f, 1.0f - ((i + 1) * 0.666f));
        glVertex2f(-1.0f, 1.0f - ((i + 1) * 0.666f));
        glEnd();
    }


    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutCreateWindow("Flag of Palestine");

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
