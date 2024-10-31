#include <GL/glut.h>

int windowWidth = 600;
int windowHeight = 600;
int boardSize = 8;
float squareSize = 1.0f / boardSize;

void drawChessboard()
{
    bool isWhite = true;
    for (int row = 0; row < boardSize; ++row) {
        for (int col = 0; col < boardSize; ++col) {
           
            if (isWhite)
                glColor3f(1.0f, 1.0f, 1.0f); 
            else
                glColor3f(0.0f, 0.0f, 0.0f); 

            float x = col * squareSize;
            float y = row * squareSize;

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + squareSize, y);
            glVertex2f(x + squareSize, y + squareSize);
            glVertex2f(x, y + squareSize);
            glEnd();

            isWhite = !isWhite;
        }

        isWhite = !isWhite;
    }
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawChessboard();
    glFlush();
}

    void initializeWindow()
    {
        glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0, 1.0, 0.0, 1.0);

    }

    
    int main(int argc, char** argv)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(windowWidth, windowHeight);
        glutCreateWindow("OpenGL Chessboard");

        initializeWindow();
        glutDisplayFunc(display);
        glutMainLoop();

        return 0;

    }