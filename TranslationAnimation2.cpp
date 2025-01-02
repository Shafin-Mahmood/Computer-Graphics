#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

float _moveX= 0.0f;
float _moveY= 0.0f;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
	glTranslatef(_moveX,_moveY, 0.0f); //moving along x-axis

    glBegin(GL_QUADS);
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(.30f, 0.0f, 0.0f);
        glVertex3f(.30f, 0.2f, 0.0f);
        glVertex3f(0.0f, 0.2f, 0.0f);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();
}

void update(int value) {

    _moveX += .05;
    _moveY += .01;
    if(_moveX > 1.3){
        _moveX = -1.3;      //when object goes out of display while incrementing its position,
        _moveY += -_moveY;  //set the coordinate to the opposite position so that it feels like the object is continuously moving
    }

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, update, 0); //Notify GLUT to call update again in 10 milliseconds
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);
	glutTimerFunc(20, update, 0); //Add a timer
	glutMainLoop();
	return 0;
}
