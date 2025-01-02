#include <GL/glut.h>


float boatX = 1.0f;
float bird1X = -1.2f;
float bird2X = -1.5f;

// Function to draw a house
void house() {
    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, -0.20f);
    glVertex2f(-0.50f, -0.20f);
    glVertex2f(-0.50f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.05f, 0.0f);
    glVertex2f(-0.45f, 0.0f);
    glVertex2f(-0.75f, 0.30f);
    glEnd();

    glColor3f(0.3f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f, -0.20f);
    glVertex2f(-0.70f, -0.20f);
    glVertex2f(-0.70f, -0.05f);
    glVertex2f(-0.85f, -0.05f);
    glEnd();
}

// Function to draw a tree
void tree() {
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.40f, -0.20f);
    glVertex2f(-0.35f, -0.20f);
    glVertex2f(-0.35f, 0.10f);
    glVertex2f(-0.40f, 0.10f);
    glEnd();

    glColor3f(0.0f, 0.8f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.50f, 0.10f);
    glVertex2f(-0.25f, 0.10f);
    glVertex2f(-0.375f, 0.30f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.48f, 0.20f);
    glVertex2f(-0.27f, 0.20f);
    glVertex2f(-0.375f, 0.40f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.46f, 0.30f);
    glVertex2f(-0.29f, 0.30f);
    glVertex2f(-0.375f, 0.50f);
    glEnd();
}

// Function to draw a river
void river() {
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, 0.00f);
    glVertex2f(1.0f, 0.00f);
    glVertex2f(1.0f, 0.40f);
    glVertex2f(-1.0f, 0.40f);
    glEnd();
}

// Function to draw the sky
void sky() {
glColor3f(0.68f, 0.85f, 0.90f);


    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, 0.40f);
    glVertex2f(1.0f, 0.40f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}

// Function to draw a boat
void boat() {
    glPushMatrix();
    glTranslatef(boatX, -0.20f, 0.0f);
    glColor3f(0.4f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.10f, 0.30f);
    glVertex2f(0.25f, 0.30f);
    glVertex2f(0.35f, 0.40f);
    glVertex2f(0.0f, 0.40f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.15f, 0.40f);
    glVertex2f(0.15f, 0.60f);
    glVertex2f(0.27f, 0.40f);
    glEnd();
    glPopMatrix();
}

// Function to draw the first bird
void bird1() {
    glPushMatrix();
    glTranslatef(bird1X, 0.80f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.02f, 0.02f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.02f, 0.02f);
    glVertex2f(0.0f, 0.0f);
    glEnd();
    glPopMatrix();
}

// Function to draw the second bird
void bird2() {
    glPushMatrix();
    glTranslatef(bird2X, 0.85f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.02f, 0.02f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.02f, 0.02f);
    glVertex2f(0.0f, 0.0f);
    glEnd();
    glPopMatrix();
}

// Function to update the boat's position
void updateBoat(int value) {
    boatX -= 0.01f;
    if (boatX < -1.2f) {
        boatX = 1.2f;
    }
    glutPostRedisplay();
    glutTimerFunc(16, updateBoat, 0);
}

// Function to update birds' positions
void updateBirds(int value) {
    bird1X += 0.01f;
    bird2X += 0.01f;
    if (bird1X > 1.2f) {
        bird1X = -1.2f;
    }
    if (bird2X > 1.2f) {
        bird2X = -1.2f;
    }
    glutPostRedisplay();
    glutTimerFunc(16, updateBirds, 0);
}

// Display function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    river();
    boat();
    bird1();
    bird2();
    house();
    tree();
    glutSwapBuffers();
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("labtask");

    glClearColor(0.41f, 0.92f, 0.41f, 1.0f);
    glMatrixMode(GL_MODELVIEW);

    glutDisplayFunc(display);
    glutTimerFunc(16, updateBoat, 0);
    glutTimerFunc(16, updateBirds, 0);
    glutMainLoop();

    return 0;
}
