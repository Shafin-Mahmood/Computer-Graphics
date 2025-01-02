#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.02f;

void update(int value)
{
    if(position > 1.2){
        position = -0.5f;
    }
    position += speed;

	glutPostRedisplay(); //Notify GLUT that the display has changed
	glutTimerFunc(20, update, 0);
}


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(position, position, 0.0f); //moving along both x & y axis

    glBegin(GL_QUADS);
    glColor3f(0.85f, 0.0f, 0.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, -0.1f);
    glVertex2f( 0.2f, -0.1f);
    glVertex2f( 0.2f,  0.1f);
    glVertex2f(-0.2f,  0.1f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 23.0f, 0.0f);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.2f, 0.2f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.2f, 0.2f);
    glEnd();

  glPopMatrix();
  glFlush();
  //glutSwapBuffers();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(500, 500);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   glutTimerFunc(20, update, 0);
   glutMainLoop();
   return 0;
}

