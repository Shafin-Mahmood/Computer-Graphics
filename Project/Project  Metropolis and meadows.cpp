#include <GL/glut.h>
#include <iostream>
#include<math.h>

using namespace std;
//cover page
float bgRed = 0.0f, bgGreen = 0.0f, bgBlue = 0.0f;

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display1_view()

{
glClearColor(bgRed, bgGreen, bgBlue, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 0.9, 0.0);
renderBitmapString(100,420, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "*Metropolis and Meadows:A journey Between Urban innovation and Rural tranquility.*");

renderBitmapString(140,380, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "COURSE TEACHER: UMME SADIA SALSABIL");
renderBitmapString(220,350, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Group :07");
glColor3f(1.0, 1.0, 1.0);
renderBitmapString(140,300, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "22-46679-1  -  TAMANNA, TAIABA BINTE BAREK");
renderBitmapString(140.0,270.0, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "22-47140-1  -  SUKANNA, ARPITA SAHA");
renderBitmapString(140.0,240.0, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "22-46665-1  -  MAHMOOD, SHAFIN");
renderBitmapString(140.0,210.0, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "22-47535-2  -  TRINA, SAYMA AKTER");

glutSwapBuffers();
 glFlush();

}


void boat1_night()
{
    int b= 70;

     glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 15.0f+b);
    glVertex2f(130.0f, 15.0f+b);
    glVertex2f(130.0f, 30.0f+b);
    glVertex2f(100.0f, 30.0f+b);
    glEnd();
//left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(100.0f, 15.0f+b);
    glVertex2f(100.0f, 30.0f+b);
    glVertex2f(80.0f, 40.0f+b);
    glEnd();
//right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f, 15.0f+b);
    glVertex2f(130.0f, 30.0f+b);
    glVertex2f(150.0f, 40.0f+b);
    glEnd();
//upper
    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 30.0f+b);
    glVertex2f(130.0f, 30.0f+b);
    glVertex2f(130.0f, 55.0f+b);
    glVertex2f(100.0f, 55.0f+b);
    glEnd();



    glBegin(GL_LINES);
        glLineWidth(3.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(115.0f, 55.0f+b);
    glVertex2f(115.0f, 120.0f+b);
    glEnd();
    //pal
    glColor3f(0.6f, 0.0f, 0.5f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f, 65.0f+b);
    glVertex2f(113.0f,  110.0f+b);
    glVertex2f(100.0f, 110.0f+b);
    glVertex2f(100.0f, 65.0f+b);
    glEnd();
    //pal2
   glColor3f(0.6f, 0.0f, 0.7f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f+17.0f, 65.0f+b);
    glVertex2f(113.0f+17.0f,  110.0f+b);
    glVertex2f(100.0f+17.0f, 110.0f+b);
    glVertex2f(100.0f+17.0f, 65.0f+b);
    glEnd();


    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(130.0f, 110.0f+b);
    glVertex2f(150.0f, 40.0f+b);

    glVertex2f(113.0f,  110.0f+b);
    glVertex2f(150.0f, 40.0f+b);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(95.0f, 110.0f+b);
    glVertex2f(113.0f+20.0f,  110.0f+b);
    glEnd();

      glPopMatrix();


}


void hill_sky_night()
{
    //sky
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 330.0f);
    glVertex2f(500.0f, 330.0f);
    glVertex2f(500.0f, 500.0f);
    glVertex2f(0.0f, 500.0f);
    glEnd();
//sun
glPushMatrix();
glPushMatrix();
glTranslatef(450, 450, 0);
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
for (int i = 0; i < 360; i++) {
    float pi = 3.1416;
    float A = (i * 2 * pi) / 180;
    float r = 20;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x, y);
}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(450 + 5, 452, 0);
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
for (int i = 0; i < 360; i++) {
    float pi = 3.1416;
    float A = (i * 2 * pi) / 180;
    float r = 20;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x, y);
}
glEnd();
glPopMatrix();
//hill 1

    glColor3f(0.1f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 330.0f);
    glVertex2f(80.0f, 330.0f);
    glVertex2f(40.0f, 390.0f);
    glEnd();

    //h2

   glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(50.0f, 330.0f);
    glVertex2f(140.0f, 330.0f);
    glVertex2f(95.0f, 370.0f);
    glEnd();

    glColor3f(0.1f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(110.0f, 330.0f);
    glVertex2f(190.0f, 330.0f);
    glVertex2f(150.0f, 380.0f);
    glEnd();

    //h4
     glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f, 330.0f);
    glVertex2f(230.0f, 330.0f);
    glVertex2f(195.0f, 370.0f);
    glEnd();

    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(250.0f, 330.0f);
    glVertex2f(320.0f, 330.0f);
    glVertex2f(270.0f, 360.0f);
    glEnd();
       glColor3f(0.1f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(280.0f, 330.0f);
    glVertex2f(350.0f, 330.0f);
    glVertex2f(295.0f, 355.0f);
    glEnd();


      glColor3f(0.1f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(410.0f, 330.0f);
    glVertex2f(490.0f, 330.0f);
    glVertex2f(430.0f, 365.0f);
    glEnd();
    //tree_sky
    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(370.0f, 330.0f);
    glVertex2f(373.0f, 330.0f);
    glVertex2f(373.0f, 360.0f);
    glVertex2f(370.0f, 360.0f);
    glEnd();

  glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(355.0f, 360.0f);
    glVertex2f(385.0f, 360.0f);
    glVertex2f(370.0f, 375.0f);
    glEnd();

   glColor3f(0.1f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(357.0f, 365.0f);
    glVertex2f(383.0f, 365.0f);
    glVertex2f(370.0f, 380.0f);
    glEnd();

    //tree-sky2

    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(390.0f, 330.0f);
    glVertex2f(393.0f, 330.0f);
    glVertex2f(393.0f, 380.0f);
    glVertex2f(390.0f, 380.0f);
    glEnd();

     glColor3f(0.1f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(375.0f, 380.0f);
    glVertex2f(410.0f, 380.0f);
    glVertex2f(392.0f, 400.0f);
    glEnd();

    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(377.0f, 390.0f);
    glVertex2f(407.0f, 390.0f);
    glVertex2f(392.0f, 410.0f);
    glEnd();
    int t=130;
     //tree_sky
    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(370.0f-t, 330.0f);
    glVertex2f(373.0f-t, 330.0f);
    glVertex2f(373.0f-t, 360.0f);
    glVertex2f(370.0f-t, 360.0f);
    glEnd();

      glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(355.0f-t, 360.0f);
    glVertex2f(385.0f-t, 360.0f);
    glVertex2f(370.0f-t, 375.0f);
    glEnd();

   glColor3f(0.1f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(357.0f-t, 365.0f);
    glVertex2f(383.0f-t, 365.0f);
    glVertex2f(370.0f-t, 380.0f);
    glEnd();


       glPointSize(3.0);
    glColor3f(1.0, 1.0, 1.0);

       glBegin(GL_POINTS);
        glVertex2f(250.0, 375.0);
        glVertex2f(20.0, 380.0);
        glVertex2f(300.0, 395.0);
        glVertex2f(250.0, 375.0);




    glVertex2f(300.0, 383.0);
    glVertex2f(350.0, 397.0);
    glVertex2f(404.0, 440.0);
    glVertex2f(430.0, 420.0);
    glVertex2f(486.0, 440.0);


    glVertex2f(160.0, 400.0);
    glVertex2f(220.0, 410.0);
    glVertex2f(270.0, 430.0);
    glVertex2f(320.0, 450.0);
    glVertex2f(370.0, 470.0);
    glVertex2f(420.0, 490.0);
    glVertex2f(470.0, 495.0);
    glVertex2f(270.0, 430.0);
    glVertex2f(30.0, 450.0);
    glVertex2f(130.0, 470.0);
    glVertex2f(90.0, 490.0);
    glVertex2f(130.0, 495.0);
    glVertex2f(33.0, 430.0);
    glVertex2f(55.0, 470.0);
    glVertex2f(90.0, 370.0);
    glVertex2f(130.0, 450.0);

     glVertex2f(230.0, 370.0);
    glVertex2f(190.0, 450.0);
 glVertex2f(318.0, 370.0);
    glVertex2f(279.0, 450.0);


    glEnd();


}
void field_night()
{
    //backside field
      glColor3f(0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 320.0f);
    glVertex2f(500.0f, 290.0f);
    glVertex2f(500.0f, 330.0f);
    glVertex2f(0.0f, 330.0f);
    glEnd();
    glColor3f(0.0f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 310.0f);
    glVertex2f(500.0f, 280.0f);
    glVertex2f(500.0f, 305.0f);
    glVertex2f(0.0f, 320.0f);
    glEnd();

    int gh=30;
    glColor3f(0.3f, 0.6f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(300.0f, 160.0f+gh);
    glVertex2f(310.0f, 160.0f+gh);
    glVertex2f(280.0f, 180.0f+gh);

    glVertex2f(300.0f, 160.0f+gh);
    glVertex2f(310.0f, 160.0f+gh);
    glVertex2f(290.0f, 180.0f+gh);

    glVertex2f(305.0f, 160.0f+gh);
    glVertex2f(315.0f, 160.0f+gh);
    glVertex2f(305.0f, 190.0f+gh);

    glVertex2f(305.0f, 160.0f+gh);
    glVertex2f(315.0f, 160.0f+gh);
    glVertex2f(325.0f, 190.0f+gh);

    glVertex2f(305.0f, 160.0f+gh);
    glVertex2f(315.0f, 160.0f+gh);
    glVertex2f(340.0f, 180.0f+gh);
    glEnd();
}

void road_nigt()
{
     //road
     glColor3f(0.5f, 0.4f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 310.0f);
    glVertex2f(0.0f, 280.0f);
    glVertex2f(500.0f, 266.0f);
    glVertex2f(500.0f, 280.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f, 280.0f);
    glVertex2f(450.0f, 280.0f);
    glVertex2f(350.0f, 260.0f);
    glVertex2f(500.0f, 210.0f);
      glVertex2f(500.0f, 190.0f);
    glVertex2f(460.0f, 180.0f);
    glEnd();



   glBegin(GL_QUADS);

    glVertex2f(500.0f, 230.0f);
    glVertex2f(500.0f, 190.0f);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(0.0f, 130.0f);

     glEnd();


}
void drawCircle(float radius, float X, float Y) {
    glBegin(GL_POLYGON);
    float pi=3.1416;
    for (int i = 0; i < 360; i++) {
        float A = (i * 2 * pi) / 180;
        float x = radius * cos(A) + X;
        float y = radius * sin(A) + Y;
        glVertex2f(x, y);
    }
    glEnd();
}

void object_house_tree_night()
{


 glColor3f(0.6f, 0.0f, 0.4f);
    drawCircle(4,284,210);
    drawCircle(4,276,210);
    drawCircle(4,280,214);
    drawCircle(4,310,220);
    drawCircle(4,300,220);
    drawCircle(4,305,225);

    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(2,280,210);
    drawCircle(2,305,220);
    drawCircle(2,290,210);

     glLineWidth(5.0f);

     int l=10;
     for(int i=0;i<4;i++)
     {
        glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(0.0f, 230.0f+l*i);
        glVertex2f(180.0f, 230.0f+l*i);

       glEnd();



     }
      int l1=10;
     for(int i=0;i<18;i++)
     {
        glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(0.0f+l1*i, 230.0f);
        glVertex2f(0.0f+l1*i, 270.0f);


       glEnd();



     }

    glBegin(GL_LINES);

        glColor3f(0.6f, 0.3f, 0.1f);
        glVertex2f(150.0f, 290.0f);
        glVertex2f(150.0f, 295.0f);
    glEnd();






     //middle tree
    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f, 220.0f);
    glVertex2f(82.0f, 220.0f);
    glVertex2f(82.0f, 300.0f);
    glVertex2f(75.0f, 300.0f);

    glEnd();

    glColor3f(0.2f, 0.3f, 0.1f);
//trina1
 drawCircle(15,78,310);
     drawCircle(15,70,310);
      drawCircle(15,90,330);
       drawCircle(15,65,330);
       drawCircle(15,95,315);
         drawCircle(15,74,350);
          drawCircle(15,84,350);
           drawCircle(13,80,365);


    int y= 60;
    // tree2
    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f-y , 220.0f);
    glVertex2f(82.0f-y, 220.0f);
    glVertex2f(82.0f-y, 300.0f);
    glVertex2f(75.0f-y, 300.0f);

    glEnd();
    glColor3f(0.2f, 0.3f, 0.1f);
   drawCircle(15,78-y,310);
   drawCircle(15,70-y,310);
      drawCircle(15,90-y,330);
       drawCircle(15,65-y,330);
       drawCircle(15,95-y,315);
         drawCircle(15,74-y,350);
          drawCircle(15,84-y,350);
           drawCircle(13,80-y,365);
//house1
    //lower_left
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.7f, 0.4f);
    glVertex2f(22.0f, 290.0f);
    glVertex2f(22.0f, 210.0f);
    glVertex2f(35.0f, 200.0f);
    glVertex2f(35.0f, 290.0f);
    glEnd();
    //window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(25.0f, 233.0f);
    glVertex2f(25.0f, 220.0f);
    glVertex2f(32.0f, 220.0f);
    glVertex2f(32.0f, 233.0f);

    glEnd();


    //lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(22.0f, 210.0f);
    glVertex2f(16.0f, 207.0f);

    glVertex2f(35.0f, 190.0f);
    glVertex2f(35.0f, 200.0f);
    glEnd();

    //lower right
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.8f, 0.5f);
    glVertex2f(35.0f, 250.0f);
    glVertex2f(35.0f, 200.0f);
    glVertex2f(66.0f, 220.0f);
    glVertex2f(66.0f, 247.0f);

    glEnd();
    //door
    glBegin(GL_QUADS);
  glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(45.0f, 208.0f);
    glVertex2f(55.0f, 210.0f);
    glVertex2f(55.0f, 230.0f);
    glVertex2f(45.0f, 230.0f);

    glEnd();
//lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(35.0f, 200.0f);
    glVertex2f(35.0f, 190.0f);

    glVertex2f(70.0f, 215.0f);
    glVertex2f(66.0f, 220.0f);
    glEnd();



   //upper 1

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.3f, 0.1f);
    glVertex2f(10.0f, 250.0f);
    glVertex2f(22.0f, 255.0f);
    glVertex2f(34.0f, 290.0f);
    glVertex2f(28.0f, 314.0f);
    glEnd();

    //upper2
    glColor3f(0.7f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(28.0f, 314.0f);
    glVertex2f(35.0f, 250.0f);
    glVertex2f(70.0f, 247.0f);
    glVertex2f(62.0f, 300.0f);
    glEnd();

      //objectyellow
    glColor3f(0.9f, 0.4f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(130.0f, 215.0f);
    glVertex2f(170.0f, 215.0f);
    glVertex2f(170.0f, 260.0f);
    glVertex2f(150.0f, 290.0f);
    glVertex2f(130.0f, 260.0f);

    glEnd();
glLineWidth(5.0f);

    glBegin(GL_LINES);
        glColor3f(0.6f, 0.3f, 0.1f);
        glVertex2f(150.0f, 290.0f);
        glVertex2f(150.0f, 295.0f);
    glEnd();




    int x=70;
    //house2
    //lower_left
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.7f, 0.4f);
    glVertex2f(22.0f+ x, 290.0f);
    glVertex2f(22.0f + x, 210.0f);
    glVertex2f(35.0f + x, 200.0f);
    glVertex2f(35.0f + x, 290.0f);
    glEnd();

     //window
    glBegin(GL_QUADS);
     glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(25.0f+ x, 233.0f);
    glVertex2f(25.0f+ x, 220.0f);
    glVertex2f(32.0f+ x, 220.0f);
    glVertex2f(32.0f+ x, 233.0f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.8f, 0.5f);
    glVertex2f(35.0f + x, 250.0f);
    glVertex2f(35.0f + x, 200.0f);
    glVertex2f(66.0f + x, 220.0f);
    glVertex2f(66.0f + x, 247.0f);

    glEnd();

      //door
    glBegin(GL_QUADS);
     glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(45.0f+ x, 207.0f);
    glVertex2f(55.0f+ x, 208.0f);
    glVertex2f(55.0f+ x, 230.0f);
    glVertex2f(45.0f+ x, 230.0f);

    glEnd();


    glBegin(GL_QUADS);
 glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(126.0f, 238.0f);
    glVertex2f(126.0f, 225.0f);
    glVertex2f(133.0f, 225.0f);
    glVertex2f(133.0f, 238.0f);
    glEnd();



   //upper 1

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.3f, 0.1f);
    glVertex2f(10.0f + x, 250.0f);
    glVertex2f(22.0f + x, 255.0f);
    glVertex2f(34.0f + x, 290.0f);
    glVertex2f(28.0f+ x, 314.0f);
    glEnd();

    //upper2
 glColor3f(0.7f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(28.0f+ x, 314.0f);
    glVertex2f(35.0f+ x, 250.0f);
    glVertex2f(70.0f+ x, 247.0f);
    glVertex2f(62.0f+ x, 300.0f);
    glEnd();

    //lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(22.0f+x, 210.0f);
    glVertex2f(16.0f+x, 205.0f);

    glVertex2f(35.0f+x, 190.0f);
    glVertex2f(35.0f+x, 200.0f);
    glEnd();

    //lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(35.0f+x, 200.0f);
    glVertex2f(35.0f+x, 190.0f);

    glVertex2f(70.0f+x, 212.0f);
    glVertex2f(66.0f+x, 220.0f);
    glEnd();

   //house3tree


    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(455.0f, 260.0f);
    glVertex2f(460.0f, 260.0f);
    glVertex2f(460.0f, 360.0f);
    glVertex2f(455.0f, 360.0f);
    glEnd();
  glColor3f(0.1f, 0.3f, 0.1f);
    drawCircle(16,460,365);
    drawCircle(16,477,365);
    drawCircle(16,440,367);
      drawCircle(16,452,388);
        drawCircle(16,466,388);
          drawCircle(16,459,405);
//house3
    //upper
    glColor3f(0.7f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(450.0f, 300.0f);
    glVertex2f(500.0f, 300.0f);
    glVertex2f(500.0f, 340.0f);
    glVertex2f(465.0f, 340.0f);
    glEnd();

    //lower1
    glColor3f(0.9f, 0.7f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(465.0f, 300.0f);
    glVertex2f(465.0f, 260.0f);
    glVertex2f(500.0f, 260.0f);
    glVertex2f(500.0f, 300.0f);
    glEnd();

    //door

    glBegin(GL_QUADS);
     glColor3f(1.0f, 1.0f, 0.4f);
    glVertex2f(485.0f, 260.0f);
    glVertex2f(495.0f, 260.0f);
    glVertex2f(495.0f, 280.0f);
    glVertex2f(485.0f, 280.0f);

    //window
    glColor3f(1.0f, 1.0f, 0.4f);
    glVertex2f(470.0f, 285.0f);
    glVertex2f(470.0f, 275.0f);
    glVertex2f(480.0f, 275.0f);
    glVertex2f(480.0f, 285.0f);



    glEnd();

    //lower2
    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(465.0f, 260.0f);
    glVertex2f(460.0f, 250.0f);
    glVertex2f(500.0f, 250.0f);
    glVertex2f(500.0f, 260.0f);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(0.6f, 0.2f, 0.0f);
    glVertex2f(190.0f, 235.0f);
    glVertex2f(220.0f, 235.0f);
    glVertex2f(215.0f, 220.0f);
    glVertex2f(195.0f, 220.0f);
    glEnd();
     glColor3f(0.0, 0.0f, 0.0f);
     glBegin(GL_LINES);
     glVertex2f(190.0f, 240.0f);
    glVertex2f(195.0f, 220.0f);
     glVertex2f(220.0f, 240.0f);
    glVertex2f(215.0f, 220.0f);

    glVertex2f(205.0f, 240.0f);
    glVertex2f(205.0f, 220.0f);


    glEnd();


    glFlush();



}
void road()
{
     //road
     glColor3f(0.9f, 0.8f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 310.0f);
    glVertex2f(0.0f, 280.0f);
    glVertex2f(500.0f, 266.0f);
    glVertex2f(500.0f, 280.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f, 280.0f);
    glVertex2f(450.0f, 280.0f);
    glVertex2f(350.0f, 260.0f);
    glVertex2f(500.0f, 210.0f);
    glVertex2f(500.0f, 190.0f);
    glVertex2f(460.0f, 180.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(500.0f, 230.0f);
    glVertex2f(500.0f, 190.0f);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(0.0f, 130.0f);
    glEnd();

}


void river_night() {
    glColor3f(0.2f, 0.3f, 0.5f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(500.0f, 0.0f);
    glVertex2f(500.0f, 190.0f);
    glEnd();

    glColor3f(0.6f, 0.3f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(0.0f, 90.0f);
    glVertex2f(500.0f, 180.0f);
    glVertex2f(500.0f, 190.0f);
    glEnd();


}






float cloudX = 100;
float cloudY = 450;




void drawCloud() {
    glColor3f(1.0, 1.0, 1.0);

    drawCircle(20, cloudX, cloudY);

    drawCircle(20, cloudX - 30, cloudY);

    drawCircle(20, cloudX + 30, cloudY);
    drawCircle(25, cloudX, cloudY + 25);




}


void updateCloudPosition(int value) {

    cloudX += 2.0;


    if (cloudX > 500+100) {
        cloudX = 0-100;
    }
    glutPostRedisplay();

    glutTimerFunc(30, updateCloudPosition, 0);
}







void hill_sky()
{
    //sky
    glColor3f(0.3f, 0.6f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 330.0f);
    glVertex2f(500.0f, 330.0f);
    glVertex2f(500.0f, 500.0f);
    glVertex2f(0.0f, 500.0f);
    glEnd();
//sun
glPushMatrix();
glTranslatef(450, 450, 0);
glColor3f(1.0, 1.0, 0.4);
glBegin(GL_POLYGON);
for (int i = 0; i < 360; i++) {
    float pi = 3.1416;
    float A = (i * 2 * pi) / 180;
    float r = 20;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x, y);
}
glEnd();
glPopMatrix();




    //hill 1

    glColor3f(0.1f, 0.3f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 330.0f);
    glVertex2f(80.0f, 330.0f);
    glVertex2f(40.0f, 390.0f);
    glEnd();

    //h2

    glColor3f(0.1f, 0.4f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(50.0f, 330.0f);
    glVertex2f(140.0f, 330.0f);
    glVertex2f(95.0f, 370.0f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(110.0f, 330.0f);
    glVertex2f(190.0f, 330.0f);
    glVertex2f(150.0f, 380.0f);
    glEnd();

    //h4
     glColor3f(0.1f, 0.5f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f, 330.0f);
    glVertex2f(230.0f, 330.0f);
    glVertex2f(195.0f, 370.0f);
    glEnd();

    glColor3f(0.1f, 0.5f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(250.0f, 330.0f);
    glVertex2f(320.0f, 330.0f);
    glVertex2f(270.0f, 360.0f);
    glEnd();
    glColor3f(0.1f, 0.6f, 0.4f);
    glBegin(GL_TRIANGLES);
    glVertex2f(280.0f, 330.0f);
    glVertex2f(350.0f, 330.0f);
    glVertex2f(295.0f, 355.0f);
    glEnd();


    glColor3f(0.1f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(410.0f, 330.0f);
    glVertex2f(490.0f, 330.0f);
    glVertex2f(430.0f, 365.0f);
    glEnd();
    //tree_sky
    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(370.0f, 330.0f);
    glVertex2f(373.0f, 330.0f);
    glVertex2f(373.0f, 360.0f);
    glVertex2f(370.0f, 360.0f);
    glEnd();

     glColor3f(0.3f, 0.3f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(355.0f, 360.0f);
    glVertex2f(385.0f, 360.0f);
    glVertex2f(370.0f, 375.0f);
    glEnd();

    glColor3f(0.3f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(357.0f, 365.0f);
    glVertex2f(383.0f, 365.0f);
    glVertex2f(370.0f, 380.0f);
    glEnd();

    //tree-sky2

    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(390.0f, 330.0f);
    glVertex2f(393.0f, 330.0f);
    glVertex2f(393.0f, 380.0f);
    glVertex2f(390.0f, 380.0f);
    glEnd();

    glColor3f(0.3f, 0.3f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(375.0f, 380.0f);
    glVertex2f(410.0f, 380.0f);
    glVertex2f(392.0f, 400.0f);
    glEnd();

    glColor3f(0.3f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(377.0f, 390.0f);
    glVertex2f(407.0f, 390.0f);
    glVertex2f(392.0f, 410.0f);
    glEnd();
    int t=130;
     //tree_sky
    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(370.0f-t, 330.0f);
    glVertex2f(373.0f-t, 330.0f);
    glVertex2f(373.0f-t, 360.0f);
    glVertex2f(370.0f-t, 360.0f);
    glEnd();

     glColor3f(0.3f, 0.3f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(355.0f-t, 360.0f);
    glVertex2f(385.0f-t, 360.0f);
    glVertex2f(370.0f-t, 375.0f);
    glEnd();

    glColor3f(0.3f, 0.4f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(357.0f-t, 365.0f);
    glVertex2f(383.0f-t, 365.0f);
    glVertex2f(370.0f-t, 380.0f);
    glEnd();


}
void field()
{
       //backside field
    glColor3f(0.7f, 0.9f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 320.0f);
    glVertex2f(500.0f, 290.0f);
    glVertex2f(500.0f, 330.0f);
    glVertex2f(0.0f, 330.0f);
    glEnd();
    glColor3f(0.6f, 0.8f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 310.0f);
    glVertex2f(500.0f, 280.0f);
    glVertex2f(500.0f, 305.0f);
    glVertex2f(0.0f, 320.0f);
    glEnd();

}


void object_house_tree()
{

   //flower
    glColor3f(0.8f, 0.0f, 0.3f);
    drawCircle(4,284,210);
    drawCircle(4,276,210);
    drawCircle(4,280,214);
    drawCircle(4,310,220);
    drawCircle(4,300,220);
    drawCircle(4,305,225);

    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(2,280,210);
    drawCircle(2,305,220);
    drawCircle(2,290,210);
    int gh=30;
    glColor3f(0.3f, 0.8f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(300.0f, 160.0f+gh);
    glVertex2f(310.0f, 160.0f+gh);
    glVertex2f(280.0f, 180.0f+gh);

    glVertex2f(300.0f, 160.0f+gh);
    glVertex2f(310.0f, 160.0f+gh);
    glVertex2f(290.0f, 180.0f+gh);

    glVertex2f(305.0f, 160.0f+gh);
    glVertex2f(315.0f, 160.0f+gh);
    glVertex2f(305.0f, 190.0f+gh);

    glVertex2f(305.0f, 160.0f+gh);
    glVertex2f(315.0f, 160.0f+gh);
    glVertex2f(325.0f, 190.0f+gh);

    glVertex2f(305.0f, 160.0f+gh);
    glVertex2f(315.0f, 160.0f+gh);
    glVertex2f(340.0f, 180.0f+gh);
    glEnd();



     glLineWidth(5.0f);

     int l=10;
     for(int i=0;i<4;i++)
     {
        glBegin(GL_LINES);
        glColor3f(0.6f, 0.3f, 0.0f);

        glVertex2f(0.0f, 230.0f+l*i);
        glVertex2f(180.0f, 230.0f+l*i);

       glEnd();



     }
     int l1=10;
     for(int i=0;i<18;i++)
     {
        glBegin(GL_LINES);
        glColor3f(0.6f, 0.3f, 0.0f);
        glVertex2f(0.0f+l1*i, 230.0f);
        glVertex2f(0.0f+l1*i, 270.0f);
        glEnd();



     }

    glBegin(GL_LINES);

        glColor3f(0.6f, 0.3f, 0.1f);
        glVertex2f(150.0f, 290.0f);
        glVertex2f(150.0f, 295.0f);
        glEnd();
//box
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.4f, 0.0f);
    glVertex2f(190.0f, 235.0f);
    glVertex2f(220.0f, 235.0f);
    glVertex2f(215.0f, 220.0f);
    glVertex2f(195.0f, 220.0f);
    glEnd();
     glColor3f(0.5f, 0.2f, 0.0f);
     glBegin(GL_LINES);
     glVertex2f(190.0f, 240.0f);
    glVertex2f(195.0f, 220.0f);
     glVertex2f(220.0f, 240.0f);
    glVertex2f(215.0f, 220.0f);

    glVertex2f(205.0f, 240.0f);
    glVertex2f(205.0f, 220.0f);


    glEnd();



     //middle tree
    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f, 220.0f);
    glVertex2f(82.0f, 220.0f);
    glVertex2f(82.0f, 300.0f);
    glVertex2f(75.0f, 300.0f);

    glEnd();
//tri22
    glColor3f(0.0f, 0.4f, 0.0f);
     drawCircle(15,78,310);
     drawCircle(15,70,310);
      drawCircle(15,90,330);
       drawCircle(15,65,330);
       drawCircle(15,95,315);
         drawCircle(15,74,350);
          drawCircle(15,84,350);
           drawCircle(13,80,365);





    int y= 60;
    //middle tree
    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f-y , 220.0f);
    glVertex2f(82.0f-y, 220.0f);
    glVertex2f(82.0f-y, 300.0f);
    glVertex2f(75.0f-y, 300.0f);

    glEnd();
     glColor3f(0.0f, 0.5f, 0.0f);
     drawCircle(15,78-y,310);
     drawCircle(15,70-y,310);
      drawCircle(15,90-y,330);
       drawCircle(15,65-y,330);
       drawCircle(15,95-y,315);
         drawCircle(15,74-y,350);
          drawCircle(15,84-y,350);
           drawCircle(13,80-y,365);


    //house1
    //lower_left
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.7f, 0.4f);
    glVertex2f(22.0f, 290.0f);
    glVertex2f(22.0f, 210.0f);
    glVertex2f(35.0f, 200.0f);
    glVertex2f(35.0f, 290.0f);
    glEnd();
    //window
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(25.0f, 233.0f);
    glVertex2f(25.0f, 220.0f);
    glVertex2f(32.0f, 220.0f);
    glVertex2f(32.0f, 233.0f);

    glEnd();


    //lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(22.0f, 210.0f);
    glVertex2f(16.0f, 207.0f);

    glVertex2f(35.0f, 190.0f);
    glVertex2f(35.0f, 200.0f);
    glEnd();

    //lower right
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.8f, 0.5f);
    glVertex2f(35.0f, 250.0f);
    glVertex2f(35.0f, 200.0f);
    glVertex2f(66.0f, 220.0f);
    glVertex2f(66.0f, 247.0f);

    glEnd();
    //door
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(45.0f, 208.0f);
    glVertex2f(55.0f, 210.0f);
    glVertex2f(55.0f, 230.0f);
    glVertex2f(45.0f, 230.0f);

    glEnd();
     //lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(35.0f, 200.0f);
    glVertex2f(35.0f, 190.0f);

    glVertex2f(70.0f, 215.0f);
    glVertex2f(66.0f, 220.0f);
    glEnd();



   //upper 1

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.3f, 0.1f);
    glVertex2f(10.0f, 250.0f);
    glVertex2f(22.0f, 255.0f);
    glVertex2f(34.0f, 290.0f);
    glVertex2f(28.0f, 314.0f);
    glEnd();

    //upper2
    glColor3f(0.9f, 0.5f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(28.0f, 314.0f);
    glVertex2f(35.0f, 250.0f);
    glVertex2f(70.0f, 247.0f);
    glVertex2f(62.0f, 300.0f);
    glEnd();

      //objectyellow
    glColor3f(0.9f, 0.6f, 0.1f);
    glBegin(GL_POLYGON);
    glVertex2f(130.0f, 215.0f);
    glVertex2f(170.0f, 215.0f);
    glVertex2f(170.0f, 260.0f);
    glVertex2f(150.0f, 290.0f);
    glVertex2f(130.0f, 260.0f);

    glEnd();
glLineWidth(5.0f);

    glBegin(GL_LINES);
        glColor3f(0.6f, 0.3f, 0.1f);
        glVertex2f(150.0f, 290.0f);
        glVertex2f(150.0f, 295.0f);
    glEnd();




    int x=70;
    //house2
    //lower_left
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.7f, 0.4f);
    glVertex2f(22.0f+ x, 290.0f);
    glVertex2f(22.0f + x, 210.0f);
    glVertex2f(35.0f + x, 200.0f);
    glVertex2f(35.0f + x, 290.0f);
    glEnd();

     //window
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(25.0f+ x, 233.0f);
    glVertex2f(25.0f+ x, 220.0f);
    glVertex2f(32.0f+ x, 220.0f);
    glVertex2f(32.0f+ x, 233.0f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.8f, 0.5f);
    glVertex2f(35.0f + x, 250.0f);
    glVertex2f(35.0f + x, 200.0f);
    glVertex2f(66.0f + x, 220.0f);
    glVertex2f(66.0f + x, 247.0f);

    glEnd();

      //door
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(45.0f+ x, 207.0f);
    glVertex2f(55.0f+ x, 208.0f);
    glVertex2f(55.0f+ x, 230.0f);
    glVertex2f(45.0f+ x, 230.0f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(126.0f, 238.0f);
    glVertex2f(126.0f, 225.0f);
    glVertex2f(133.0f, 225.0f);
    glVertex2f(133.0f, 238.0f);
    glEnd();



   //upper 1

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.3f, 0.1f);
    glVertex2f(10.0f + x, 250.0f);
    glVertex2f(22.0f + x, 255.0f);
    glVertex2f(34.0f + x, 290.0f);
    glVertex2f(28.0f+ x, 314.0f);
    glEnd();

    //upper2
    glColor3f(0.9f, 0.5f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(28.0f+ x, 314.0f);
    glVertex2f(35.0f+ x, 250.0f);
    glVertex2f(70.0f+ x, 247.0f);
    glVertex2f(62.0f+ x, 300.0f);
    glEnd();

    //lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(22.0f+x, 210.0f);
    glVertex2f(16.0f+x, 205.0f);

    glVertex2f(35.0f+x, 190.0f);
    glVertex2f(35.0f+x, 200.0f);
    glEnd();

    //lowerborderleft
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f);
    glVertex2f(35.0f+x, 200.0f);
    glVertex2f(35.0f+x, 190.0f);

    glVertex2f(70.0f+x, 212.0f);
    glVertex2f(66.0f+x, 220.0f);
    glEnd();

   //house3tree


    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(450.0f, 260.0f);
    glVertex2f(460.0f, 260.0f);
    glVertex2f(460.0f, 360.0f);
    glVertex2f(450.0f, 360.0f);
    glEnd();
    glColor3f(0.2f, 0.6f, 0.3f);
    drawCircle(16,460,365);
    drawCircle(16,477,365);
    drawCircle(16,440,367);
      drawCircle(16,452,388);
        drawCircle(16,466,388);
          drawCircle(16,459,405);









    //house3
    //upper
    glColor3f(0.9f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(450.0f, 300.0f);
    glVertex2f(500.0f, 300.0f);
    glVertex2f(500.0f, 340.0f);
    glVertex2f(465.0f, 340.0f);
    glEnd();

    //lower1
    glColor3f(0.9f, 0.7f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(465.0f, 300.0f);
    glVertex2f(465.0f, 260.0f);
    glVertex2f(500.0f, 260.0f);
    glVertex2f(500.0f, 300.0f);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(485.0f, 260.0f);
    glVertex2f(495.0f, 260.0f);
    glVertex2f(495.0f, 280.0f);
    glVertex2f(485.0f, 280.0f);

    //window
    glVertex2f(470.0f, 285.0f);
    glVertex2f(470.0f, 275.0f);
    glVertex2f(480.0f, 275.0f);
    glVertex2f(480.0f, 285.0f);
    glEnd();

    //lower2
    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(465.0f, 260.0f);
    glVertex2f(460.0f, 250.0f);
    glVertex2f(500.0f, 250.0f);
    glVertex2f(500.0f, 260.0f);
    glEnd();
    glFlush();



}

void boat1()
{

     glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 15.0f);
    glVertex2f(130.0f, 15.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(100.0f, 30.0f);
    glEnd();
   //left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(100.0f, 15.0f);
    glVertex2f(100.0f, 30.0f);
    glVertex2f(80.0f, 40.0f);
    glEnd();
    //right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f, 15.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(150.0f, 40.0f);
    glEnd();
    //upper
    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 30.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(130.0f, 55.0f);
    glVertex2f(100.0f, 55.0f);
    glEnd();



    glBegin(GL_LINES);
        glLineWidth(3.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(115.0f, 55.0f);
    glVertex2f(115.0f, 120.0f);
    glEnd();
    //pal
    glColor3f(0.6f, 0.0f, 0.5f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f, 65.0f);
    glVertex2f(113.0f,  110.0f);
    glVertex2f(100.0f, 110.0f);
    glVertex2f(100.0f, 65.0f);
    glEnd();
    //pal2
    glColor3f(0.6f, 0.0f, 0.7f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f+17.0f, 65.0f);
    glVertex2f(113.0f+17.0f,  110.0f);
    glVertex2f(100.0f+17.0f, 110.0f);
    glVertex2f(100.0f+17.0f, 65.0f);
    glEnd();


    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(130.0f, 110.0f);
    glVertex2f(150.0f, 40.0f);

    glVertex2f(113.0f,  110.0f);
    glVertex2f(150.0f, 40.0f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(95.0f, 110.0f);
    glVertex2f(113.0f+20.0f,  110.0f);
    glEnd();

      glPopMatrix();


}

float boatX = 500.0f;
float boatY = 180.0f;

void update(int value) {

    boatX -= 4.0f;
    boatY -= 1.0f;


    if (boatX < 0.0f-150.0f && boatY < 0.0f-100.0f) {
        boatX = 500.0f;
        boatY = 180.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(40, update, 0);
}
float boat2_initial = 0.0f-200.0f;

void boat2()
{

glPushMatrix();
    glTranslatef(boat2_initial, 0.0f, 0.0f);
     glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 15.0f);
    glVertex2f(130.0f, 15.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(100.0f, 30.0f);
    glEnd();
//left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(100.0f, 15.0f);
    glVertex2f(100.0f, 30.0f);
    glVertex2f(80.0f, 40.0f);
    glEnd();
//right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f, 15.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(150.0f, 40.0f);
    glEnd();
//upper
    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 30.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(130.0f, 55.0f);
    glVertex2f(100.0f, 55.0f);
    glEnd();



    glBegin(GL_LINES);
        glLineWidth(3.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(115.0f, 55.0f);
    glVertex2f(115.0f, 120.0f);
    glEnd();
//pal
    glColor3f(0.9f, 0.0f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f, 65.0f);
    glVertex2f(113.0f,  110.0f);
    glVertex2f(100.0f, 110.0f);
    glVertex2f(100.0f, 65.0f);
    glEnd();
    //pal2
     glColor3f(0.9f, 0.1f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f+17.0f, 65.0f);
    glVertex2f(113.0f+17.0f,  110.0f);
    glVertex2f(100.0f+17.0f, 110.0f);
    glVertex2f(100.0f+17.0f, 65.0f);
    glEnd();


    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(130.0f, 110.0f);
    glVertex2f(150.0f, 40.0f);

    glVertex2f(113.0f,  110.0f);
    glVertex2f(150.0f, 40.0f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(95.0f, 110.0f);
    glVertex2f(113.0f+20.0f,  110.0f);
    glEnd();

  glPopMatrix();




}
float savedSpeed = 2.0f;
bool paused = false;


void update1(int value) {
    if (!paused) {
        boat2_initial += savedSpeed;
        if (boat2_initial > 500.0f) {
            boat2_initial = -200.0f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(40, update1, 0);
}



void mouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) {
            savedSpeed -= 0.5f;
            if (savedSpeed < 0.5f)
                savedSpeed = 0.5f;

        }
        else if (button == GLUT_RIGHT_BUTTON) {
            savedSpeed += 0.5f;
            if (savedSpeed > 10.0f)
                savedSpeed = 10.0f;

        }
    }
}

float rickshawPosition_night = 500.0f;
float originalSpeed1 = 2.0f;

bool speedBoosted = false;

void rickshaw_night()
{
    glPushMatrix();
    glTranslatef(rickshawPosition_night, 0.0f, 0.0f);

    glColor3f(0.0, 0.0, 0.0);
    drawCircle(8, 250, 290);
    glColor3f(0.5f, 0.4f, 0.2f);
    drawCircle(7, 250, 290);
    glColor3f(0.0, 0.0, 0.0);
    drawCircle(8, 280, 290);
  glColor3f(0.5f, 0.4f, 0.2f);
    drawCircle(7, 280, 290);
    glColor3f(0.0, 0.0, 0.0);
    drawCircle(3, 265, 290);
     drawCircle(4, 270, 330);



    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2f(265.0f, 290.0f);
    glVertex2f(280.0f, 290.0f);
//padel
    glVertex2f(265.0f, 290.0f);
      glVertex2f(263.0f, 283.0f);




    glVertex2f(265.0f, 290.0f);
    glVertex2f(252.0f, 305.0f);


    glVertex2f(252.0f, 305.0f);
    glVertex2f(265.0f, 305.0f);
    glColor3f(0.0, 0.0, 0.0);

     glVertex2f(253.0f, 312.0f);
    glVertex2f(275.0f, 307.0f);

    //line
    glVertex2f(288.0f, 325.0f);
    glVertex2f(288.0f, 320.0f);

    glVertex2f(286.0f, 325.0f);
    glVertex2f(286.0f, 320.0f);

     glVertex2f(283.0f, 325.0f);
    glVertex2f(283.0f, 320.0f);

     glVertex2f(280.0f, 325.0f);
    glVertex2f(281.0f, 320.0f);




    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f(250.0f, 290.0f);
    glVertex2f(255.0f, 315.0f);

    glVertex2f(252.0f, 305.0f);
    glVertex2f(275.0f, 305.0f);

     glVertex2f(280.0f, 290.0f);
      glVertex2f(282.0f, 310.0f);

    glColor3f(0.9, 0.5, 0.1);
    glVertex2f(264.0f, 318.0f);
    glVertex2f(260.0f, 318.0f);



    glEnd();


    glBegin(GL_QUADS);
      //light
    glColor3f(0.6, 0.6, 0.0);
     glVertex2f(252.0f, 317.0f);
      glVertex2f(252.0f, 315.0f);

       glVertex2f(210.0f, 280.0f);
        glVertex2f(180.0f, 280.0f);


    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(252.0f, 315.0f);
    glVertex2f(260.0f, 315.0f);
    glVertex2f(260.0f, 320.0f);
    glVertex2f(252.0f, 317.0f);

    //light

      glVertex2f(252.0f, 315.0f);
    glVertex2f(260.0f, 315.0f);
    glVertex2f(260.0f, 320.0f);
    glVertex2f(252.0f, 317.0f);



    glVertex2f(273.0f, 305.0f);
    glVertex2f(288.0f, 305.0f);
    glVertex2f(288.0f, 315.0f);
    glVertex2f(273.0f, 312.0f);


    glVertex2f(288.0f, 315.0f);
    glVertex2f(288.0f, 320.0f);
    glVertex2f(280.0f, 320.0f);
    glVertex2f(277.0f, 310.0f);

    glColor3f(0.7, 0.0, 0.0);
    glVertex2f(288.0f, 325.0f);
    glVertex2f(290.0f, 350.0f);
    glVertex2f(277.0f, 350.0f);
    glVertex2f(279.0f, 325.0f);

    glColor3f (0.7, 0.0, 0.4);
    glVertex2f(267.0f, 326.0f);
    glVertex2f(274.0f, 326.0f);
    glVertex2f(273.0f, 310.0f);
    glVertex2f(265.0f, 310.0f);
     glColor3f(0.6, 0.2, 0.3);
    glVertex2f(267.0f, 326.0f);
    glVertex2f(267.0f, 320.0f);
    glVertex2f(264.0f, 315.0f);
    glVertex2f(263.0f, 320.0f);

    glColor3f(0.7, 0.3, 0.2);
    glVertex2f(273.0f, 310.0f);
    glVertex2f(265.0f, 310.0f);
    glVertex2f(262.0f, 292.0f);
      glVertex2f(266.0f, 292.0f);


    glEnd();

    glPopMatrix();

}
float savedSpeed1 = 2.0f;
bool paused1 = false;

void update3_night(int value) {
    if (!paused1) {
        rickshawPosition_night -= savedSpeed1;
        if (rickshawPosition_night < -300.0f) {
            rickshawPosition_night = 500.0f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(40, update3_night, 0);
}

void mouse1(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) {
            savedSpeed1 -= 0.5f;
            if (savedSpeed1 < 0.5f)
                savedSpeed1 = 0.5f;
        }
        else if (button == GLUT_RIGHT_BUTTON) {
            savedSpeed1 += 0.5f;
            if (savedSpeed1 > 10.0f)
                savedSpeed1 = 10.0f;
        }
        else if (button == GLUT_MIDDLE_BUTTON) {
            paused1 = !paused1;
        }
    }
}


void rickshaw()
{
    glPushMatrix();
    glTranslatef(rickshawPosition_night, 0.0f, 0.0f);

    glColor3f(0.0, 0.0, 0.0);
    drawCircle(8, 250, 290);
    glColor3f(0.9f, 0.8f, 0.3f);
    drawCircle(7, 250, 290);
    glColor3f(0.0, 0.0, 0.0);
    drawCircle(8, 280, 290);
    glColor3f(0.9f, 0.8f, 0.3f);
    drawCircle(7, 280, 290);
    glColor3f(0.0, 0.0, 0.0);
    drawCircle(3, 265, 290);
     drawCircle(4, 270, 330);



    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2f(265.0f, 290.0f);
    glVertex2f(280.0f, 290.0f);
//padel
    glVertex2f(265.0f, 290.0f);
      glVertex2f(263.0f, 283.0f);




    glVertex2f(265.0f, 290.0f);
    glVertex2f(252.0f, 305.0f);


    glVertex2f(252.0f, 305.0f);
    glVertex2f(265.0f, 305.0f);
    glColor3f(0.0, 0.0, 0.0);

     glVertex2f(253.0f, 312.0f);
    glVertex2f(275.0f, 307.0f);

    //line
    glVertex2f(288.0f, 325.0f);
    glVertex2f(288.0f, 320.0f);

    glVertex2f(286.0f, 325.0f);
    glVertex2f(286.0f, 320.0f);

     glVertex2f(283.0f, 325.0f);
    glVertex2f(283.0f, 320.0f);

     glVertex2f(280.0f, 325.0f);
    glVertex2f(281.0f, 320.0f);




    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f(250.0f, 290.0f);
    glVertex2f(255.0f, 315.0f);

    glVertex2f(252.0f, 305.0f);
    glVertex2f(275.0f, 305.0f);

     glVertex2f(280.0f, 290.0f);
      glVertex2f(282.0f, 310.0f);

    glColor3f(0.9, 0.5, 0.1);
    glVertex2f(264.0f, 318.0f);
    glVertex2f(260.0f, 318.0f);



    glEnd();

glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);

    glVertex2f(252.0f, 315.0f);
    glVertex2f(260.0f, 315.0f);
    glVertex2f(260.0f, 320.0f);
    glVertex2f(252.0f, 317.0f);

    glVertex2f(273.0f, 305.0f);
    glVertex2f(288.0f, 305.0f);
    glVertex2f(288.0f, 315.0f);
    glVertex2f(273.0f, 312.0f);


    glVertex2f(288.0f, 315.0f);
    glVertex2f(288.0f, 320.0f);
    glVertex2f(280.0f, 320.0f);
    glVertex2f(277.0f, 310.0f);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(288.0f, 325.0f);
    glVertex2f(290.0f, 350.0f);
    glVertex2f(277.0f, 350.0f);
    glVertex2f(279.0f, 325.0f);

    glColor3f(0.7, 0.0, 0.4);
    glVertex2f(267.0f, 326.0f);
    glVertex2f(274.0f, 326.0f);
    glVertex2f(273.0f, 310.0f);
    glVertex2f(265.0f, 310.0f);

    glVertex2f(267.0f, 326.0f);
    glVertex2f(267.0f, 320.0f);
    glVertex2f(264.0f, 315.0f);
    glVertex2f(263.0f, 320.0f);

    glColor3f(0.7, 0.3, 0.2);
    glVertex2f(273.0f, 310.0f);
    glVertex2f(265.0f, 310.0f);
    glVertex2f(262.0f, 292.0f);
      glVertex2f(266.0f, 292.0f);


    glEnd();

      glPopMatrix();

}





void river() {
    glColor3f(0.6f, 0.7f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(500.0f, 0.0f);
    glVertex2f(500.0f, 190.0f);
    glEnd();

    glColor3f(0.6f, 0.3f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(0.0f, 90.0f);
    glVertex2f(500.0f, 180.0f);
    glVertex2f(500.0f, 190.0f);
    glEnd();


}
float xPosition=0.0;
float yPosition=0.0;

void people()
{
    glPushMatrix();
    glTranslatef(xPosition,yPosition, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(5,20,170);

    glColor3f(0.9f, 0.0f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(15.0f,165.0f);
     glVertex2f(25.0f,165.0f);
     glVertex2f(27.5f,145.0f);
     glVertex2f(13.5f,145.0f);
    //handpart
     glVertex2f(25.0f,165.0f);
     glVertex2f(20.5f,162.0f);
     glVertex2f(26.0f,155.0f);
     glVertex2f(28.5f,158.0f);

   glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(26.0f,156.0f);
    glVertex2f(27.5f,160.0f);
    glVertex2f(33.0f,147.0f);
    glVertex2f(33.0f,143.0f);



//leg
     glColor3f(0.0f, 0.0f, 1.0f);
     glVertex2f(14.5f,145.0f);
    glVertex2f(21.5f,145.0f);
    glVertex2f(19.5f,120.0f);
   glVertex2f(13.5f,120.0f);


     glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(20.5f,145.0f);
    glVertex2f(27.5f,145.0f);
    glVertex2f(28.5f,120.0f);
    glVertex2f(22.5f,120.0f);
  //pa
   glColor3f(0.9f, 0.5f, 0.3f);
   glVertex2f(22.5f,120.0f);
    glVertex2f(22.5f,115.0f);
    glVertex2f(28.5f,115.0f);
      glVertex2f(25.5f,120.0f);

   glVertex2f(22.5f-7.0f,120.0f);
    glVertex2f(22.5f-7.0f,115.0f);
    glVertex2f(28.5f-7.0f,115.0f);
      glVertex2f(25.5f-7.0f,120.0f);




    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(30.0f,145.0f);
    glVertex2f(37.0f,140.0f);
    glEnd();
    drawCircle(2,37,140);

    glColor3f(0.7, 0.6, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(37.0f,140.0f);
     glVertex2f(37.0f,137.0f);
      glVertex2f(47.0f,115.0f);
       glVertex2f(67.0f,115.0f);
       glEnd();
 glPopMatrix();

}
void update_p(int value) {

    xPosition += 2.5f;
    yPosition += 0.5f;


    if (xPosition > 500.0f && yPosition > 190.0f) {
        xPosition = 0.0f-10.0f;
        yPosition = 0.0f;
    }


    glutPostRedisplay();
    glutTimerFunc(90, update_p, 0);
}



void display1() {
    glClear(GL_COLOR_BUFFER_BIT);
    hill_sky();
    drawCloud();
    field();
    road();
    rickshaw();
    object_house_tree();

    river();
    glPushMatrix();
    glTranslatef(boatX,boatY , 0.0f);
    boat1();
    glPopMatrix();

    boat2();

   glFlush();
   glutSwapBuffers();
}



void display2()
{
    glClear(GL_COLOR_BUFFER_BIT);
    hill_sky_night();
    //rickshaw_night();
    field_night();
    road_nigt();
    rickshaw_night();
    object_house_tree_night();
    river_night();
    people();
    boat1_night();
    glFlush();
    glutSwapBuffers();
}
//sahfincode
void drawCircle1(float cx, float cy, float radius, int num_segments)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cos(theta);
        float y = radius * sin(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void hill_night()
{
    //sky
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 230.0f);
    glVertex2f(500.0f, 230.0f);
    glVertex2f(500.0f, 500.0f);
    glVertex2f(0.0f, 500.0f);
    glEnd();

     glPointSize(3.0);
    glColor3f(1.0, 1.0, 1.0);

       glBegin(GL_POINTS);
        glVertex2f(250.0, 375.0);
        glVertex2f(20.0, 380.0);
        glVertex2f(300.0, 395.0);
        glVertex2f(250.0, 375.0);




    glVertex2f(300.0, 383.0);
    glVertex2f(350.0, 397.0);
    glVertex2f(404.0, 440.0);
    glVertex2f(430.0, 420.0);
    glVertex2f(486.0, 440.0);


    glVertex2f(160.0, 400.0);
    glVertex2f(220.0, 410.0);
    glVertex2f(270.0, 430.0);
    glVertex2f(320.0, 450.0);
    glVertex2f(370.0, 470.0);
    glVertex2f(420.0, 490.0);
    glVertex2f(470.0, 495.0);
    glVertex2f(270.0, 430.0);
    glVertex2f(30.0, 450.0);
    glVertex2f(130.0, 470.0);
    glVertex2f(90.0, 490.0);
    glVertex2f(130.0, 495.0);
    glVertex2f(33.0, 430.0);
    glVertex2f(55.0, 470.0);
    glVertex2f(90.0, 370.0);
    glVertex2f(130.0, 450.0);

     glVertex2f(230.0, 370.0);
    glVertex2f(190.0, 450.0);
 glVertex2f(318.0, 370.0);
    glVertex2f(279.0, 450.0);


    glEnd();
//1
 glColor3f(0.1f, 0.3f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-30.0f, 230.0f);
    glVertex2f(200.0f, 230.0f);
    glVertex2f(80.0f, 400.0f);
    glEnd();

    drawCircle(40,105,370);



    //hill 2

    glColor3f(0.1f, 0.4f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f, 230.0f);
    glVertex2f(250.0f, 230.0f);
    glVertex2f(145.0f, 400.0f);
    glEnd();


    glColor3f(0.1f, 0.4f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(200.0f, 230.0f);
    glVertex2f(300.0f, 230.0f);
    glVertex2f(250.0f, 320.0f);
    glEnd();

    drawCircle(20,300,250);


    //hill 3

    glColor3f(0.1f, 0.5f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f, 230.0f);
    glVertex2f(530.0f, 230.0f);
    glVertex2f(495.0f, 351.0f);
    glEnd();
    drawCircle(30,495,320);

    //hill4
    glColor3f(0.1f, 0.3f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(280.0f, 230.0f);
    glVertex2f(450.0f, 230.0f);
    glVertex2f(350.0f, 340.0f);
    glEnd();
//2




}
void sun_night()
{
    glPushMatrix();
    glTranslatef(450, 450, 0);
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}
void tree_left_side_night()
{
    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f, 220.0f);
    glVertex2f(82.0f, 220.0f);
    glVertex2f(82.0f, 300.0f);
    glVertex2f(75.0f, 300.0f);

    glEnd();


      glColor3f(0.2f, 0.4f, 0.2f);
    drawCircle(20,70,310);
    drawCircle(20,95,310);
    drawCircle(20,80,355);

    drawCircle(20,85,330);
    drawCircle(20,75,330);

    int y = 60;

  glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f - y, 220.0f);
    glVertex2f(82.0f - y, 220.0f);
    glVertex2f(82.0f - y, 300.0f);
    glVertex2f(75.0f - y, 300.0f);

    glEnd();


   glColor3f(0.2f, 0.4f, 0.2f);
    drawCircle(20,70- y,310);
    drawCircle(20,95- y,310);
    drawCircle(20,80- y,355);
    drawCircle(20,85- y,330);
    drawCircle(20,75- y,330);

}
void tree_right_side_night()
{
    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(378.0f , 220.0f);
    glVertex2f(384.0f, 220.0f);
    glVertex2f(384.0f , 310.0f);
    glVertex2f(378.0f , 310.0f);

    glEnd();
    glColor3f(0.2f, 0.4f, 0.2f);
    drawCircle(20,395,350);
    drawCircle(20,377,350);

    drawCircle(20,370,320);
    drawCircle(20,395,320);
    drawCircle(20,385,355);
    drawCircle(20,385,360);


    int y = 100;

    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(378.0f - y, 220.0f);
    glVertex2f(384.0f - y, 220.0f);
    glVertex2f(384.0f - y, 310.0f);
    glVertex2f(378.0f - y, 310.0f);

    glEnd();
    glColor3f(0.2f, 0.4f, 0.2f);
    drawCircle(20,395 - y,350);
    drawCircle(20,377 - y,350);
    drawCircle(20,370 - y,320);
    drawCircle(20,395 - y,320);
    drawCircle(20,385 - y,355);
    drawCircle(20,385 - y,370);
}
void trainline() {
    glLineWidth(40);
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.1f, 0.0f);
    glVertex2f(0, 200);
    glVertex2f(500, 200);
     glVertex2f(0, 195);
    glVertex2f(500, 195);

    glVertex2f(0, 165);
    glVertex2f(500, 165);
    glVertex2f(0, 160);
    glVertex2f(500, 160);
    glEnd();

  for (int i = 0; i < 500; i += 25) {
    glBegin(GL_LINES);
    glLineWidth(10);
    glVertex2f(0 + i, 155);
    glVertex2f(0 + i, 205);
    glVertex2f(5 + i, 155);
    glVertex2f(5 + i, 205);

    glEnd();
}


    glFlush();
}
//train_night
float trainX_night = 0.0f;
void Train_night() {

    int y222 = 60;
    glPushMatrix();
    glTranslatef(trainX_night, 0, 0);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(430, 250 - y222);
    glVertex2f(430, 275 - y222);
    glVertex2f(435, 275 - y222);
    glVertex2f(435, 250 - y222);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.1f, 0.1f);
    glVertex2f(430, 240 - y222);
    glVertex2f(430, 290 - y222);
    glVertex2f(400, 290 - y222);
    glVertex2f(400, 320 - y222);
    glVertex2f(370, 320 - y222);
    glVertex2f(370, 240 - y222);
    glEnd();
    //WINdow 1st
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(390, 270 - y222);
    glVertex2f(390, 310 - y222);
    glVertex2f(375, 310 - y222);
    glVertex2f(375, 270 - y222);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(390, 270 - y222);
    glVertex2f(405, 270 - y222);
    glVertex2f(390, 310 - y222);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(370, 260 - y222);
    glVertex2f(370, 270 - y222);
    glVertex2f(350, 270 - y222);
    glVertex2f(350, 260 - y222);
    glEnd();
    //1st comp
    glBegin(GL_QUADS);
  glColor3f(1.0f, 0.1f, 0.1f);
    glVertex2f(350, 240 - y222);
    glVertex2f(350, 320 - y222);
    glVertex2f(290, 320 - y222);
    glVertex2f(290, 240 - y222);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(315, 270 - y222);
    glVertex2f(315, 310 - y222);
    glVertex2f(295, 310 - y222);
    glVertex2f(295, 270 - y222);

    glVertex2f(340, 270 - y222);
    glVertex2f(340, 310 - y222);
    glVertex2f(320, 310 - y222);
    glVertex2f(320, 270 - y222);


    glEnd();




    //coonecton
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(290, 260 - y222);
    glVertex2f(290, 270 - y222);
    glVertex2f(270, 270 - y222);
    glVertex2f(270, 260 - y222);
    glEnd();
    //2nd compartment
    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.1f, 0.1f);
    glVertex2f(270, 240 - y222);
    glVertex2f(270, 320 - y222);
    glVertex2f(200, 320 - y222);
    glVertex2f(200, 240 - y222);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
   glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(230, 270 - y222);
    glVertex2f(230, 310 - y222);
    glVertex2f(210, 310 - y222);
    glVertex2f(210, 270 - y222);

    glVertex2f(260, 270 - y222);
    glVertex2f(260, 310 - y222);
    glVertex2f(240, 310 - y222);
    glVertex2f(240, 270 - y222);



    glEnd();
//third compart

    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.1f, 0.1f);
    glVertex2f(180, 240 - y222);
    glVertex2f(180, 320 - y222);
    glVertex2f(125, 320 - y222);
    glVertex2f(125, 240 - y222);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(150, 270 - y222);
    glVertex2f(150, 310 - y222);
    glVertex2f(130, 310 - y222);
    glVertex2f(130, 270 - y222);


    glVertex2f(175, 270 - y222);
    glVertex2f(175, 310 - y222);
    glVertex2f(155, 310 - y222);
    glVertex2f(155, 270 - y222);



    glEnd();

    //weels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle1(140, 240 - y222, 10, 50);
    drawCircle1(165, 240 - y222, 10, 50);
    drawCircle1(215, 240 - y222, 10, 50);
    drawCircle1(245, 240 - y222, 10, 50);
    drawCircle1(335, 240 - y222, 10, 50);
    drawCircle1(305, 240 - y222, 10, 50);
    drawCircle1(415, 240 - y222, 10, 50);
    drawCircle1(385, 240 - y222, 10, 50);
    glPopMatrix();
    glFlush();
}


void update3_night_shafin(int value) {
    trainX_night += 2.0f;
    if (trainX_night > 500) {
        trainX_night= -500;
    }
    glutPostRedisplay();
    glutTimerFunc(10, update3_night_shafin, 0);
}
void river_night_shafin()
{
    glColor3f(0.0f, 0.3f, 0.5f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 110.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(500.0f, 0.0f);
    glVertex2f(500.0f, 110.0f);
    glEnd();

}

void boat2_night_shafin()
{

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 15.0f);
    glVertex2f(130.0f, 15.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(100.0f, 30.0f);
    glEnd();
    //left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(100.0f, 15.0f);
    glVertex2f(100.0f, 30.0f);
    glVertex2f(80.0f, 40.0f);
    glEnd();
    //right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f, 15.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(150.0f, 40.0f);
    glEnd();
    //upper
    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 30.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(130.0f, 55.0f);
    glVertex2f(100.0f, 55.0f);
    glEnd();



    glBegin(GL_LINES);
    glLineWidth(3.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(115.0f, 55.0f);
    glVertex2f(115.0f, 120.0f);
    glEnd();
    //pal
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f, 65.0f);
    glVertex2f(113.0f, 110.0f);
    glVertex2f(100.0f, 110.0f);
    glVertex2f(100.0f, 65.0f);
    glEnd();
    //pal2
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f + 17.0f, 65.0f);
    glVertex2f(113.0f + 17.0f, 110.0f);
    glVertex2f(100.0f + 17.0f, 110.0f);
    glVertex2f(100.0f + 17.0f, 65.0f);
    glEnd();


    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(130.0f, 110.0f);
    glVertex2f(150.0f, 40.0f);

    glVertex2f(113.0f, 110.0f);
    glVertex2f(150.0f, 40.0f);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(95.0f, 110.0f);
    glVertex2f(113.0f + 20.0f, 110.0f);
    glEnd();
}
void update1_shafin(int value)
{

    boat2_initial += 2.0f;
    if (boat2_initial > 500.0f) {
        boat2_initial = -200.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(26, update1_shafin, 0);
}
float planeX = 500.0f;
int g=30;

void Plane() {
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(planeX, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(320.0f, 400.0f + g);
    glVertex2f(380.0f, 400.0f + g);
    glVertex2f(380.0f, 420.0f + g);
    glVertex2f(320.0f, 420.0f + g);
    glEnd();
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);

    float startX = 325.0f;
    float windowSize = 5.0f;
    float gap = 3.0f;

    for (int i = 0; i <6; i++) {
        float x = startX + i * (windowSize + gap);
        float y = 410.0f + g;

        glVertex2f(x, y);
        glVertex2f(x + windowSize, y);
        glVertex2f(x + windowSize, y + 8);
        glVertex2f(x, y + 8);
    }

    glEnd();

    glColor3f(0.1f, 0.2f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(380.0f, 420.0f + g);
    glVertex2f(380.0f, 440.0f + g);
    glVertex2f(370.0f, 440.0f + g);
    glVertex2f(350.0f, 420.0f + g);


    glVertex2f(340.0f, 407.0f + g);
    glVertex2f(355.0f, 407.0f + g);
    glVertex2f(375.0f, 380.0f + g);
    glVertex2f(365.0f, 380.0f + g);
    glEnd();

    // Blue last part
    glBegin(GL_TRIANGLES);
    glVertex2f(320.0f, 400.0f + g);
    glVertex2f(320.0f, 420.0f + g);
    glVertex2f(305.0f, 400.0f + g);
    glEnd();
    glPopMatrix();

    glFlush();
}

float planeSpeed = 7.0f;
bool planePaused = false;

void Timer(int value) {
    if (!planePaused) {
        planeX -= planeSpeed;
        if (planeX < -500.0f) {
            planeX = 500.0f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(40, Timer, 0);
}

void mousePlane(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) {
            planeSpeed -= 0.5f;
            if (planeSpeed < 0.5f)
                planeSpeed = 0.5f;
        }
        else if (button == GLUT_RIGHT_BUTTON) {
            planeSpeed += 0.5f;
            if (planeSpeed > 10.0f)
                planeSpeed = 10.0f;
        }
        else if (button == GLUT_MIDDLE_BUTTON) {
            planePaused = !planePaused;
        }
    }
}

void flower_night()
{
    glColor3f(0.0f, 0.3f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(20.0f, 115.0f);
    glVertex2f(25.0f, 115.0f);
    glVertex2f(10.0f, 140.0f);

    glVertex2f(20.0f, 115.0f);
    glVertex2f(25.0f, 115.0f);
    glVertex2f(40.0f, 140.0f);

    glVertex2f(20.0f, 115.0f);
    glVertex2f(25.0f, 115.0f);
    glVertex2f(23.0f, 140.0f);
    glEnd();
    glColor3f(0.7f, 0.0f, 0.0f);
    drawCircle(4,23,144);
    drawCircle(4,26,142);
    drawCircle(4,20,142);
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(3,23,140);

    glColor3f(0.0f, 0.3f, 0.0f);
    int f= 60;
    glBegin(GL_TRIANGLES);
    glVertex2f(20.0f+f, 115.0f);
    glVertex2f(25.0f+f, 115.0f);
    glVertex2f(10.0f+f, 140.0f);

    glVertex2f(20.0f+f, 115.0f);
    glVertex2f(25.0f+f, 115.0f);
    glVertex2f(40.0f+f, 140.0f);

    glVertex2f(20.0f+f, 115.0f);
    glVertex2f(25.0f+f, 115.0f);
    glVertex2f(23.0f+f, 140.0f);
    glEnd();
    glColor3f(0.7f, 1.0f, 0.0f);
    drawCircle(4,23+f,144);
    drawCircle(4,26+f,142);
    drawCircle(4,20+f,142);
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(3,23+f,140);

   glColor3f(0.0f, 0.3f, 0.0f);
    int f1= 100;
    glBegin(GL_TRIANGLES);
    glVertex2f(20.0f+f1, 125.0f);
    glVertex2f(25.0f+f1, 125.0f);
    glVertex2f(10.0f+f1, 150.0f);
    glVertex2f(20.0f+f1, 125.0f);
    glVertex2f(25.0f+f1, 125.0f);
    glVertex2f(40.0f+f1, 150.0f);

    glVertex2f(20.0f+f1, 125.0f);
    glVertex2f(25.0f+f1, 125.0f);
    glVertex2f(23.0f+f1, 150.0f);
    glEnd();

}

void display3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    hill_night();
    sun_night();
    tree_left_side_night();
    tree_right_side_night();
    trainline();
    Train_night();
    river_night_shafin();
    boat2_night_shafin();
    flower_night();
    Plane();
    glFlush();
    glutSwapBuffers();

}
void hill_shafin()
{
    //sky
    glColor3f(0.3f, 0.6f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 230.0f);
    glVertex2f(500.0f, 230.0f);
    glVertex2f(500.0f, 500.0f);
    glVertex2f(0.0f, 500.0f);
    glEnd();

    glColor3f(0.4f, 0.7f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 110.0f);
    glVertex2f(500.0f, 110.0f);
    glVertex2f(500.0f, 230.0f);
    glVertex2f(0.0f, 230.0f);
    glEnd();

    //hill1
    glColor3f(0.0f, 0.5f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-30.0f, 230.0f);
    glVertex2f(200.0f, 230.0f);
    glVertex2f(80.0f, 400.0f);
    glEnd();

    drawCircle(40,105,370);



    //hill 2

    glColor3f(0.0f, 0.4f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f, 230.0f);
    glVertex2f(250.0f, 230.0f);
    glVertex2f(145.0f, 400.0f);
    glEnd();


      glColor3f(0.0f, 0.5f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(200.0f, 230.0f);
    glVertex2f(300.0f, 230.0f);
    glVertex2f(250.0f, 320.0f);
    glEnd();

    drawCircle(20,300,250);


    //hill 3

    glColor3f(0.0f, 0.4f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f, 230.0f);
    glVertex2f(530.0f, 230.0f);
    glVertex2f(495.0f, 351.0f);
    glEnd();
    drawCircle(30,495,320);

    //hill4
    glColor3f(0.1f, 0.3f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(280.0f, 230.0f);
    glVertex2f(450.0f, 230.0f);
    glVertex2f(350.0f, 340.0f);
    glEnd();


}
void sun_shafin()
{
    glPushMatrix();
    glTranslatef(450, 450, 0);
    glColor3f(1.0, 0.9, 0.0);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 180;
        float r = 20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}
float cloudX_shafin = 100;
float cloudY_shafin= 450;
void cloud1_shafin() {
    glColor3f(1.0, 1.0, 1.0);


    drawCircle(30, cloudX_shafin, cloudY_shafin);
    drawCircle(25, cloudX_shafin - 40, cloudY_shafin + 10);
    drawCircle(25, cloudX_shafin + 40, cloudY_shafin + 10);
    drawCircle(20, cloudX_shafin - 20, cloudY_shafin - 20);


}

void updateCloudPosition_shafin(int value) {

    cloudX_shafin += 2.0;


    if (cloudX_shafin > 500 + 100) {
        cloudX_shafin = 0 - 100;
    }
    glutPostRedisplay();

    glutTimerFunc(30, updateCloudPosition_shafin, 0);
}

float cloudZ = 100;
float cloudP = 450;





void cloud2_shafin() {
    glColor3f(0.7, 0.7, 0.8);


    drawCircle(17, cloudZ, cloudP);

    drawCircle(17, cloudZ - 20, cloudP);

    drawCircle(17, cloudZ + 20, cloudP);
    drawCircle(20, cloudZ, cloudP + 25);
}


void updateCloud2Position_shafin(int value) {

    cloudZ += 3.0;


    if (cloudZ > 500 + 100) {
        cloudZ = 0 - 100;
    }
    glutPostRedisplay();

    glutTimerFunc(25, updateCloud2Position_shafin, 0);
}
void tree_left_side()
{


    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f, 220.0f);
    glVertex2f(82.0f, 220.0f);
    glVertex2f(82.0f, 300.0f);
    glVertex2f(75.0f, 300.0f);

    glEnd();


    glColor3f(0.3f, 0.5f, 0.0f);
    drawCircle(20,70,310);
    drawCircle(20,95,310);
    glColor3f(0.3f, 0.6f, 0.1f);
    drawCircle(20,80,355);

    drawCircle(20,85,330);
    drawCircle(20,75,330);

    int y = 60;

    glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(75.0f - y, 220.0f);
    glVertex2f(82.0f - y, 220.0f);
    glVertex2f(82.0f - y, 300.0f);
    glVertex2f(75.0f - y, 300.0f);

    glEnd();


    glColor3f(0.3f, 0.5f, 0.0f);
    drawCircle(20,70- y,310);
    drawCircle(20,95- y,310);
     glColor3f(0.2f, 0.7f, 0.2f);
    drawCircle(20,80- y,355);
    drawCircle(20,85- y,330);
    drawCircle(20,75- y,330);

}

void tree_right_side()
{
     glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(378.0f , 220.0f);
    glVertex2f(384.0f, 220.0f);
    glVertex2f(384.0f , 310.0f);
    glVertex2f(378.0f , 310.0f);

    glEnd();
    glColor3f(0.2f, 0.7f, 0.2f);
    drawCircle(20,395,350);
    drawCircle(20,377,350);

    drawCircle(20,370,320);
    drawCircle(20,395,320);
    drawCircle(20,385,355);
    drawCircle(20,385,360);


    int y = 100;

     glColor3f(0.6f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(378.0f - y, 220.0f);
    glVertex2f(384.0f - y, 220.0f);
    glVertex2f(384.0f - y, 310.0f);
    glVertex2f(378.0f - y, 310.0f);

    glEnd();
    glColor3f(0.2f, 0.7f, 0.1f);
    drawCircle(20,395 - y,350);
    drawCircle(20,377 - y,350);
    drawCircle(20,370 - y,320);
    drawCircle(20,395 - y,320);
    drawCircle(20,385 - y,355);
    drawCircle(20,385 - y,370);
}
float trainX = 0.0f;
void Train() {

    int y222 = 60;
    glPushMatrix();
    glTranslatef(trainX, 0, 0);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(430, 250 - y222);
    glVertex2f(430, 275 - y222);
    glVertex2f(435, 275 - y222);
    glVertex2f(435, 250 - y222);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(430, 240 - y222);
    glVertex2f(430, 290 - y222);
    glVertex2f(400, 290 - y222);
    glVertex2f(400, 320 - y222);
    glVertex2f(370, 320 - y222);
    glVertex2f(370, 240 - y222);
    glEnd();
    //WINdow 1st
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(390, 270 - y222);
    glVertex2f(390, 310 - y222);
    glVertex2f(375, 310 - y222);
    glVertex2f(375, 270 - y222);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(390, 270 - y222);
    glVertex2f(405, 270 - y222);
    glVertex2f(390, 310 - y222);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(370, 260 - y222);
    glVertex2f(370, 270 - y222);
    glVertex2f(350, 270 - y222);
    glVertex2f(350, 260 - y222);
    glEnd();
    //1st comp
    glBegin(GL_QUADS);
    glColor3f(10.0f, 0.0f, 0.0f);
    glVertex2f(350, 240 - y222);
    glVertex2f(350, 320 - y222);
    glVertex2f(290, 320 - y222);
    glVertex2f(290, 240 - y222);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(315, 270 - y222);
    glVertex2f(315, 310 - y222);
    glVertex2f(295, 310 - y222);
    glVertex2f(295, 270 - y222);

    glVertex2f(340, 270 - y222);
    glVertex2f(340, 310 - y222);
    glVertex2f(320, 310 - y222);
    glVertex2f(320, 270 - y222);


    glEnd();




    //coonecton
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(290, 260 - y222);
    glVertex2f(290, 270 - y222);
    glVertex2f(270, 270 - y222);
    glVertex2f(270, 260 - y222);
    glEnd();
    //2nd compartment
    glBegin(GL_QUADS);
    glColor3f(10.0f, 0.0f, 0.0f);
    glVertex2f(270, 240 - y222);
    glVertex2f(270, 320 - y222);
    glVertex2f(200, 320 - y222);
    glVertex2f(200, 240 - y222);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(230, 270 - y222);
    glVertex2f(230, 310 - y222);
    glVertex2f(210, 310 - y222);
    glVertex2f(210, 270 - y222);

    glVertex2f(260, 270 - y222);
    glVertex2f(260, 310 - y222);
    glVertex2f(240, 310 - y222);
    glVertex2f(240, 270 - y222);



    glEnd();
//third compart

    glBegin(GL_QUADS);
    glColor3f(10.0f, 0.0f, 0.0f);
    glVertex2f(180, 240 - y222);
    glVertex2f(180, 320 - y222);
    glVertex2f(125, 320 - y222);
    glVertex2f(125, 240 - y222);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(150, 270 - y222);
    glVertex2f(150, 310 - y222);
    glVertex2f(130, 310 - y222);
    glVertex2f(130, 270 - y222);


    glVertex2f(175, 270 - y222);
    glVertex2f(175, 310 - y222);
    glVertex2f(155, 310 - y222);
    glVertex2f(155, 270 - y222);



    glEnd();

    //weels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle1(140, 240 - y222, 10, 50);
    drawCircle1(165, 240 - y222, 10, 50);
    drawCircle1(215, 240 - y222, 10, 50);
    drawCircle1(245, 240 - y222, 10, 50);
    drawCircle1(335, 240 - y222, 10, 50);
    drawCircle1(305, 240 - y222, 10, 50);
    drawCircle1(415, 240 - y222, 10, 50);
    drawCircle1(385, 240 - y222, 10, 50);
    glPopMatrix();
    glFlush();
}

float savedSpeed1_train = 5.0f;
bool paused1_train = false;

void update3_shafin(int value) {
    if (!paused1_train) {
        trainX += savedSpeed1_train;
        if (trainX > 500.0f) {
            trainX = -500.0f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(40, update3_shafin, 0);
}

void mouse3(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) {
            savedSpeed1_train -= 0.5f;
            if (savedSpeed1_train < 0.5f)
                savedSpeed1_train = 0.5f;
        }
        else if (button == GLUT_RIGHT_BUTTON) {
            savedSpeed1_train += 0.5f;
            if (savedSpeed1_train > 10.0f)
                savedSpeed1_train = 10.0f;
        }
        else if (button == GLUT_MIDDLE_BUTTON) {
            paused1_train = !paused1_train;
        }
    }
}





void river_shafin()
{
    glColor3f(0.3f, 0.6f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 110.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(500.0f, 0.0f);
    glVertex2f(500.0f, 110.0f);
    glEnd();

}
void flower()
{
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(20.0f, 115.0f);
    glVertex2f(25.0f, 115.0f);
    glVertex2f(10.0f, 140.0f);

    glVertex2f(20.0f, 115.0f);
    glVertex2f(25.0f, 115.0f);
    glVertex2f(40.0f, 140.0f);

    glVertex2f(20.0f, 115.0f);
    glVertex2f(25.0f, 115.0f);
    glVertex2f(23.0f, 140.0f);
    glEnd();
    glColor3f(1.0f, 0.0f, 0.0f);
    drawCircle(4,23,144);
    drawCircle(4,26,142);
    drawCircle(4,20,142);
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(3,23,140);

    glColor3f(0.0f, 1.0f, 0.0f);
    int f= 60;
    glBegin(GL_TRIANGLES);
    glVertex2f(20.0f+f, 115.0f);
    glVertex2f(25.0f+f, 115.0f);
    glVertex2f(10.0f+f, 140.0f);

    glVertex2f(20.0f+f, 115.0f);
    glVertex2f(25.0f+f, 115.0f);
    glVertex2f(40.0f+f, 140.0f);

    glVertex2f(20.0f+f, 115.0f);
    glVertex2f(25.0f+f, 115.0f);
    glVertex2f(23.0f+f, 140.0f);
    glEnd();
    glColor3f(1.0f, 1.0f, 0.0f);
    drawCircle(4,23+f,144);
    drawCircle(4,26+f,142);
    drawCircle(4,20+f,142);
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(3,23+f,140);

    glColor3f(0.0f, 1.0f, 0.0f);
    int f1= 100;
    glBegin(GL_TRIANGLES);
    glVertex2f(20.0f+f1, 125.0f);
    glVertex2f(25.0f+f1, 125.0f);
    glVertex2f(10.0f+f1, 150.0f);
    glVertex2f(20.0f+f1, 125.0f);
    glVertex2f(25.0f+f1, 125.0f);
    glVertex2f(40.0f+f1, 150.0f);

    glVertex2f(20.0f+f1, 125.0f);
    glVertex2f(25.0f+f1, 125.0f);
    glVertex2f(23.0f+f1, 150.0f);
    glEnd();

}

float boat1_initial_shafin = 500.0f;
void boat1_shafin()
{
    int boaty=20;
    glPushMatrix();
    glTranslatef(boat1_initial_shafin, 0.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 15.0f+boaty);
    glVertex2f(130.0f, 15.0f+boaty);
    glVertex2f(130.0f, 30.0f+boaty);
    glVertex2f(100.0f, 30.0f+boaty);
    glEnd();
    //left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(100.0f, 15.0f+boaty);
    glVertex2f(100.0f, 30.0f+boaty);
    glVertex2f(80.0f, 40.0f+boaty);
    glEnd();
    //right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f, 15.0f+boaty);
    glVertex2f(130.0f, 30.0f+boaty);
    glVertex2f(150.0f, 40.0f+boaty);
    glEnd();
    //upper
    glColor3f(0.7f, 0.4f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(100.0f, 30.0f+boaty);
    glVertex2f(130.0f, 30.0f+boaty);
    glVertex2f(130.0f, 55.0f+boaty);
    glVertex2f(100.0f, 55.0f+boaty);
    glEnd();



    glBegin(GL_LINES);
    glLineWidth(3.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(115.0f, 55.0f+boaty);
    glVertex2f(115.0f, 120.0f+boaty);
    glEnd();
    //pal
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f, 65.0f+boaty);
    glVertex2f(113.0f, 110.0f+boaty);
    glVertex2f(100.0f, 110.0f+boaty);
    glVertex2f(100.0f, 65.0f+boaty);
    glEnd();
    //pal2
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(113.0f + 17.0f, 65.0f+boaty);
    glVertex2f(113.0f + 17.0f, 110.0f+boaty);
    glVertex2f(100.0f + 17.0f, 110.0f+boaty);
    glVertex2f(100.0f + 17.0f, 65.0f+boaty);
    glEnd();


    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(130.0f, 110.0f+boaty);
    glVertex2f(150.0f, 40.0f+boaty);

    glVertex2f(113.0f, 110.0f+boaty);
    glVertex2f(150.0f, 40.0f+boaty);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(95.0f, 110.0f+boaty);
    glVertex2f(113.0f + 20.0f, 110.0f+boaty);
    glEnd();

    glPopMatrix();





}




void update_boat1_shafin(int value) {

   boat1_initial_shafin -= 5.5f;



    if (boat1_initial_shafin < 0.0f-200)
    {
        boat1_initial_shafin = 500.0f;

    }

    glutPostRedisplay();
    glutTimerFunc(40,update_boat1_shafin, 0);
}

void display4()
{
    glClear(GL_COLOR_BUFFER_BIT);

    hill_shafin();

    sun_shafin();
    cloud1_shafin();
    cloud2_shafin();
    tree_left_side();
    tree_right_side();
    trainline();
   Train();
    river_shafin();
    flower();
   glPushMatrix();
   glTranslatef(boat1_initial_shafin, 0.0f, 0.0f);

    boat1();
glPopMatrix();
    //boat2();


    glFlush();
    glutSwapBuffers();
}
//ARPITA CODE
float carX = 0.0f;
void sky11(){
    glBegin(GL_QUADS);
    glColor3f(0.431f, 0.431f, 0.431f);
    glVertex2f(0, 190);
    glVertex2f(500, 190);
    glVertex2f(500, 520);
    glVertex2f(0, 520);
    glEnd();
    glFlush();
}

void Field10 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.749f,0.718f,0.718f);
    glVertex2f(0, 190);
    glVertex2f(500, 190);
    glVertex2f(500, 220);
    glVertex2f(0, 220);
    glEnd();
    glFlush();
}
void Road10 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.239f, 0.239f, 0.239f);
    glVertex2f(0, 110);
    glVertex2f(500, 110);
    glVertex2f(500, 190);
    glVertex2f(0, 190);
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(0, 150);
    glVertex2f(40, 150);
    glVertex2f(40, 160);
    glVertex2f(0, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(60, 150);
    glVertex2f(100, 150);
    glVertex2f(100, 160);
    glVertex2f(60, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(120, 150);
    glVertex2f(160, 150);
    glVertex2f(160, 160);
    glVertex2f(120, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(250, 150);
    glVertex2f(290, 150);
    glVertex2f(290, 160);
    glVertex2f(250, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(350, 150);
    glVertex2f(310, 150);
    glVertex2f(310, 160);
    glVertex2f(350, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(370, 150);
    glVertex2f(410, 150);
    glVertex2f(410, 160);
    glVertex2f(370, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(430, 150);
    glVertex2f(470, 150);
    glVertex2f(470, 160);
    glVertex2f(430, 160);
    glEnd();
    glFlush();
}
void Crossing10(){
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(190, 110);
    glVertex2f(230, 110);
    glVertex2f(230, 130);
    glVertex2f(190, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(190, 140);
    glVertex2f(230, 140);
    glVertex2f(230, 160);
    glVertex2f(190, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(190, 170);
    glVertex2f(230, 170);
    glVertex2f(230, 190);
    glVertex2f(190, 190);
    glEnd();
    glFlush();
}
void drawCircle(float cx, float cy, float radius, int num_segments) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cos(theta);
        float y = radius * sin(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void drawCar10() {
    // Car Body
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(150, 150);
    glVertex2f(300, 150);
    glVertex2f(300, 180);
    glVertex2f(150, 180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(150, 160);
    glVertex2f(160, 160);
    glVertex2f(160, 170);
    glVertex2f(150, 170);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(290, 160);
    glVertex2f(300, 160);
    glVertex2f(300, 170);
    glVertex2f(290, 170);
    glEnd();

    // Car Top
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(160, 180);
    glVertex2f(200, 210);
    glVertex2f(260, 210);
    glVertex2f(290, 180);
    glEnd();

    // Left Window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(180, 190);
    glVertex2f(230, 190);
    glVertex2f(230, 205);
    glVertex2f(210, 205);
    glEnd();

    // Right Window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(240, 190);
    glVertex2f(275, 190);
    glVertex2f(255, 205);
    glVertex2f(240, 205);
    glEnd();
    //ice
    glColor3f(10.0f, 10.0f, 10.0f);
    drawCircle(240.0f, 215.0f,10.0f, 50);
    drawCircle(250.0f, 215.0f,10.0f, 50);
    drawCircle(230.0f, 215.0f,15.0f, 50);
    drawCircle(210.0f, 215.0f,10.0f, 50);
    drawCircle(150.0f, 180.0f,5.0f, 50);
    drawCircle(160.0f, 180.0f,5.0f, 50);
    drawCircle(165.0f, 180.0f,5.0f, 50);
    drawCircle(300.0f, 180.0f,5.0f, 50);
    drawCircle(290.0f, 180.0f,5.0f, 50);
    drawCircle(295.0f, 180.0f,5.0f, 50);
    // Wheels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(170.0f, 145.0f,15.0f, 50);
    drawCircle(270.0f, 145.0f, 15.0f, 50);
}
void RoadSide10 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.843f, 0.843f, 0.843f);
    glVertex2f(0, 0);
    glVertex2f(700, 0);
    glVertex2f(700, 110);
    glVertex2f(0, 110);
    glEnd();
    glFlush();
}
void trainline10(){
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0, 250);
    glVertex2f(700, 250);
    glVertex2f(700, 260);
    glVertex2f(0, 260);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0, 230);
    glVertex2f(700, 230);
    glVertex2f(700, 220);
    glVertex2f(0, 220);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(250, 260);
    glVertex2f(240, 260);
    glVertex2f(240, 220);
    glVertex2f(250, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(220, 260);
    glVertex2f(210, 260);
    glVertex2f(210, 220);
    glVertex2f(220, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(180, 260);
    glVertex2f(190, 260);
    glVertex2f(190, 220);
    glVertex2f(180, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(80, 260);
    glVertex2f(90, 260);
    glVertex2f(90, 220);
    glVertex2f(80, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(280, 260);
    glVertex2f(290, 260);
    glVertex2f(290, 220);
    glVertex2f(280, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(320, 260);
    glVertex2f(310, 260);
    glVertex2f(310, 220);
    glVertex2f(320, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(420, 260);
    glVertex2f(430, 260);
    glVertex2f(430, 220);
    glVertex2f(420, 220);
    glEnd();
    glFlush();
}
void Train10(){
    glPushMatrix();
    glTranslatef(trainX, 0, 0);
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(430, 240);
    glVertex2f(430, 290);
    glVertex2f(400, 290);
    glVertex2f(400, 320);
    glVertex2f(370, 320);
    glVertex2f(370, 240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(430, 260);
    glVertex2f(430, 280);
    glVertex2f(420, 280);
    glVertex2f(420, 260);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(390, 270);
    glVertex2f(390, 310);
    glVertex2f(375, 310);
    glVertex2f(375, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(370, 260);
    glVertex2f(370, 270);
    glVertex2f(350, 270);
    glVertex2f(350, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(350, 240);
    glVertex2f(350, 320);
    glVertex2f(290, 320);
    glVertex2f(290, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(340, 270);
    glVertex2f(340, 310);
    glVertex2f(300, 310);
    glVertex2f(300, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(290, 260);
    glVertex2f(290, 270);
    glVertex2f(270, 270);
    glVertex2f(270, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(270, 240);
    glVertex2f(270, 320);
    glVertex2f(200, 320);
    glVertex2f(200, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(260, 270);
    glVertex2f(260, 310);
    glVertex2f(210, 310);
    glVertex2f(210, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(200, 260);
    glVertex2f(200, 270);
    glVertex2f(180, 270);
    glVertex2f(180, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(180, 240);
    glVertex2f(180, 320);
    glVertex2f(125, 320);
    glVertex2f(125, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(170, 270);
    glVertex2f(170, 310);
    glVertex2f(140, 310);
    glVertex2f(140, 270);
    glEnd();
    //weels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(140, 240, 10, 50);
    drawCircle(165, 240, 10, 50);
    drawCircle(215, 240, 10, 50);
    drawCircle(245, 240, 10, 50);
    drawCircle(335, 240, 10, 50);
    drawCircle(305, 240, 10, 50);
    drawCircle(415, 240, 10, 50);
    drawCircle(385, 240, 10, 50);
    //iec
    glColor3f(10.0f, 10.0f, 10.0f);
    drawCircle(140, 319, 10, 50);
    drawCircle(130, 319, 10, 50);
    drawCircle(150, 319, 10, 50);
    drawCircle(160, 319, 10, 50);
    drawCircle(170, 319, 10, 50);
    drawCircle(240, 319, 10, 50);
    drawCircle(230, 319, 10, 50);
    drawCircle(250, 319, 10, 50);
    drawCircle(260, 319, 10, 50);
    drawCircle(220, 319, 10, 50);
    drawCircle(210, 319, 10, 50);
    drawCircle(340, 319, 10, 50);
    drawCircle(330, 319, 10, 50);
    drawCircle(300, 319, 10, 50);
    drawCircle(305, 319, 10, 50);
    drawCircle(320, 319, 10, 50);
    drawCircle(310, 319, 10, 50);
    drawCircle(420, 300, 9, 50);
    drawCircle(415, 300, 9, 50);
    drawCircle(400, 319, 10, 50);
    drawCircle(390, 319, 10, 50);
    drawCircle(380, 319, 10, 50);
    glPopMatrix();
    glFlush();
    }
 void House110(){
    glBegin(GL_QUADS);
    glColor3f(0.188f, 0.188f, 0.49f);
    glVertex2f(0,210);
    glVertex2f(70, 210);
    glVertex2f(70,370);
    glVertex2f(0, 370);
    glEnd();
      //  windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;

    float startX = 7, startY = 250;

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 2; ++col) {

            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }
    glFlush();
}
void House220() {
    glBegin(GL_QUADS);
    glColor3f(0.012f, 0.031f, 0.039f);
    glVertex2f(90,220);
    glVertex2f(170, 220);
    glVertex2f(170,410);
    glVertex2f(90, 410);
    glEnd();
    // Windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 20, windowHeight = 20;
    float spaceX = 7, spaceY = 20;
    float startX = 100, startY = 250;

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }

    // Door
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(125, 220);
    glVertex2f(140, 220);
    glVertex2f(140, 270);
    glVertex2f(125, 270);
    glEnd();
    glFlush();
}

void Lamppost110() {
    // Lamppost base
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(100,212);
    glVertex2f(105, 212);
    glVertex2f(105, 280);
    glVertex2f(100, 280);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(98,280);
    glVertex2f(108,280);
    glVertex2f(110,310);
    glVertex2f(105,315);
    glVertex2f(100,315);
    glVertex2f(95,310);
    glEnd();
    glFlush();
}
void House330() {
    glBegin(GL_QUADS);
    glColor3f(0.024f, 0.043f, 0.051f);
    glVertex2f(500,210);
    glVertex2f(430, 210);
    glVertex2f(430,370);
    glVertex2f(500, 370);
    glEnd();
    // Windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;
    float startX = 437, startY = 260;

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }

    glFlush();
}
void House440() {
    glBegin(GL_QUADS);
    glColor3f(0.078f, 0.141f, 0.161f);
    glVertex2f(400,220);
    glVertex2f(330, 220);
    glVertex2f(330,400);
    glVertex2f(400, 400);
    glEnd();
    // Windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;
    float startX = 337, startY = 250;

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }
    // Door
    glColor3f(0.5f, 0.35f, 0.05f); // Brown door
    glBegin(GL_QUADS);
    glVertex2f(355, 220);
    glVertex2f(370, 220);
    glVertex2f(370, 270);
    glVertex2f(355, 270);
    glEnd();
    glFlush();
}
void Lamppost220(){
glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(400,212);
    glVertex2f(405, 212);
    glVertex2f(405, 280);
    glVertex2f(400, 280);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(398,280);
    glVertex2f(408,280);
    glVertex2f(410,310);
    glVertex2f(405,315);
    glVertex2f(400,315);
    glVertex2f(395,310);
    glEnd();
    glFlush();
    }
void tree110 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.169f, 0.153f, 0.09f);
    glVertex2f(0, 50);
    glVertex2f(15, 50);
    glVertex2f(15, 280);
    glVertex2f(0, 280);
    glEnd();

    glColor3f(0.039f, 0.212f, 0.063f);
    drawCircle(0, 220, 30, 50);
    drawCircle(30, 230, 17, 50);
    drawCircle(35, 250, 17, 50);
    drawCircle(30, 270, 20, 50);
    drawCircle(20, 280, 20, 50);
    drawCircle(10, 300, 19, 50);
    drawCircle(0, 254, 20, 50);
    glColor3f(10.0, 10.0f, 10.0f);
    drawCircle(0, 300, 20, 50);
    drawCircle(20, 305, 15, 50);
    drawCircle(40, 290, 15, 50);
    drawCircle(40, 280, 10, 50);
    glPopMatrix();
    glFlush();
}


void Signa1l0(){
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(385, 90);
    glVertex2f(380, 90);
    glVertex2f(380, 220);
    glVertex2f(385, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(390, 260);
    glVertex2f(375, 260);
    glVertex2f(375, 220);
    glVertex2f(390, 220);
    glEnd();
    glColor3f(1.0f, 0.0f, 0.0f);
    drawCircle(382.0f, 250.0f,5.0f, 50);
    glEnd();
    glColor3f(0.0f, 1.0f, 0.0f);
    drawCircle(382.0f, 240.0f,5.0f, 50);
    glEnd();
    glColor3f(10.0f, 1.0f, 0.0f);
    drawCircle(382.0f, 230.0f,5.0f, 50);
    glEnd();
    glFlush();
}
void Man110(){
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(170, 70);
    glVertex2f(200, 70);
    glVertex2f(200, 130);
    glVertex2f(170, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(180, 140);
    glVertex2f(190, 140);
    glVertex2f(190, 130);
    glVertex2f(180, 130);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(170, 100);
    glVertex2f(160, 100);
    glVertex2f(170, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(170, 100);
    glVertex2f(160, 100);
    glVertex2f(160, 60);
    glVertex2f(170, 60);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(200, 100);
    glVertex2f(210, 100);
    glVertex2f(200, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(200, 100);
    glVertex2f(210, 100);
    glVertex2f(210, 60);
    glVertex2f(200, 60);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(170, 70);
    glVertex2f(185, 70);
    glVertex2f(180, 10);
    glVertex2f(170, 10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(200, 70);
    glVertex2f(185, 70);
    glVertex2f(190, 10);
    glVertex2f(200, 10);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(185.0f, 153.0f,15.0f, 50);
    glColor3f(0.0f, 0.0f, 10.0f);
    drawCircle(185.0f, 160.0f,12.0f, 50);

    glFlush();
}
void Signal(){
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(385, 90);
    glVertex2f(380, 90);
    glVertex2f(380, 220);
    glVertex2f(385, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(390, 260);
    glVertex2f(375, 260);
    glVertex2f(375, 220);
    glVertex2f(390, 220);
    glEnd();
    glColor3f(1.0f, 0.0f, 0.0f);
    drawCircle(382.0f, 250.0f,5.0f, 50);

    glColor3f(0.0f, 1.0f, 0.0f);
    drawCircle(382.0f, 240.0f,5.0f, 50);

    glColor3f(10.0f, 1.0f, 0.0f);
    drawCircle(382.0f, 230.0f,5.0f, 50);

    glFlush();
}
void Man220(){
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(240, 70);
    glVertex2f(270, 70);
    glVertex2f(270, 130);
    glVertex2f(240, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(250, 140);
    glVertex2f(260, 140);
    glVertex2f(260, 130);
    glVertex2f(250, 130);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(240, 100);
    glVertex2f(230, 100);
    glVertex2f(240, 130);
    glEnd();
    glBegin(GL_QUADS);//hand
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(240, 100);
    glVertex2f(230, 100);
    glVertex2f(230, 60);
    glVertex2f(240, 60);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(270, 100);
    glVertex2f(280, 100);
    glVertex2f(270, 130);
    glEnd();
    glBegin(GL_QUADS);//hand
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(270, 100);
    glVertex2f(280, 100);
    glVertex2f(280, 60);
    glVertex2f(270, 60);
    glEnd();
    glBegin(GL_QUADS);//leg
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(240, 70);
    glVertex2f(255, 70);
    glVertex2f(250, 10);
    glVertex2f(240, 10);
    glEnd();
    glBegin(GL_QUADS);//leg
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(270, 70);
    glVertex2f(255, 70);
    glVertex2f(260, 10);
    glVertex2f(270, 10);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(255.0f, 153.0f,15.0f, 50);
    glColor3f(0.0f, 0.0f, 10.0f);
    drawCircle(255.0f, 160.0f,12.0f, 50);

    glFlush();
}
void tree220 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.169f, 0.153f, 0.09f);
    glVertex2f(485, 50);
    glVertex2f(500, 50);
    glVertex2f(500, 280);
    glVertex2f(485, 280);
    glEnd();

    glColor3f(0.039f, 0.212f, 0.063f);
    drawCircle(490, 220, 30, 50);
    drawCircle(470, 240, 20, 50);
    drawCircle(460, 250, 17, 50);
    drawCircle(490, 270, 20, 50);
    drawCircle(470, 280, 17, 50);
    drawCircle(490, 300, 17, 50);
    drawCircle(490, 240, 20, 50);
    glColor3f(10.0f, 10.0f, 10.0f);
    drawCircle(490, 310, 15, 50);
    drawCircle(480, 310, 15, 50);
    drawCircle(470, 300, 15, 50);
    drawCircle(460, 290, 15, 50);
    glPopMatrix();
    glFlush();
}
void tree330 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.169f, 0.153f, 0.09f);
    glVertex2f(260, 340);
    glVertex2f(275, 340);
    glVertex2f(275, 210);
    glVertex2f(260, 210);
    glEnd();
    glColor3f(0.039f, 0.212f, 0.063f);
    drawCircle(270, 320, 30, 50);
    drawCircle(250, 320, 20, 50);
    drawCircle(250, 300, 15, 50);
    drawCircle(265, 350, 20, 50);
    drawCircle(285, 350, 20, 50);
    drawCircle(285, 320, 20, 50);
    drawCircle(285, 300, 15, 50);
    glColor3f(10.0f, 10.0f, 10.0f);
    drawCircle(270, 365, 15, 50);
    drawCircle(280, 360, 15, 50);
    drawCircle(290, 360, 15, 50);
    drawCircle(255, 360, 15, 50);
    drawCircle(260, 365, 15, 50);
    glPopMatrix();
    glFlush();

}
void cloud110() {
    glColor3f(0.749f,0.718f,0.718f);
    drawCircle(17, cloudX, cloudY);

    drawCircle(17, cloudX - 20, cloudY);

    drawCircle(17, cloudX + 20, cloudY);
    drawCircle(20, cloudX, cloudY + 25);
}
void cloud220() {
    glColor3f(0.749f,0.718f,0.718f);
    drawCircle(17, cloudZ, cloudP);
    drawCircle(17, cloudZ - 20, cloudP);
    drawCircle(17, cloudZ + 20, cloudP);
    drawCircle(20, cloudZ, cloudP + 25);
}
float positionY = 450.0f;
float speedY = -1.0f;
void Snow() {
    glPushMatrix();
    glTranslatef(0.0f, positionY, 0.0f);

    glColor3f(1.0, 1.0, 1.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);

    glVertex2f(50, 450);
    glVertex2f(100, 400);
    glVertex2f(150, 350);
    glVertex2f(200, 300);
    glVertex2f(250, 250);
    glVertex2f(300, 200);
    glVertex2f(350, 150);
    glVertex2f(400, 100);
    glVertex2f(450, 50);
    glVertex2f(200, 450);
    glVertex2f(250, 400);
    glVertex2f(300, 350);
    glVertex2f(350, 300);
    glVertex2f(400, 250);
    glVertex2f(450, 200);
    glVertex2f(100, 100);
    glVertex2f(150, 50);
    glVertex2f(50, 350);
    glVertex2f(75, 325);
    glVertex2f(125, 275);
    glVertex2f(175, 225);
    glVertex2f(225, 175);
    glVertex2f(275, 125);
    glVertex2f(325, 75);
    glVertex2f(375, 50);
    glVertex2f(425, 25);
    glVertex2f(475, 75);
    glVertex2f(50, 50);
    glVertex2f(90, 90);
    glVertex2f(130, 130);
    glVertex2f(170, 170);
    glVertex2f(210, 210);
    glVertex2f(250, 250);
    glVertex2f(290, 290);
    glVertex2f(330, 330);
    glVertex2f(370, 370);
    glVertex2f(410, 410);
    glVertex2f(450, 450);

    glEnd();
    glPopMatrix();
    glFlush();
}

void update21(int value) {
    if (positionY < -50) {
        positionY = 450.0f;
    }
    positionY += speedY;

    glutPostRedisplay();
    glutTimerFunc(14, update21, 0);
}


void display10() {
    glClear(GL_COLOR_BUFFER_BIT);
    sky11();
   Field10();
     Road10();
    Crossing10();
    glPushMatrix();
    glTranslatef(carX, 0.0f, 0.0f);
    drawCar10();
    glPopMatrix();
   RoadSide10();
     trainline10();
    Train10();
    House110();
    House220();
     Lamppost110();
     House330();
     House440();
     Lamppost220();
    tree110();
    Man110();
   Man220();
    Signal();
   tree220();
    tree330();
    cloud110();
     cloud220();
    Snow();
    glutSwapBuffers();

}

float speed = 2.0f;
void Field1 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.369f, 0.51f, 0.412f);
    glVertex2f(0, 190);
    glVertex2f(500, 190);
    glVertex2f(500, 220);
    glVertex2f(0, 220);
    glEnd();
    glFlush();
}
void Road1 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.153f, 0.153f, 0.153f);
    glVertex2f(0, 110);
    glVertex2f(500, 110);
    glVertex2f(500, 190);
    glVertex2f(0, 190);
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(0, 150);
    glVertex2f(40, 150);
    glVertex2f(40, 160);
    glVertex2f(0, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(60, 150);
    glVertex2f(100, 150);
    glVertex2f(100, 160);
    glVertex2f(60, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(120, 150);
    glVertex2f(160, 150);
    glVertex2f(160, 160);
    glVertex2f(120, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(250, 150);
    glVertex2f(290, 150);
    glVertex2f(290, 160);
    glVertex2f(250, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(350, 150);
    glVertex2f(310, 150);
    glVertex2f(310, 160);
    glVertex2f(350, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(370, 150);
    glVertex2f(410, 150);
    glVertex2f(410, 160);
    glVertex2f(370, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(430, 150);
    glVertex2f(470, 150);
    glVertex2f(470, 160);
    glVertex2f(430, 160);
    glEnd();
    glFlush();
}
void drawCar1() {
    // Car Body
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(150, 150);
    glVertex2f(300, 150);
    glVertex2f(300, 180);
    glVertex2f(150, 180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(150, 160);
    glVertex2f(160, 160);
    glVertex2f(160, 170);
    glVertex2f(150, 170);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(290, 160);
    glVertex2f(300, 160);
    glVertex2f(300, 170);
    glVertex2f(290, 170);
    glEnd();

    // Car Top
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(160, 180);
    glVertex2f(200, 210);
    glVertex2f(260, 210);
    glVertex2f(290, 180);
    glEnd();

    // Left Window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(180, 190);
    glVertex2f(230, 190);
    glVertex2f(230, 205);
    glVertex2f(210, 205);
    glEnd();

    // Right Window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(240, 190);
    glVertex2f(275, 190);
    glVertex2f(255, 205);
    glVertex2f(240, 205);
    glEnd();

    // Wheels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(170.0f, 145.0f,15.0f, 50);
    drawCircle(270.0f, 145.0f, 15.0f, 50);
}


void update_carA(int value) {
    carX += speed;
    if (carX > 500.0f) {
        carX = -400.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(16, update_carA, 0);
}
void RoadSide1 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.369f, 0.51f, 0.412f);
    glVertex2f(0, 0);
    glVertex2f(700, 0);
    glVertex2f(700, 110);
    glVertex2f(0, 110);
    glEnd();
    glFlush();
}
void Train1(){
    glPushMatrix();
    glTranslatef(trainX, 0, 0);
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(430, 240);
    glVertex2f(430, 290);
    glVertex2f(400, 290);
    glVertex2f(400, 320);
    glVertex2f(370, 320);
    glVertex2f(370, 240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(430, 260);
    glVertex2f(430, 280);
    glVertex2f(420, 280);
    glVertex2f(420, 260);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(390, 270);
    glVertex2f(390, 310);
    glVertex2f(375, 310);
    glVertex2f(375, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(370, 260);
    glVertex2f(370, 270);
    glVertex2f(350, 270);
    glVertex2f(350, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(350, 240);
    glVertex2f(350, 320);
    glVertex2f(290, 320);
    glVertex2f(290, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(340, 270);
    glVertex2f(340, 310);
    glVertex2f(300, 310);
    glVertex2f(300, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(290, 260);
    glVertex2f(290, 270);
    glVertex2f(270, 270);
    glVertex2f(270, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(270, 240);
    glVertex2f(270, 320);
    glVertex2f(200, 320);
    glVertex2f(200, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(260, 270);
    glVertex2f(260, 310);
    glVertex2f(210, 310);
    glVertex2f(210, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(200, 260);
    glVertex2f(200, 270);
    glVertex2f(180, 270);
    glVertex2f(180, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(180, 240);
    glVertex2f(180, 320);
    glVertex2f(125, 320);
    glVertex2f(125, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(170, 270);
    glVertex2f(170, 310);
    glVertex2f(140, 310);
    glVertex2f(140, 270);
    glEnd();
    //weels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(140, 240, 10, 50);
    drawCircle(165, 240, 10, 50);
    drawCircle(215, 240, 10, 50);
    drawCircle(245, 240, 10, 50);
    drawCircle(335, 240, 10, 50);
    drawCircle(305, 240, 10, 50);
    drawCircle(415, 240, 10, 50);
    drawCircle(385, 240, 10, 50);
    glPopMatrix();
    glFlush();}

    void update22(int value) {
    trainX += 2.0f; // Move the train 2 units to the right
    if (trainX > 500) { // Reset train position after it moves off-screen
        trainX = -500;
    }
    glutPostRedisplay(); // Request to redraw the scene
    glutTimerFunc(10, update22, 0); // Call update every 16ms (~60 FPS)
}
void House11() {
    glBegin(GL_QUADS);
    glColor3f(0.165f, 0.059f, 0.302f);
    glVertex2f(0,210);
    glVertex2f(70, 210);
    glVertex2f(70,370);
    glVertex2f(0, 370);
    glEnd();
      //  windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;

    float startX = 7, startY = 250;

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 2; ++col) {

            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }
    glFlush();
}
void House22() {
    glBegin(GL_QUADS);
    glColor3f(0.227f, 0.404f, 0.478f);
    glVertex2f(90,220);
    glVertex2f(170, 220);
    glVertex2f(170,410);
    glVertex2f(90, 410);
    glEnd();
    // Windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 20, windowHeight = 20;
    float spaceX = 7, spaceY = 20;
    float startX = 100, startY = 250;

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }

    // Door
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(125, 220);
    glVertex2f(140, 220);
    glVertex2f(140, 270);
    glVertex2f(125, 270);
    glEnd();
    glFlush();
}
void House33() {
    glBegin(GL_QUADS);
    glColor3f(0.031f, 0.212f, 0.388f);
    glVertex2f(500,210);
    glVertex2f(430, 210);
    glVertex2f(430,380);
    glVertex2f(500, 380);
    glEnd();
    // Windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;
    float startX = 437, startY = 260;

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }

    glFlush();
}
void House44() {
    glBegin(GL_QUADS);
    glColor3f(0.221f, 0.092f, 0.076f);
    glVertex2f(400,220);
    glVertex2f(330, 220);
    glVertex2f(330,400);
    glVertex2f(400, 400);
    glEnd();
    // Windows
    glColor3f(1.0f, 1.0f, 0.0f);
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;
    float startX = 337, startY = 250;

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }}
void Man11(){
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(170, 70);
    glVertex2f(200, 70);
    glVertex2f(200, 130);
    glVertex2f(170, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(180, 140);
    glVertex2f(190, 140);
    glVertex2f(190, 130);
    glVertex2f(180, 130);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(170, 100);
    glVertex2f(160, 100);
    glVertex2f(170, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(170, 100);
    glVertex2f(160, 100);
    glVertex2f(160, 60);
    glVertex2f(170, 60);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(200, 100);
    glVertex2f(210, 100);
    glVertex2f(200, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(200, 100);
    glVertex2f(210, 100);
    glVertex2f(210, 60);
    glVertex2f(200, 60);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(170, 70);
    glVertex2f(185, 70);
    glVertex2f(180, 10);
    glVertex2f(170, 10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(200, 70);
    glVertex2f(185, 70);
    glVertex2f(190, 10);
    glVertex2f(200, 10);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(185.0f, 153.0f,15.0f, 50);

    glFlush();
}
void Man22(){
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.078f, 0.0f);
    glVertex2f(240, 70);
    glVertex2f(270, 70);
    glVertex2f(270, 130);
    glVertex2f(240, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(250, 140);
    glVertex2f(260, 140);
    glVertex2f(260, 130);
    glVertex2f(250, 130);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.078f, 0.0f);
    glVertex2f(240, 100);
    glVertex2f(230, 100);
    glVertex2f(240, 130);
    glEnd();
    glBegin(GL_QUADS);//hand
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(240, 100);
    glVertex2f(230, 100);
    glVertex2f(230, 60);
    glVertex2f(240, 60);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.078f, 0.0f);
    glVertex2f(270, 100);
    glVertex2f(280, 100);
    glVertex2f(270, 130);
    glEnd();
    glBegin(GL_QUADS);//hand
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(270, 100);
    glVertex2f(280, 100);
    glVertex2f(280, 60);
    glVertex2f(270, 60);
    glEnd();
    glBegin(GL_QUADS);//leg
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(240, 70);
    glVertex2f(255, 70);
    glVertex2f(250, 10);
    glVertex2f(240, 10);
    glEnd();
    glBegin(GL_QUADS);//leg
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(270, 70);
    glVertex2f(255, 70);
    glVertex2f(260, 10);
    glVertex2f(270, 10);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(255.0f, 153.0f,15.0f, 50);

    glFlush();
}
void tree11 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.169f, 0.153f, 0.09f);
    glVertex2f(0, 50);
    glVertex2f(15, 50);
    glVertex2f(15, 280);
    glVertex2f(0, 280);
    glEnd();

    glColor3f(0.039f, 0.212f, 0.063f);
    drawCircle(0, 220, 30, 50);
    drawCircle(30, 230, 17, 50);
    drawCircle(35, 250, 17, 50);
    drawCircle(30, 270, 20, 50);
    drawCircle(20, 280, 20, 50);
    drawCircle(10, 300, 19, 50);
    drawCircle(0, 254, 20, 50);
    glPopMatrix();
    glFlush();
}

void tree22 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.169f, 0.153f, 0.09f);
    glVertex2f(485, 50);
    glVertex2f(500, 50);
    glVertex2f(500, 280);
    glVertex2f(485, 280);
    glEnd();

    glColor3f(0.039f, 0.212f, 0.063f);
    drawCircle(490, 220, 30, 50);
    drawCircle(470, 240, 20, 50);
    drawCircle(460, 250, 17, 50);
    drawCircle(490, 270, 20, 50);
    drawCircle(470, 280, 17, 50);
    drawCircle(490, 300, 17, 50);
    drawCircle(490, 240, 20, 50);
    glPopMatrix();
    glFlush();
}

void tree33 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.169f, 0.153f, 0.09f);
    glVertex2f(260, 340);
    glVertex2f(275, 340);
    glVertex2f(275, 210);
    glVertex2f(260, 210);
    glEnd();
    glColor3f(0.039f, 0.212f, 0.063f);
    drawCircle(270, 320, 30, 50);
    drawCircle(250, 320, 20, 50);
    drawCircle(250, 300, 15, 50);
    drawCircle(265, 350, 20, 50);
    drawCircle(285, 350, 20, 50);
    drawCircle(285, 320, 20, 50);
    drawCircle(285, 300, 15, 50);
    glPopMatrix();
    glFlush();

}
float sunX = 200.0f;
float sunY = 450.0f;

float moonX = 200.0f;
float moonY = 450.0f;

void mooncircle1() {
    float radius = 15.0f;
    int num_segments = 100;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunX, sunY);
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(x + sunX, y + sunY);
    }
    glEnd();
    glFlush();
}
void update1_sun(int value) {
    sunY += 0.3f; // Move  upward
    if (sunY > 500.0f) {
        sunY = 330.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(16, update1_sun, 0);
    glEnd();
    glFlush();
}



void display_night() {
    glClear(GL_COLOR_BUFFER_BIT);
    Field1();
    Road1();
    Crossing10();
    glPushMatrix();
    glTranslatef(carX, 0.0f, 0.0f);
    drawCar1();
    glPopMatrix();
    RoadSide1();
    trainline10();
    Train1();
    House11();
    House22();
    Lamppost110();
    House33();
    House44();
    Lamppost220();
    tree11();
    Man11();
    Man22();
    Signal();
    tree22();
    tree33();
    mooncircle1();
    cloud110();
    cloud220();
    glutSwapBuffers();

}
void skyA(){
    glBegin(GL_QUADS);
    glColor3f(0.718f, 0.816f, 0.961f);
    glVertex2f(0, 190);
    glVertex2f(500, 190);
    glVertex2f(500, 520);
    glVertex2f(0, 520);
    glEnd();
    glFlush();
}
void FieldA ()
{

    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.569f, 0.082f);
    glVertex2f(0, 190);
    glVertex2f(500, 190);
    glVertex2f(500, 220);
    glVertex2f(0, 220);
    glEnd();
    glFlush();
}
void Road ()
{

    glBegin(GL_QUADS);
    glColor3f(0.153f, 0.153f, 0.153f);
    glVertex2f(0, 110);
    glVertex2f(500, 110);
    glVertex2f(500, 190);
    glVertex2f(0, 190);
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(0, 150);
    glVertex2f(40, 150);
    glVertex2f(40, 160);
    glVertex2f(0, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(60, 150);
    glVertex2f(100, 150);
    glVertex2f(100, 160);
    glVertex2f(60, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(120, 150);
    glVertex2f(160, 150);
    glVertex2f(160, 160);
    glVertex2f(120, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(250, 150);
    glVertex2f(290, 150);
    glVertex2f(290, 160);
    glVertex2f(250, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(350, 150);
    glVertex2f(310, 150);
    glVertex2f(310, 160);
    glVertex2f(350, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(370, 150);
    glVertex2f(410, 150);
    glVertex2f(410, 160);
    glVertex2f(370, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 10.0f);
    glVertex2f(430, 150);
    glVertex2f(470, 150);
    glVertex2f(470, 160);
    glVertex2f(430, 160);
    glEnd();
    glFlush();
}
void drawCar() {
    // Car Body
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(150, 150);
    glVertex2f(300, 150);
    glVertex2f(300, 180);
    glVertex2f(150, 180);
    glEnd();

    // Car Top
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.25f);
    glVertex2f(160, 180);
    glVertex2f(200, 210);
    glVertex2f(260, 210);
    glVertex2f(290, 180);
    glEnd();

    // Left Window
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(180, 190);
    glVertex2f(230, 190);
    glVertex2f(230, 205);
    glVertex2f(210, 205);
    glEnd();

    // Right Window
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(240, 190);
    glVertex2f(275, 190);
    glVertex2f(255, 205);
    glVertex2f(240, 205);
    glEnd();

    // Wheels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(170.0f, 145.0f,15.0f, 50);
    drawCircle(270.0f, 145.0f, 15.0f, 50);
}
void RoadSide ()
{

    glBegin(GL_QUADS);
    glColor3f(0.094f, 0.503f, 0.067f);
    glVertex2f(0, 0);
    glVertex2f(700, 0);
    glVertex2f(700, 110);
    glVertex2f(0, 110);
    glEnd();
    glFlush();
}
void TrainA(){
    glPushMatrix();
    glTranslatef(trainX, 0, 0);
    glBegin(GL_POLYGON);
    glColor3f(10.0f, 0.0f, 0.0f);
    glVertex2f(430, 240);
    glVertex2f(430, 290);
    glVertex2f(400, 290);
    glVertex2f(400, 320);
    glVertex2f(370, 320);
    glVertex2f(370, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(390, 270);
    glVertex2f(390, 310);
    glVertex2f(375, 310);
    glVertex2f(375, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(370, 260);
    glVertex2f(370, 270);
    glVertex2f(350, 270);
    glVertex2f(350, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 0.0f, 0.0f);
    glVertex2f(350, 240);
    glVertex2f(350, 320);
    glVertex2f(290, 320);
    glVertex2f(290, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(340, 270);
    glVertex2f(340, 310);
    glVertex2f(300, 310);
    glVertex2f(300, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(290, 260);
    glVertex2f(290, 270);
    glVertex2f(270, 270);
    glVertex2f(270, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 0.0f, 0.0f);
    glVertex2f(270, 240);
    glVertex2f(270, 320);
    glVertex2f(200, 320);
    glVertex2f(200, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(260, 270);
    glVertex2f(260, 310);
    glVertex2f(210, 310);
    glVertex2f(210, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(200, 260);
    glVertex2f(200, 270);
    glVertex2f(180, 270);
    glVertex2f(180, 260);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(10.0f, 0.0f, 0.0f);
    glVertex2f(180, 240);
    glVertex2f(180, 320);
    glVertex2f(125, 320);
    glVertex2f(125, 240);
    glEnd();
    //WINdow
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(170, 270);
    glVertex2f(170, 310);
    glVertex2f(140, 310);
    glVertex2f(140, 270);
    glEnd();
    //weels
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(140, 240, 10, 50);
    drawCircle(165, 240, 10, 50);
    drawCircle(215, 240, 10, 50);
    drawCircle(245, 240, 10, 50);
    drawCircle(335, 240, 10, 50);
    drawCircle(305, 240, 10, 50);
    drawCircle(415, 240, 10, 50);
    drawCircle(385, 240, 10, 50);
    glPopMatrix();
    glFlush();}
 void House1() {
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0,210);
    glVertex2f(70, 210);
    glVertex2f(70,370);
    glVertex2f(0, 370);
    glEnd();
      //  windows
    glColor3f(0.0f, 0.0f, 1.0f); // blue windows
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;

    float startX = 7, startY = 250;

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 2; ++col) {

            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }
    glFlush();
}
void House2() {
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(90,220);
    glVertex2f(170, 220);
    glVertex2f(170,410);
    glVertex2f(90, 410);
    glEnd();
    // Windows
    glColor3f(0.0f, 0.0f, 1.0f); // Blue windows
    float windowWidth = 20, windowHeight = 20;
    float spaceX = 7, spaceY = 20;
    float startX = 100, startY = 250;

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }

    // Door
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(125, 220);
    glVertex2f(140, 220);
    glVertex2f(140, 270);
    glVertex2f(125, 270);
    glEnd();
    glFlush();
}
void House3() {
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(500,210);
    glVertex2f(430, 210);
    glVertex2f(430,380);
    glVertex2f(500, 380);
    glEnd();
    // Windows
    glColor3f(0.0f, 0.0f, 1.0f); // Blue windows
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;
    float startX = 437, startY = 260;

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }

    glFlush();
}
void House4() {
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(400,220);
    glVertex2f(330, 220);
    glVertex2f(330,400);
    glVertex2f(400, 400);
    glEnd();
    // Windows
    glColor3f(0.0f, 0.0f, 1.0f); // Blue windows
    float windowWidth = 15, windowHeight = 20;
    float spaceX = 5, spaceY = 20;
    float startX = 337, startY = 250;

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 2; ++col) {
            float x = startX + col * (windowWidth + spaceX + 15);
            float y = startY + row * (windowHeight + spaceY);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + windowWidth, y);
            glVertex2f(x + windowWidth, y + windowHeight);
            glVertex2f(x, y + windowHeight);
            glEnd();
        }
    }
    // Door
    glColor3f(0.5f, 0.35f, 0.05f); // Brown door
    glBegin(GL_QUADS);
    glVertex2f(355, 220);
    glVertex2f(370, 220);
    glVertex2f(370, 270);
    glVertex2f(355, 270);
    glEnd();
    glFlush();
}
void Lamppost() {
    // Lamppost base
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(100,212);
    glVertex2f(105, 212);
    glVertex2f(105, 280);
    glVertex2f(100, 280);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(98,280);
    glVertex2f(108,280);
    glVertex2f(110,310);
    glVertex2f(105,315);
    glVertex2f(100,315);
    glVertex2f(95,310);
    glEnd();
    glFlush();
}
void Lamppost2(){
glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(400,212);
    glVertex2f(405, 212);
    glVertex2f(405, 280);
    glVertex2f(400, 280);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(398,280);
    glVertex2f(408,280);
    glVertex2f(410,310);
    glVertex2f(405,315);
    glVertex2f(400,315);
    glVertex2f(395,310);
    glEnd();
    glFlush();
    }

void Man(){
    glBegin(GL_QUADS);
    glColor3f(1.0f, 10.0f, 0.0f);
    glVertex2f(170, 70);
    glVertex2f(200, 70);
    glVertex2f(200, 130);
    glVertex2f(170, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(180, 140);
    glVertex2f(190, 140);
    glVertex2f(190, 130);
    glVertex2f(180, 130);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(170, 100);
    glVertex2f(160, 100);
    glVertex2f(170, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(170, 100);
    glVertex2f(160, 100);
    glVertex2f(160, 60);
    glVertex2f(170, 60);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(200, 100);
    glVertex2f(210, 100);
    glVertex2f(200, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(200, 100);
    glVertex2f(210, 100);
    glVertex2f(210, 60);
    glVertex2f(200, 60);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(170, 70);
    glVertex2f(185, 70);
    glVertex2f(180, 10);
    glVertex2f(170, 10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(200, 70);
    glVertex2f(185, 70);
    glVertex2f(190, 10);
    glVertex2f(200, 10);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(185.0f, 153.0f,15.0f, 50);

    glFlush();
}
void Man2(){
    glBegin(GL_QUADS);
    glColor3f(1.0f, 10.0f, 10.0f);
    glVertex2f(240, 70);
    glVertex2f(270, 70);
    glVertex2f(270, 130);
    glVertex2f(240, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(250, 140);
    glVertex2f(260, 140);
    glVertex2f(260, 130);
    glVertex2f(250, 130);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(240, 100);
    glVertex2f(230, 100);
    glVertex2f(240, 130);
    glEnd();
    glBegin(GL_QUADS);//hand
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(240, 100);
    glVertex2f(230, 100);
    glVertex2f(230, 60);
    glVertex2f(240, 60);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(10.0f, 10.0f, 0.0f);
    glVertex2f(270, 100);
    glVertex2f(280, 100);
    glVertex2f(270, 130);
    glEnd();
    glBegin(GL_QUADS);//hand
    glColor3f(0.949f, 0.941f, 0.369f);
    glVertex2f(270, 100);
    glVertex2f(280, 100);
    glVertex2f(280, 60);
    glVertex2f(270, 60);
    glEnd();
    glBegin(GL_QUADS);//leg
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(240, 70);
    glVertex2f(255, 70);
    glVertex2f(250, 10);
    glVertex2f(240, 10);
    glEnd();
    glBegin(GL_QUADS);//leg
    glColor3f(0.0f, 0.0f, 10.0f);
    glVertex2f(270, 70);
    glVertex2f(255, 70);
    glVertex2f(260, 10);
    glVertex2f(270, 10);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(255.0f, 153.0f,15.0f, 50);

    glFlush();
}
void tree1 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.35f, 0.05f);
    glVertex2f(0, 50);
    glVertex2f(15, 50);
    glVertex2f(15, 280);
    glVertex2f(0, 280);
    glEnd();

    glColor3f(0.055f, 0.71f, 0.027f);
    drawCircle(0, 220, 30, 50);
    drawCircle(30, 230, 17, 50);
    drawCircle(35, 250, 17, 50);
    drawCircle(30, 270, 20, 50);
    drawCircle(20, 280, 20, 50);
    drawCircle(10, 300, 19, 50);
    drawCircle(0, 254, 20, 50);
    glPopMatrix();
    glFlush();
}

void tree2 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.35f, 0.05f);
    glVertex2f(485, 50);
    glVertex2f(500, 50);
    glVertex2f(500, 280);
    glVertex2f(485, 280);
    glEnd();

    glColor3f(0.055f, 0.71f, 0.027f);
    drawCircle(490, 220, 30, 50);
    drawCircle(470, 240, 20, 50);
    drawCircle(460, 250, 17, 50);
    drawCircle(490, 270, 20, 50);
    drawCircle(470, 280, 17, 50);
    drawCircle(490, 300, 17, 50);
    drawCircle(490, 240, 20, 50);
    glPopMatrix();
    glFlush();
}
void tree3 ()
{

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.35f, 0.05f);
    glVertex2f(260, 340);
    glVertex2f(275, 340);
    glVertex2f(275, 210);
    glVertex2f(260, 210);
    glEnd();
    glColor3f(0.055f, 0.71f, 0.027f);
    drawCircle(270, 320, 30, 50);
    drawCircle(250, 320, 20, 50);
    drawCircle(250, 300, 15, 50);
    drawCircle(265, 350, 20, 50);
    drawCircle(285, 350, 20, 50);
    drawCircle(285, 320, 20, 50);
    drawCircle(285, 300, 15, 50);
    glPopMatrix();
    glFlush();

}
void Suncircle() {
    float radius = 15.0f;
    int num_segments = 100;

    glColor3f(1.0f, 0.659f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunX, sunY);
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(x + sunX, y + sunY);
    }
    glEnd();
    glFlush();
}

void cloud1() {
    glColor3f(1.0, 1.0, 1.0);
    drawCircle(17, cloudX, cloudY);

    drawCircle(17, cloudX - 20, cloudY);

    drawCircle(17, cloudX + 20, cloudY);
    drawCircle(20, cloudX, cloudY + 25);
}

void cloud2() {
    glColor3f(1.0, 1.0, 1.0);
    drawCircle(17, cloudZ, cloudP);
    drawCircle(17, cloudZ - 20, cloudP);
    drawCircle(17, cloudZ + 20, cloudP);
    drawCircle(20, cloudZ, cloudP + 25);
}

void display_day() {
    glClear(GL_COLOR_BUFFER_BIT);
    skyA();
    FieldA();
    Road();
    Crossing10();
    glPushMatrix();
    glTranslatef(carX, 0.0f, 0.0f);
    drawCar();
    glPopMatrix();
    RoadSide();
    trainline10();
    TrainA();
    House1();
    House2();
    Lamppost();
    House3();
    House4();
    Lamppost2();
    tree1();
    Man();
    Man2();
    Signal();
    tree2();
    tree3();
    Suncircle();
    cloud1();
    cloud2();
    glutSwapBuffers();

}


//////////////////////////////////////////////////////////////////////////////////

float _move = 0.0f;
float _move1 = 0.0f;
bool night = false;
#define PI 3.1416

float car1X = 0.0f;
float car2X = 0.0f;
float busY1 = 0.0f;
float boat2Y = 0.0f;
float boat1X =0.0f;

float speed_t= 0.0f;

void circle(float radius, float cX, float cY, int r, int g, int b)
{
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor3ub(r, g,b);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+cX,y+cY);

    }
    glEnd();
}

void road_down_t()
{
    glMatrixMode(GL_POLYGON);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(-2.0f,-1.0f);
	glVertex2f(-2.0f,-0.55f);
	glVertex2f(2.0f,-0.55f);
	glVertex2f(2.0f,-1.00f);
	glEnd();


	glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(139, 69, 19); // Soil brown
	glVertex2f(-2.0f,-1.0f);
	glVertex2f(-2.0f,-1.05f);
	glVertex2f(2.0f, -1.05f);
	glVertex2f(2.0f, -1.00f);
	glEnd();
}
void road_up_t()
{
    glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(1, 1, 1);
	glVertex2f(-2.0f,-0.45f);
	glVertex2f(-2.0f,-0.00f);
	glVertex2f(2.0f, 0.00f);
	glVertex2f(2.0f,-0.45f);
	glEnd();
	glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(139, 69, 19); // Soil brown
	glVertex2f(-2.0f, 0.00f);
	glVertex2f(-2.0f, 0.05f);
	glVertex2f(2.0f,  0.05f);
	glVertex2f(2.0f,  0.00f);
	glEnd();
}
void devider_t()
{
    glMatrixMode(GL_POLYGON);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(-2.0f,-0.55f);
	glVertex2f(-2.0f,-0.45f);
	glVertex2f(-1.5f,-0.45f);
	glVertex2f(-1.5f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.70f,-0.55f);
	glVertex2f(-0.70f,-0.45f);
	glVertex2f(-1.3f,-0.45f);
	glVertex2f(-1.3f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f,-0.55f);
	glVertex2f(0.9f,-0.45f);
	glVertex2f(1.4f,-0.45f);
	glVertex2f(1.4f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.50f,-0.55f);
	glVertex2f(-0.50f,-0.45f);
	glVertex2f(-0.00f,-0.45f);
	glVertex2f(-0.00f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f,-0.55f);
	glVertex2f(0.2f,-0.45f);
	glVertex2f(0.7f,-0.45f);
	glVertex2f(0.7f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(1.6f,-0.55f);
	glVertex2f(1.6f,-0.45f);
	glVertex2f(2.00f,-0.45f);
	glVertex2f(2.00f, -0.550f);
	glEnd();
	glPopMatrix();


	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-1.3f,-0.55f);
	glVertex2f(-1.3f,-0.45f);
	glVertex2f(-1.5f,-0.45f);
	glVertex2f(-1.5f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.7f,-0.55f);
	glVertex2f(-0.7f,-0.45f);
	glVertex2f(-0.5f,-0.45f);
	glVertex2f(-0.5f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.0f,-0.55f);
	glVertex2f(-0.0f,-0.45f);
	glVertex2f(0.2f,-0.45f);
	glVertex2f(0.2f, -0.550f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.7f,-0.55f);
	glVertex2f(0.7f,-0.45f);
	glVertex2f(0.9f,-0.45f);
	glVertex2f(0.9f, -0.550f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(1.4f,-0.55f);
	glVertex2f(1.4f,-0.45f);
	glVertex2f(1.6f,-0.45f);
	glVertex2f(1.6f, -0.550f);
	glEnd();


}

void drawLampPost_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.7,0.4,0);
    glTranslatef(0,-1.95,0);

    // Pole of the lamppost
    glColor3ub(105, 105, 105); // Dark gray color for the pole
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.6);
    glVertex2f(0.02, -0.6);
    glVertex2f(0.02, 0.3);
    glVertex2f(-0.02, 0.3);
    glEnd();

    // Lamp head (rectangular base)
    glColor3ub(169, 169, 169); // Light gray for the base of the lamp head
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.08, 0.4);
    glVertex2f(-0.08, 0.4);
    glEnd();

    // Lamp (light bulb)
    glColor3ub(255, 255, 0); // Yellow color for the light bulb
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.48);
    glVertex2f(-0.05, 0.48);
    glEnd();

    // Top of the lamp head
    glColor3ub(169, 169, 169); // Light gray top cover
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.48);
    glVertex2f(0.1, 0.48);
    glVertex2f(0.07, 0.52);
    glVertex2f(-0.07, 0.52);
    glEnd();

    // Lamp Post base
    glColor3ub(70, 70, 70); // Dark gray base for the lamppost
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.6);
    glVertex2f(0.06, -0.6);
    glVertex2f(0.08, -0.65);
    glVertex2f(-0.08, -0.65);
    glEnd();

    glPopMatrix();
}

void drawLampPost1_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.7,0.4,0);
    glTranslatef(1,-1.95,0);

    // Pole of the lamppost
    glColor3ub(105, 105, 105); // Dark gray color for the pole
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.6);
    glVertex2f(0.02, -0.6);
    glVertex2f(0.02, 0.3);
    glVertex2f(-0.02, 0.3);
    glEnd();

    // Lamp head (rectangular base)
    glColor3ub(169, 169, 169); // Light gray for the base of the lamp head
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.08, 0.4);
    glVertex2f(-0.08, 0.4);
    glEnd();

    // Lamp (light bulb)
    glColor3ub(255, 255, 0); // Yellow color for the light bulb
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.48);
    glVertex2f(-0.05, 0.48);
    glEnd();

    // Top of the lamp head
    glColor3ub(169, 169, 169); // Light gray top cover
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.48);
    glVertex2f(0.1, 0.48);
    glVertex2f(0.07, 0.52);
    glVertex2f(-0.07, 0.52);
    glEnd();

    // Lamp Post base
    glColor3ub(70, 70, 70); // Dark gray base for the lamppost
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.6);
    glVertex2f(0.06, -0.6);
    glVertex2f(0.08, -0.65);
    glVertex2f(-0.08, -0.65);
    glEnd();

    glPopMatrix();
}

void drawLampPost2_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.7,0.4,0);
    glTranslatef(2,-1.95,0);

    // Pole of the lamppost
    glColor3ub(105, 105, 105); // Dark gray color for the pole
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.6);
    glVertex2f(0.02, -0.6);
    glVertex2f(0.02, 0.3);
    glVertex2f(-0.02, 0.3);
    glEnd();

    // Lamp head (rectangular base)
    glColor3ub(169, 169, 169); // Light gray for the base of the lamp head
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.08, 0.4);
    glVertex2f(-0.08, 0.4);
    glEnd();

    // Lamp (light bulb)
    glColor3ub(255, 255, 0); // Yellow color for the light bulb
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.48);
    glVertex2f(-0.05, 0.48);
    glEnd();

    // Top of the lamp head
    glColor3ub(169, 169, 169); // Light gray top cover
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.48);
    glVertex2f(0.1, 0.48);
    glVertex2f(0.07, 0.52);
    glVertex2f(-0.07, 0.52);
    glEnd();

    // Lamp Post base
    glColor3ub(70, 70, 70); // Dark gray base for the lamppost
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.6);
    glVertex2f(0.06, -0.6);
    glVertex2f(0.08, -0.65);
    glVertex2f(-0.08, -0.65);
    glEnd();

    glPopMatrix();
}
void drawLampPost3_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.7,0.4,0);
    glTranslatef(-1,-1.95,0);

    // Pole of the lamppost
    glColor3ub(105, 105, 105); // Dark gray color for the pole
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.6);
    glVertex2f(0.02, -0.6);
    glVertex2f(0.02, 0.3);
    glVertex2f(-0.02, 0.3);
    glEnd();

    // Lamp head (rectangular base)
    glColor3ub(169, 169, 169); // Light gray for the base of the lamp head
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.08, 0.4);
    glVertex2f(-0.08, 0.4);
    glEnd();

    // Lamp (light bulb)
    glColor3ub(255, 255, 0); // Yellow color for the light bulb
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.48);
    glVertex2f(-0.05, 0.48);
    glEnd();

    // Top of the lamp head
    glColor3ub(169, 169, 169); // Light gray top cover
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.48);
    glVertex2f(0.1, 0.48);
    glVertex2f(0.07, 0.52);
    glVertex2f(-0.07, 0.52);
    glEnd();

    // Lamp Post base
    glColor3ub(70, 70, 70); // Dark gray base for the lamppost
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.6);
    glVertex2f(0.06, -0.6);
    glVertex2f(0.08, -0.65);
    glVertex2f(-0.08, -0.65);
    glEnd();

    glPopMatrix();
}

void drawLampPost4_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.7,0.4,0);
    glTranslatef(-2,-1.95,0);

    // Pole of the lamppost
    glColor3ub(105, 105, 105); // Dark gray color for the pole
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.6);
    glVertex2f(0.02, -0.6);
    glVertex2f(0.02, 0.3);
    glVertex2f(-0.02, 0.3);
    glEnd();

    // Lamp head (rectangular base)
    glColor3ub(169, 169, 169); // Light gray for the base of the lamp head
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.08, 0.4);
    glVertex2f(-0.08, 0.4);
    glEnd();

    // Lamp (light bulb)
    glColor3ub(255, 255, 0); // Yellow color for the light bulb
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.48);
    glVertex2f(-0.05, 0.48);
    glEnd();

    // Top of the lamp head
    glColor3ub(169, 169, 169); // Light gray top cover
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.48);
    glVertex2f(0.1, 0.48);
    glVertex2f(0.07, 0.52);
    glVertex2f(-0.07, 0.52);
    glEnd();

    // Lamp Post base
    glColor3ub(70, 70, 70); // Dark gray base for the lamppost
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.6);
    glVertex2f(0.06, -0.6);
    glVertex2f(0.08, -0.65);
    glVertex2f(-0.08, -0.65);
    glEnd();

    glPopMatrix();
}

void drawLampPost5_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.7,0.4,0);
    glTranslatef(-.5,0.69,0);

    // Pole of the lamppost
    glColor3ub(105, 105, 105); // Dark gray color for the pole
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.6);
    glVertex2f(0.02, -0.6);
    glVertex2f(0.02, 0.3);
    glVertex2f(-0.02, 0.3);
    glEnd();

    // Lamp head (rectangular base)
    glColor3ub(169, 169, 169); // Light gray for the base of the lamp head
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.08, 0.4);
    glVertex2f(-0.08, 0.4);
    glEnd();

    // Lamp (light bulb)
    glColor3ub(255, 255, 0); // Yellow color for the light bulb
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.48);
    glVertex2f(-0.05, 0.48);
    glEnd();

    // Top of the lamp head
    glColor3ub(169, 169, 169); // Light gray top cover
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.48);
    glVertex2f(0.1, 0.48);
    glVertex2f(0.07, 0.52);
    glVertex2f(-0.07, 0.52);
    glEnd();

    // Lamp Post base
    glColor3ub(70, 70, 70); // Dark gray base for the lamppost
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.6);
    glVertex2f(0.06, -0.6);
    glVertex2f(0.08, -0.65);
    glVertex2f(-0.08, -0.65);
    glEnd();

    glPopMatrix();
}

void drawLampPost6_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.7,0.4,0);
    glTranslatef(0.5,0.69,0);

    // Pole of the lamppost
    glColor3ub(105, 105, 105); // Dark gray color for the pole
    glBegin(GL_POLYGON);
    glVertex2f(-0.02, -0.6);
    glVertex2f(0.02, -0.6);
    glVertex2f(0.02, 0.3);
    glVertex2f(-0.02, 0.3);
    glEnd();

    // Lamp head (rectangular base)
    glColor3ub(169, 169, 169); // Light gray for the base of the lamp head
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.3);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.08, 0.4);
    glVertex2f(-0.08, 0.4);
    glEnd();

    // Lamp (light bulb)
    glColor3ub(255, 255, 0); // Yellow color for the light bulb
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, 0.4);
    glVertex2f(0.05, 0.4);
    glVertex2f(0.05, 0.48);
    glVertex2f(-0.05, 0.48);
    glEnd();

    // Top of the lamp head
    glColor3ub(169, 169, 169); // Light gray top cover
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.48);
    glVertex2f(0.1, 0.48);
    glVertex2f(0.07, 0.52);
    glVertex2f(-0.07, 0.52);
    glEnd();

    // Lamp Post base
    glColor3ub(70, 70, 70); // Dark gray base for the lamppost
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.6);
    glVertex2f(0.06, -0.6);
    glVertex2f(0.08, -0.65);
    glVertex2f(-0.08, -0.65);
    glEnd();

    glPopMatrix();
}

void tree_t(int x)
{
    // Trunk of the tree
    glBegin(GL_POLYGON);
    glColor3ub(65, 55, 48);  // Brown color for the trunk
    glVertex2f(-1.88f + x, 0.05f );  // Bottom left
    glVertex2f(-1.88f + x, 0.3f );   // Top left
    glVertex2f(-1.84f + x, 0.3f );   // Top right
    glVertex2f(-1.84f + x, 0.05f );  // Bottom right
    glEnd();

    // Lower part of the tree (1st triangle)
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 255, 0);  // Green color for the leaves
    glVertex2f(-1.95f + x, 0.3f );   // Left corner
    glVertex2f(-1.77f + x, 0.3f );   // Right corner
    glVertex2f(-1.86f + x, 0.5f );   // Top of the triangle
    glEnd();

    // Middle part of the tree (2nd triangle)
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 255, 0);  // Green color for the leaves
    glVertex2f(-1.92f + x, 0.4f );   // Left corner
    glVertex2f(-1.8f + x, 0.4f  );    // Right corner
    glVertex2f(-1.86f + x, 0.6f );   // Top of the triangle
    glEnd();

    // Upper part of the tree (3rd triangle)
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 255, 0);  // Green color for the leaves
    glVertex2f(-1.89f + x, 0.5f );   // Left corner
    glVertex2f(-1.83f + x, 0.5f );   // Right corner
    glVertex2f(-1.86f + x, 0.7f );   // Top of the triangle
    glEnd();
}

void Sky_t() {

    if (night) {
        glBegin(GL_POLYGON);
        glColor3ub(16, 16, 51); // Dark for rainy sky
        glVertex2f(-2, 2);
        glVertex2f(2, 2);
        glVertex2f(2, 0.05);
        glVertex2f(-2, 0.05);
        glEnd();
    }
    else
    {
        glBegin(GL_POLYGON);
        glColor3ub(135, 206, 235); // Light blue for normal sky
        glVertex2f(-2, 2);
        glVertex2f(2, 2);
        glColor3ub(173, 216, 230); // Lighter blue for sky gradient
        glVertex2f(2, 0.05);
        glVertex2f(-2, 0.05);
        glEnd();
    }
}

void burjKhalifa_t()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);  // Apply movement to the building

    // Base section (largest, bottom-most)
    glBegin(GL_POLYGON);
    glColor3ub(255, 155, 55); // Sky blue
    glVertex2f(-1.5f, 0.05f);  // Bottom left
    glVertex2f(-0.5f, 0.05f);  // Bottom right
    glVertex2f(-0.5f, 0.8f);   // Top right of the base section
    glVertex2f(-1.5f, 0.8f);   // Top left of the base section
    glEnd();

    // Divider line for base section
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);  // Black color for divider line
    glVertex2f(-1.5f, 0.8f);  // Left end of the line
    glVertex2f(-0.5f, 0.8f);  // Right end of the line
    glEnd();

    // Windows for the base section
    for (int i = 0; i < 4; i++) {  // 4 rows of windows
        for (int j = 0; j < 5; j++) {  // 5 windows per row
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);  // White color for the windows
            float windowHeight = 0.05f;
            float windowWidth = 0.1f;
            float yStart = 0.75f - i * 0.15f;  // Spacing for rows
            float xStart = -1.45f + j * 0.2f;  // Spacing for windows in a row

            glVertex2f(xStart, yStart);  // Bottom left
            glVertex2f(xStart, yStart - windowHeight);  // Top left
            glVertex2f(xStart + windowWidth, yStart - windowHeight);  // Top right
            glVertex2f(xStart + windowWidth, yStart);  // Bottom right
            glEnd();
        }
    }

    // Middle section 1
    glBegin(GL_POLYGON);
    glColor3ub(255, 155, 55);
    glVertex2f(-1.3f, 0.8f);  // Bottom left
    glVertex2f(-0.7f, 0.8f);  // Bottom right
    glVertex2f(-0.7f, 1.3f);  // Top right
    glVertex2f(-1.3f, 1.3f);  // Top left
    glEnd();

    // Divider line for middle section 1
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);  // Black color for divider line
    glVertex2f(-1.3f, 1.3f);  // Left end of the line
    glVertex2f(-0.7f, 1.3f);  // Right end of the line
    glEnd();

    // Windows for middle section 1
    for (int i = 0; i < 3; i++) {  // 3 rows of windows
        for (int j = 0; j < 3; j++) {  // 4 windows per row
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255); // Sky blue
  // White color for the windows
            float windowHeight = 0.05f;
            float windowWidth = 0.08f;
            float yStart = 1.25f - i * 0.15f;  // Adjusted row spacing
            float xStart = -1.25f + j * 0.2f;  // Adjusted window spacing

            glVertex2f(xStart, yStart);
            glVertex2f(xStart, yStart - windowHeight);
            glVertex2f(xStart + windowWidth, yStart - windowHeight);
            glVertex2f(xStart + windowWidth, yStart);
            glEnd();
        }
    }

    // Middle section 2
    glBegin(GL_POLYGON);
    glColor3ub(255, 155, 55);
    glVertex2f(-1.1f, 1.3f);  // Bottom left
    glVertex2f(-0.9f, 1.3f);  // Bottom right
    glVertex2f(-0.9f, 1.7f);  // Top right
    glVertex2f(-1.1f, 1.7f);  // Top left
    glEnd();

    // Divider line for middle section 2
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);  // Black color for divider line
    glVertex2f(-1.1f, 1.7f);  // Left end of the line
    glVertex2f(-0.9f, 1.7f);  // Right end of the line
    glEnd();

    // Windows for middle section 2
    for (int i = 0; i < 2; i++) {  // 2 rows of windows
        for (int j = 0; j < 1; j++) {  // 3 windows per row
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255); // Sky blue

            float windowHeight = 0.05f;
            float windowWidth = 0.07f;
            float yStart = 1.65f - i * 0.15f;  // Adjusted row spacing
            float xStart = -1.05f + j * 0.15f;  // Adjusted window spacing

            glVertex2f(xStart, yStart);
            glVertex2f(xStart, yStart - windowHeight);
            glVertex2f(xStart + windowWidth, yStart - windowHeight);
            glVertex2f(xStart + windowWidth, yStart);
            glEnd();
        }
    }



    // Divider line for upper section 1
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);  // Black color for divider line
    glVertex2f(-1.0f, 2.0f);  // Left end of the line
    glVertex2f(-0.8f, 2.0f);  // Right end of the line
    glEnd();


    // Upper section 2 (without windows)
    glBegin(GL_POLYGON);
    glColor3ub(255, 155, 55);
    glVertex2f(-0.95f, 2.0f);  // Bottom left
    glVertex2f(-0.85f, 2.0f);  // Bottom right
    glVertex2f(-0.85f, 2.2f);  // Top right
    glVertex2f(-0.95f, 2.2f);  // Top left
    glEnd();

    // Divider line for upper section 2
    glBegin(GL_LINES);

}

void Buildings_t() {
    // Number of floors for each building
    int floors1 = 3, floors2 = 4, floors3 = 2, floors4 = 5, floors5 = 6;
    float floorHeight1 = 0.6f / floors1;  // Height for 1st building's floor
    float floorHeight2 = 0.7f / floors2;  // Height for 2nd building's floor
    float floorHeight3 = 0.5f / floors3;  // Height for 3rd building's floor
    float floorHeight4 = 0.9f / floors4;  // Height for 4th building's floor
    float floorHeight5 = 0.8f / floors5;  // Height for 5th building's floor

    // Define window size
    float windowWidth = 0.05f;
    float windowHeight = 0.05f;

    /// 5th Building (Shifted to the left)
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);  // Red color for 5th building
    glVertex2f(-0.25f, 0.05f);
    glVertex2f(-0.25f, 0.8f);
    glVertex2f(0.05f, 0.8f);
    glVertex2f(0.05f, 0.05f);
    glEnd();

    // Floors and windows for 5th Building
    for (int i = 0; i < floors5-1; i++) {
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);  // Floor lines in white
        glVertex2f(-0.25f, 0.05f + (i + 1) * floorHeight5);
        glVertex2f(0.05f, 0.05f + (i + 1) * floorHeight5);
        glEnd();

        // Windows for each floor
        for (int j = 0; j < 3; j++) {
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);  // Window color (white)
            glVertex2f(-0.22f + j * 0.1f, 0.05f + (i * floorHeight5) + 0.02f);
            glVertex2f(-0.22f + j * 0.1f, 0.05f + (i * floorHeight5) + 0.02f + windowHeight);
            glVertex2f(-0.17f + j * 0.1f, 0.05f + (i * floorHeight5) + 0.02f + windowHeight);
            glVertex2f(-0.17f + j * 0.1f, 0.05f + (i * floorHeight5) + 0.02f);
            glEnd();
        }
    }

    /// 1st Building (Shifted to the left)
    glBegin(GL_POLYGON);
    glColor3ub(128, 0, 128);  // Green color for 1st building
    glVertex2f(0.1f, 0.05f);
    glVertex2f(0.1f, 0.65f);
    glVertex2f(0.5f, 0.65f);
    glVertex2f(0.5f, 0.05f);
    glEnd();

    // Floors and windows for 1st Building
    for (int i = 0; i < floors1; i++) {
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.1f, 0.05f + (i + 1) * floorHeight1);
        glVertex2f(0.5f, 0.05f + (i + 1) * floorHeight1);
        glEnd();

        // Windows for each floor
        for (int j = 0; j < 4; j++) {
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);
            glVertex2f(0.15f + j * 0.08f, 0.09f + (i * floorHeight1) + 0.022f);
            glVertex2f(0.15f + j * 0.08f, 0.09f + (i * floorHeight1) + 0.022f + windowHeight);
            glVertex2f(0.2f + j * 0.08f, 0.09f + (i * floorHeight1) + 0.022f + windowHeight);
            glVertex2f(0.2f + j * 0.08f, 0.09f + (i * floorHeight1) + 0.022f);
            glEnd();
        }
    }

    /// 2nd Building (Shifted to the left)
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);  // Blue color for 2nd building
    glVertex2f(0.55f, 0.05f);
    glVertex2f(0.55f, 0.75f);
    glVertex2f(0.95f, 0.75f);
    glVertex2f(0.95f, 0.05f);
    glEnd();

    // Floors and windows for 2nd Building
    for (int i = 0; i < floors2; i++) {
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.55f, 0.05f + (i + 1) * floorHeight2);
        glVertex2f(0.95f, 0.05f + (i + 1) * floorHeight2);
        glEnd();

        // Windows for each floor
        for (int j = 0; j < 4; j++) {
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);
            glVertex2f(0.6f + j * 0.08f, 0.09f + (i * floorHeight2) + 0.02f);
            glVertex2f(0.6f + j * 0.08f, 0.09f + (i * floorHeight2) + 0.02f + windowHeight);
            glVertex2f(0.65f + j * 0.08f, 0.09f + (i * floorHeight2) + 0.02f + windowHeight);
            glVertex2f(0.65f + j * 0.08f, 0.09f + (i * floorHeight2) + 0.02f);
            glEnd();
        }
    }

    /// 3rd Building (Shifted to the left)
    glBegin(GL_POLYGON);
    glColor3ub(255, 155, 55);  // Yellow color for 3rd building
    glVertex2f(1.05f, 0.05f);
    glVertex2f(1.05f, 0.5f);
    glVertex2f(1.5f, 0.5f);
    glVertex2f(1.5f, 0.05f);
    glEnd();

    // Floors and windows for 3rd Building
    for (int i = 0; i < floors3; i++) {
        if(i<floors3-1){
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(1.05f, 0.05f + (i + 1) * floorHeight3);
        glVertex2f(1.5f, 0.05f + (i + 1) * floorHeight3);
        glEnd();}

        // Windows for each floor
        for (int j = 0; j < 4; j++) {
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);
            glVertex2f(1.1f + j * 0.08f, 0.1f + (i * floorHeight3) + 0.02f);
            glVertex2f(1.1f + j * 0.08f, 0.1f + (i * floorHeight3) + 0.02f + windowHeight);
            glVertex2f(1.15f + j * 0.08f, 0.1f + (i * floorHeight3) + 0.02f + windowHeight);
            glVertex2f(1.15f + j * 0.08f, 0.1f + (i * floorHeight3) + 0.02f);
            glEnd();
        }
    }

    /// 4th Building (Shifted to the left)
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);  // Purple color for 4th building
    glVertex2f(1.55f, 0.05f);
    glVertex2f(1.55f, 0.9f);
    glVertex2f(1.75f, 0.9f);
    glVertex2f(1.75f, 0.05f);
    glEnd();

    // Floors and windows for 4th Building
    for (int i = 0; i < floors4; i++) {

        if (i<floors4-1)
        {
            glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(1.55f, 0.05f + (i + 1) * floorHeight4);
            glVertex2f(1.75f, 0.05f + (i + 1) * floorHeight4);
            glEnd();
        }

        // Windows for each floor
        for (int j = 0; j < 2; j++) {
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);
            glVertex2f(1.57f + j * 0.08f, 0.05f + (i * floorHeight4) + 0.02f);
            glVertex2f(1.57f + j * 0.08f, 0.05f + (i * floorHeight4) + 0.02f + windowHeight);
            glVertex2f(1.62f + j * 0.08f, 0.05f + (i * floorHeight4) + 0.02f + windowHeight);
            glVertex2f(1.62f + j * 0.08f, 0.05f + (i * floorHeight4) + 0.02f);
            glEnd();
        }
    }
}

void Car1_t()
{
    glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(255, 1, 55);
	glVertex2f(-1.9, -0.75);
	glVertex2f(-1.9, -0.85);
	glVertex2f(-1.15, -0.85);
	glVertex2f(-1.15, -0.75);
	glEnd();
	glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(255, 1, 55);
	glVertex2f(-1.3, -0.75);
	glVertex2f(-1.8, -0.75);
	glVertex2f(-1.7, -0.65);
	glVertex2f(-1.4, -0.65);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(173, 216, 230);
	glVertex2f(-1.68, -0.67);
	glVertex2f(-1.68, -0.73);
	glVertex2f(-1.58, -0.73);
	glVertex2f(-1.58, -0.67);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(173, 216, 230);
	glVertex2f(-1.52, -0.67);
	glVertex2f(-1.52, -0.73);
	glVertex2f(-1.42, -0.73);
	glVertex2f(-1.42, -0.67);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(1, 1, 1);
	glVertex2f(-1.55, -0.65);
	glVertex2f(-1.55, -0.75);
	glEnd();

    circle(0.06, -1.72, -0.85, 64, 64, 64);
	circle(0.06, -1.32, -0.85, 64, 64, 64);
}

void Car2_t()
{
    glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(0, 1, 255);
	glVertex2f(1.3, -0.25);
	glVertex2f(1.3, -0.35);
	glVertex2f(1.9, -0.35);
	glVertex2f(1.9, -0.25);
	glEnd();
	glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(0, 1, 255);
	glVertex2f(1.85, -0.25);
	glVertex2f(1.4, -0.25);
	glVertex2f(1.5, -0.15);
	glVertex2f(1.75, -0.15);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(173, 216, 230);
	glVertex2f(1.51, -0.17);
	glVertex2f(1.51, -0.24);
	glVertex2f(1.59, -0.24);
	glVertex2f(1.59, -0.17);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(173, 216, 230);
	glVertex2f(1.65, -0.17);
	glVertex2f(1.65, -0.24);
	glVertex2f(1.74, -0.24);
	glVertex2f(1.74, -0.17);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(1, 1, 1);
	glVertex2f(1.62, -0.15);
	glVertex2f(1.62, -0.35);
	glEnd();

	///trair
	circle(0.06, 1.4, -0.35, 64, 64, 64);
	circle(0.06, 1.82, -0.35, 64, 64, 64);
}

void bus_t()
{
    glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
	glVertex2f(-0.9, -0.1);
	glVertex2f(-0.9, -0.3);
	glVertex2f(-0.45, -0.3);
	glVertex2f(-0.45, -0.1);
	glEnd();
	glMatrixMode(GL_POLYGON);
    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.9,-0.2);
	glVertex2f(-0.9, -0.3);
	glVertex2f(-1, -0.3);
	glVertex2f(-1, -0.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(173, 216, 230);
	glVertex2f(-0.9, -0.1);
	glVertex2f(-0.9, -0.2);
	glVertex2f(-1, -0.2);
	glVertex2f(-0.98, -0.18);
	glVertex2f(-0.9662810977655, -0.1589276009894);
	glVertex2f(-0.96, -0.14);
	glVertex2f(-0.94, -0.12);
	glEnd();

	///Door
	glBegin(GL_POLYGON);
	glColor3ub(0, 216, 230);
	glVertex2f(-0.88, -0.18);
	glVertex2f(-0.88, -0.3);
	glVertex2f(-0.82, -0.3);
	glVertex2f(-0.82, -0.18);
	glEnd();

	///Windows
	glBegin(GL_POLYGON);
	glColor3ub(0, 216, 230);
	glVertex2f(-0.8, -0.14);
	glVertex2f(-0.8, -0.22);
	glVertex2f(-0.72, -0.22);
	glVertex2f(-0.72, -0.14);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 216, 230);
	glVertex2f(-0.71, -0.14);
	glVertex2f(-0.71, -0.22);
	glVertex2f(-0.63, -0.22);
	glVertex2f(-0.63,-0.14);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0, 216, 230);
	glVertex2f(-0.62, -0.14);
	glVertex2f(-0.62, -0.22);
	glVertex2f(-0.54, -0.22);
	glVertex2f(-0.54, -0.14);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0, 216, 230);
	glVertex2f(-0.53, -0.14);
	glVertex2f(-0.53, -0.22);
	glVertex2f(-0.47, -0.22);
	glVertex2f(-0.47, -0.14);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(1, 1, 1);
	glVertex2f(-1.55, -0.65);
	glVertex2f(-1.55, -0.75);
	glEnd();

	///trair
	circle(0.048, -0.93, -0.3, 64, 64, 64);
	circle(0.048, -0.52,-0.3 , 64, 64, 64);
}



void moveCar1_t(float xOffset)
{
    glPushMatrix();
    glTranslatef(xOffset, 0.0f, 0.0f);
    Car1_t();
    glPopMatrix();
}
void moveCar2_t(float yOffset)
{
    glPushMatrix();
    glTranslatef(yOffset, 0.0f, 0.0f);
    Car2_t();
    glPopMatrix();
}
void moveBus_t(float yOffset)
{
    glPushMatrix();
    glTranslatef(yOffset, 0.0f, 0.0f);
    bus_t();
    glPopMatrix();
}

void updateCar1_t(int value)
{
    car1X += 0.01f+speed_t;


    if (car1X > 4.0f)
    {
        car1X = -1.0f; // Reset car position to the left side
    }
    // Redisplay the scene
    glutPostRedisplay();
    glutTimerFunc(16, updateCar1_t, 0);
}
void updateCar2_t(int value)
{
    car2X -= 0.01f+speed_t;


    if (car2X < -4.0f)
    {
        car2X = 1.30f; // Reset car position to the left side
    }
    // Redisplay the scene
    glutPostRedisplay();
    glutTimerFunc(16, updateCar2_t, 0);
}
void updateBusCity_t(int value)
{
    busY1 -= 0.01f+speed_t;


    if (busY1 < -2.0f)
    {
        busY1 = 3.0f; // Reset bus position to the left side
    }
    // Redisplay the scene
    glutPostRedisplay();
    glutTimerFunc(16, updateBusCity_t, 0);
}


void update3_arpita(int value) {
    if (!paused) {
        carX += speed;
        if (carX > 500.0f) {
            carX = -400.0f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(16, update3_arpita, 0);
}

void mouse_arpita(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) {
            speed -= 0.5f;
            if (speed < 0.5f) speed = 0.5f;
        }
        else if (button == GLUT_RIGHT_BUTTON) {
            speed += 0.5f;
            if (speed > 10.0f) speed = 10.0f;
        }

    }
}





void display_t()
{
	//glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	glClear(GL_COLOR_BUFFER_BIT);

	Sky_t();
	road_down_t();
	devider_t();
	road_up_t();
    Buildings_t();
	burjKhalifa_t();

	tree_t(1);
	tree_t(2);

    moveBus_t(busY1);
    moveCar1_t(car1X);
    moveCar2_t(car2X);

    drawLampPost1_t();
    drawLampPost2_t();
    drawLampPost3_t();
    drawLampPost4_t();
    drawLampPost5_t();
    drawLampPost6_t();
    drawLampPost_t();

    glutSwapBuffers();
	//glFlush();
}

//////////////////////////////////////////////////////////////////////////////////

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case '1':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(-1.5, 1.5, -1.0, 1.0);
            glMatrixMode(GL_MODELVIEW);

            night = false;
            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            glutDisplayFunc(display_t);
            glutMouseFunc(mouse3);
            glutPostRedisplay();
            break;

        case '2':
            night = true;
            break;

        case '3':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 500.0, 0.0, 500.0);
            glMatrixMode(GL_MODELVIEW);

            glClearColor(0.4f, 0.5f, 0.2f, 1.0f);
            glutDisplayFunc(display10);
            glutMouseFunc(mouse_arpita);
            glutPostRedisplay();
            break;
        case '4':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 500.0, 0.0, 500.0);
            glMatrixMode(GL_MODELVIEW);

            glClearColor(0.122f, 0.122f, 0.122f, 1.0f);
            glutDisplayFunc(display_night);
            glutMouseFunc(mouse_arpita);
            glutPostRedisplay();
            break;
        case '5':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 500.0, 0.0, 500.0);
            glMatrixMode(GL_MODELVIEW);

            glClearColor(0.122f, 0.122f, 0.122f, 1.0f);
            glutDisplayFunc(display_day);
            glutMouseFunc(mouse_arpita);
            glutPostRedisplay();
            break;
        case '6':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 500.0, 0.0, 500.0);
            glMatrixMode(GL_MODELVIEW);

            glClearColor(0.4f, 0.5f, 0.2f, 1.0f);
            glutDisplayFunc(display3);
            glutMouseFunc(mousePlane);
            glutPostRedisplay();
            break;
         case '7':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 500.0, 0.0, 500.0);
            glMatrixMode(GL_MODELVIEW);

            glClearColor(0.4f, 0.5f, 0.2f, 1.0f);
            glutDisplayFunc(display4);
            glutMouseFunc(mouse3);
            glutPostRedisplay();
            break;
        case '8':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 500.0, 0.0, 500.0);
            glMatrixMode(GL_MODELVIEW);

            glClearColor(0.6f, 0.7f, 0.2f, 1.0f);
            glutDisplayFunc(display1);
            glutMouseFunc(mouse);
            glutPostRedisplay();
            break;
        case '9':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 500.0, 0.0, 500.0);
            glMatrixMode(GL_MODELVIEW);

            glClearColor(0.4f, 0.5f, 0.2f, 1.0f);
            glutDisplayFunc(display2);
            glutMouseFunc(mouse1);
            glutPostRedisplay();
            break;
        case 'a':
        speed_t = 0.0f;
        break;
        case 'w':
        speed_t = 0.01f;
        break;
        case 's':
        case 'S':
            paused1_train=!paused1_train;
            planePaused=!planePaused;
            break;


        case 't':
        case 'T':
            paused1 = !paused1;
              paused = !paused;
        break;

        case 'U':
        case 'u':
            if (speedBoosted) {
                savedSpeed1 = originalSpeed1;
            } else {
                savedSpeed1 = originalSpeed1 * 5;
                if (savedSpeed1 > 10.0f)
                    savedSpeed1 = 10.0f;
            }
            speedBoosted = !speedBoosted;
            break;









    }
}


void init() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    cout << "Select a View:" << endl;
cout << "----------------------------------------" << endl;
cout << " 1. City View 1 - Tamanna (Day)" << endl;
cout << " 2. City View 2 - Tamanna (Night)" << endl;
cout << " 3. City View 2 - Arpita (Winter)" << endl;
cout << " 4. City View 2 - Arpita (Night)" << endl;
cout << " 5. City View 2 - Arpita (Day)" << endl;
cout << " 6. Village View 1 - Shafin (Night)" << endl;
cout << " 7. Village View 1 - Shafin (Day)" << endl;
cout << " 8. Village View 2 - Trina (Day)" << endl;
cout << " 9. Village View 2 - Trina (Night)" << endl;
cout << "----------------------------------------" << endl;
cout << " Controls:" << endl;
cout << " - Right Mouse Button: Speed Up" << endl;
cout << " - Left Mouse Button: Slow Down" << endl;
cout << "----------------------------------------" << endl;

cout << " Key Press:" << endl;


cout << " - -----------Tamanna:----------" << endl;

cout << " - a for speed 0.0" << endl;
cout << " - w for speed 0.01(up)" << endl;
cout << " - -----------Shafin:----------" << endl;

cout << " - S/s for train and plane stop" << endl;

cout << " - -----------Trina:----------" << endl;
cout << " - d for Day" << endl;
cout << " - n for night" << endl;
cout << " - U/u for speed up 5X" << endl;
cout << " - t/T for stop" << endl;






cout << "----------------------------------------" << endl;




    glutInitWindowSize(1200, 700);

    glutCreateWindow("Project");
    init();

    glutDisplayFunc(display1_view);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse_arpita);
    glutPostRedisplay();


    // Timer functions
    glutTimerFunc(0, update, 0);
    glutTimerFunc(0, update1, 0);
    glutTimerFunc(0, update3_arpita, 0);
    glutTimerFunc(25, updateCloudPosition, 0);
    glutTimerFunc(90, update_p, 0);
    glutTimerFunc(25, update3_night, 0);
     glutTimerFunc(10, update3_night_shafin, 0);
     glutTimerFunc(0, update1_shafin, 0);
     glutTimerFunc(25, updateCloudPosition_shafin, 0);
     glutTimerFunc(25, updateCloud2Position_shafin, 0);
     glutTimerFunc(10, update3_shafin, 0);
     glutTimerFunc(40,update_boat1_shafin, 0);
     glutTimerFunc(50, Timer, 0);
        glutTimerFunc(14, update21, 0);
        glutTimerFunc(16, update_carA, 0);

    glutTimerFunc(16, update1_sun, 0);

    glutTimerFunc(20, updateCar1_t, 0);
    glutTimerFunc(20, updateCar2_t, 0);
    glutTimerFunc(20, updateBusCity_t, 0);
    glutMainLoop();
    return 0;
}
