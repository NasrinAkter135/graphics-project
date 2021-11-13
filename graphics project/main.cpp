#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

static float	tx1	=  0.0;
static float	ty1	=  0.0;
static float	tx2	=  0.0;
static float	ty2	=  0.0;
static float colour1 =  0.0;
static float colour2 =  0.0;
static float colour3 =  0.0;



float car_x_axix = 0;

float x_ax = 0.0, rotation = 0, left_rotate = 70, right_rotate = 300;

float car_x_axix_midpor = 0;
float wheel1x = -45.5;
float wheel2x = -37;
float car_x_axix_frac_pos = -43.5;
float car_x_axix_frac_neg = -38.5;
float spin_wheel = 0.0;

float angle1 = 0;
float angle6 = 180; //90; //0;//90;//100;//-145;
float angle2 = 180;
float angle3 = 0;
float angle4 = 180;
float angle5 = 180;


//puppetvariable


double face1= -35;
double eyeright= -33.5;
double eyeleft= -36.5;
double lips= -35.0;
double singleft= -38;
double singright= -32;
double throatx = 0.0;
double handrightx = -33;//0;
double handleavesrightx = -28.0;
double handleftx = -36;//0;
double handleavesleftx = -36; //-41.5;
double  translatedx = -41.4;
double translatedy = 30.3;
double middlecircle1 = -35;
double middlecircle2 = -35;
double scatx = 0;
double legleftx = -38;
double legrightx = -33.0;//0;
double footleavesrightx = 5.7;
double footleavesrighty = 38.5;

double footleavesleftx = -35.5;

double footleaveslefty = -25.5;
//second puppet value
double face2= 10;//-35;
double eyeright2= 11.5;//-33.5;
double eyeleft2= 8.5;//-36.5;
double lips2= 10;//-35.0;
double singleft2= 7;
double singright2= 13;
double throatx2 = 30;
double handrightx2 = 12;
//double handleavesrightx2 = 16;
double handleftx2 = 9;
double handleavesleftx2 = 4;
double nmiddlecircle1 = 10.0;
double nmiddlecircle2 = 10.0;
double scatx2 = 45;
double legleftx2 = 7;
double legrightx2 =11.5;
double footleavesrightx2 = 25.0;//30.0;
double footleavesrighty2 = -2.0;//0.0;
double footleavesleftx2 = -17.0;
double footleaveslefty2 = 15.5; //0.0;





void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void circle1(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_LINE_LOOP);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //backside
     glPushMatrix();
        //glColor3f(0.4, 0.55,0.1);
        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                //glColor3f(0, 0.5, .5);
                glColor3f(.699, .18, .37);


                glVertex2f(-2, 58);
                //glColor3f(.179, .54, .33);
                glColor3f(.54, 0, .54);


                glVertex2f(68, 58);
                //glColor3f(0.855, 0.43, 0.57);
                glColor3f(.54, 0, .54);


                glVertex2f(68, 90);
                glColor3f(.56, .92, 0.56);


                glVertex2f(-2, 90);
            glEnd();
     glPopMatrix();











      //chal
     glPushMatrix();
        glColor3f(0.66, 0.0, 0.0);

        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glColor3f(0.96, 0.96, 0.86);
                glVertex2f( -4, 82);
                glColor3f(0.55, 0.27, 0.75);

                glVertex2f(69, 82);
                glColor3f(0.96, 0.96, 0.86);

                glVertex2f( 64, 75);
                glColor3f(0.55, 0.27, 0.75);

                glVertex2f( 2, 75);

            glEnd();
     glPopMatrix();
     //stagefloor
     glPushMatrix();
        //glColor3f(0.8, 0.52,0.2);
        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glColor3f(0.16, 0.16, 0.16);

                glVertex2f(-2, 45);
                //glColor3f(0.96, 0.96, 0.86);
                glColor3f(1.0, 1.0, 1.0);

                //glColor3f(0.55, 0.27, 0.75);

                glVertex2f(68, 45);
                glColor3f(0.16, 0.16, 0.16);


                glVertex2f(68, 58);

                glColor3f(0.16, 0.16, 0.16);

                glVertex2f(-2, 58);
            glEnd();
     glPopMatrix();
     //frontside
     glPushMatrix();
        glColor3f(0.71, 0.52,0.4);
        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glVertex2f(-2, 26);
                glVertex2f(68, 26);
                glVertex2f(68, 45);

                glVertex2f(-2, 45);
            glEnd();
     glPopMatrix();




//draw puppet
 glPushMatrix();

      //face
      glPushMatrix();
            glTranslated(face1,36, 0);
            glColor3d(0.0,0.0,0.0);


            //glColor3d(0.54,0.26,0.07);
            circle(3,4);
      glPopMatrix();
      //eyeright
      glPushMatrix();
            glTranslated(eyeright,37, 0);
            glColor3d(1.0, 1.0,1.0);
            circle(.5,.5);
      glPopMatrix();
      //eyeleft
      glPushMatrix();
            glTranslated(eyeleft,37, 0);
            glColor3d(1.0, 1.0,1.0);
            circle(.5,.5);
      glPopMatrix();
       //lips
      glPushMatrix();
            glTranslated(lips,34, 0);
            glColor3d(1.0, 1.0,1.0);
            circle(.5,.5);
      glPopMatrix();
      //sing left
      glPushMatrix();
            glTranslated(singleft,40, 2);
            //glColor3d(0.5, 0, 0.5);
            glColor3d(0.0, 0, 0.0);

            circle(2,2);
      glPopMatrix();
      //sing right
      glPushMatrix();
            glTranslated(singright,40, 0);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
    //throat
      glPushMatrix();
        glTranslatef(throatx, 0, 0);

        glColor3f(1.0, 0.5, 0.0);
        glRectf(-36.0,30.0,-34.0,32.5);
      glPopMatrix();
      //hand right
      glPushMatrix();
         glTranslatef(handrightx, 31, 0);//handrightx=-33
         glRotated(angle6, 0, 0, 1);
         glColor3d(0.0, 0.0, 0.0);
         glRectf(1.9,2.0,-6.0,0.0);
      glPopMatrix();
      //handleavesright
       /*glPushMatrix();
            glTranslated(handleavesrightx,30.3, 0);
            glColor3d(0.5, 0, 0.5);
            circle(1,1.5);
      glPopMatrix();*/
       //hand left
      glPushMatrix();
         glTranslatef(handleftx, 29, 0);//handleftx=-36
         glRotated(angle1, 0, 0, 1);
         glColor3d(0.0, 0.0, 0.0);
         glRectf(1.9,2.0,-7.0,0.0);
      glPopMatrix();
      //handleavesleft
       /*glPushMatrix();
            glTranslated( handleavesleftx,30.3, 0);
            glColor3d(0.5, 0, 0.5);
            circle(1,1.5);
      glPopMatrix();*/



      //midle circle1
      glPushMatrix();
            glTranslated(middlecircle1,29.8,-50);
            glColor3d(0.99, 0, 0.0);
            circle(3,2);
      glPopMatrix();
      //middle circle 2
      glPushMatrix();
            glTranslated(middlecircle2,29.5,-50);
            glColor3d(0.99, 0.0, 0.0);
            circle(3,1.5);
      glPopMatrix();
        //legleft
      glPushMatrix();
            glTranslatef(legleftx, 26.0, 0);//legleftx=-38;
            glRotated(angle5, 0, 0, 1);
            glColor3d(0.0, 0.0,0.0);
            glRectf(0.0,5.0,-1.5,0.0);
      glPopMatrix();
      //leg right
       glPushMatrix();
           glTranslatef(legrightx, 26.0, 0);//legrightx=-33.0
            glRotated(angle4, 0, 0, 1);
            glColor3d(0.0, 0.0,0.0);
            glRectf(0.5,5.0,-1.0,0.0);



      glPopMatrix();
       //scat
       glPushMatrix(); // Nearest Triangle, Draw last
            glTranslatef(scatx, 0, 0);
            //glColor3f(0.66, 0.0, 0.0);
            //glColor3f(0.0, 0.79, 0.99);
            glColor3f(0.48, 0.99, 0.0);


            glBegin(GL_POLYGON);
                glVertex2f(-38, 29.2);
                glVertex2f(-32, 29.2);
                //glVertex2f(-38, 26);
                glVertex2f(-31, 25);
                glVertex2f(-39.5, 25);


            glEnd();
        glPopMatrix();

      //footleavesright
      /*glPushMatrix();
         glColor3f(0.5,0.0,0.5);
         //glColor3f(1, .96, .93);
	    // glRotatef(55, 0.0, 0.0, 1.0);//right eye moni
         glRotatef(65, 0.0, 0.0, 1.0);//right eye moni
         glTranslatef(footleavesrightx,footleavesrighty,0);

         //glTranslatef(footleavesright,38.5,0);
         circle(1.2,2);
      glPopMatrix();*/
      //footleavesleft
     /* glPushMatrix();
         glColor3f(0.5,1.0, 0.5);
         //glColor3f(1, .96, .93);
	    // glRotatef(55, 0.0, 0.0, 1.0);//right eye moni
         glRotatef(-65, 0.0, 0.0, 1.0);//right eye moni
         glTranslatef(footleavesleftx,footleaveslefty,0);

         //glTranslatef(footleavesleft,-25.5,0);
         circle(1.2,2);
      glPopMatrix();*/

   glPopMatrix();
//puppetend

//draw puppet222
 glPushMatrix();
   // glTranslated(-30,36, 0);

      //face
      glPushMatrix();
            glTranslated(face2,36, 0);
            glColor3d(0.0,0.0,0.0);


            //glColor3d(0.54,0.26,0.07);
            circle(3,4);
      glPopMatrix();
      //eyeright
      glPushMatrix();
            glTranslated(eyeright2,37, 0);
            glColor3d(1.0, 1.0,1.0);
            circle(.5,.5);
      glPopMatrix();
      //eyeleft
      glPushMatrix();
            glTranslated(eyeleft2,37, 0);
            glColor3d(1.0, 1.0,1.0);
            circle(.5,.5);
      glPopMatrix();
       //lips
      glPushMatrix();
            glTranslated(lips2,34, 0);
            glColor3d(1.0, 1.0,1.0);
            circle(.5,.5);
      glPopMatrix();
      //sing left
      glPushMatrix();
            glTranslated(singleft2,40, 2);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
      //sing right
      glPushMatrix();
            glTranslated(singright2,40, 0);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
    //throat
      glPushMatrix();
        glTranslatef(throatx2, 0, 0);

        glColor3f(1.0, 0.5, 1.0);
        glRectf(-21.5,30.0,-18.5,32.5);
      glPopMatrix();
      //hand right
      glPushMatrix();



         glTranslatef(handrightx2, 31, 0);//handrightx2=12
         glRotated(angle6, 0, 0, 1);
         glColor3d(0.0, 0.0, 0.0);
         glRectf(1.9,2.0,-6.0,0.0);

      glPopMatrix();
      //handleavesright
      /* glPushMatrix();
            glTranslated(handleavesrightx2,30.3, 0);
            glColor3d(0.5, 0, 0.5);
            circle(1,1.5);
      glPopMatrix();*/
       //hand left
      glPushMatrix();
         glTranslatef(handleftx2, 29, 0);//handlefttx2=9
         glRotated(angle1, 0, 0, 1);
         glColor3d(0.0, 0.0, 0.0);
         glRectf(1.9,2.0,-7.0,0.0);



        //glTranslatef(handleftx2, 0, 0);

        //glColor3f(0.0, 0.0, 0.0);
        //glRectf(-26.5,29.5,-21.5,31.0);
      glPopMatrix();
      //handleavesleft
      /* glPushMatrix();
            glTranslated(handleavesleftx2,30.3, 0);
            glColor3d(0.5, 0, 0.5);
            circle(1,1.5);
      glPopMatrix();*/



      //midle circle1
      glPushMatrix();
            glTranslated(nmiddlecircle1,29.8,-50);
            glColor3d(0.0, 0.5, 0.5);
            circle(3,2);
      glPopMatrix();
      //middle circle 2
      glPushMatrix();
            glTranslated(nmiddlecircle2,29.5,-50);
            glColor3d(0.0, 0.5, 0.5);
            circle(3,1.5);
      glPopMatrix();
     /* glPushMatrix();
            glTranslated(-35,26.5,-50);
            glColor3d(1.0, 0.5, 0.0);
            circle(3,4);
      glPopMatrix();*/


        //legleft2
      glPushMatrix();
        glTranslatef(legleftx2, 26.0, 0);//legleftx2=7;
        glRotated(angle5, 0, 0, 1);
        glColor3d(0.0, 0.0,0.0);
        glRectf(0.0,5.0,-1.5,0.0);

      glPopMatrix();
      //leg right2
       glPushMatrix();
          glTranslatef(legrightx2, 26.0, 0);//legright2=11.5
          glRotated(angle4, 0, 0, 1);
          glColor3d(0.0, 0,0.0);
          glRectf(0.5,5.0,-1.0,0.0);


      glPopMatrix();

      //scat
       glPushMatrix(); // Nearest Triangle, Draw last
            glTranslatef(scatx2, 0, 0);
            glColor3f(0.48, 0.99, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-38, 29.2);
                glVertex2f(-32, 29.2);
                //glVertex2f(-38, 26);
                glVertex2f(-31, 25);
                glVertex2f(-39.5, 25);


            glEnd();
        glPopMatrix();



     //pordaright
     glPushMatrix();
        //glColor3f(0.66, 0.0, 0.0);

        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
               // glColor3f(0.699, 0.18, 0.37);
                glColor3f(0.96, 0.96, 0.86);
                //glColor3f(0.55, 0.27, 0.75);

                glVertex2f( 68, 70);
                //glColor3f(0.855, 0.43, 0.57);
                glColor3f(0.55, 0.27, 0.75);

                glVertex2f(68, 45);
                //glColor3f(0.699, 0.18, 0.37);
                glColor3f(0.55, 0.27, 0.75);

                glVertex2f( 56, 45);
               // glColor3f(0.855, 0.43, 0.57);
                glColor3f(0.96, 0.96, 0.86);

                glVertex2f( 56, 70);

            glEnd();
     glPopMatrix();
      //pordaleft
     glPushMatrix();
        //glColor3f(0.66, 0.0, 0.0);

        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                //glColor3f(0.55, 0.27, 0.75);
                glColor3f(0.96, 0.96, 0.86);

                glVertex2f( -2, 70);
                //glColor3f(0.96, 0.96, 0.86);
                glColor3f(0.55, 0.27, 0.75);


                glVertex2f(-2, 45);
                glColor3f(0.55, 0.27, 0.75);

                glVertex2f( 15, 45);
                glColor3f(0.96, 0.96, 0.86);

                glVertex2f( 15, 70);

            glEnd();
     glPopMatrix();





      //head0fman
      glPushMatrix();
            glTranslated(-8,11,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
       glPushMatrix();
            glTranslated(-15,11,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
      glPushMatrix();
            glTranslated(-25,11,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
      glPushMatrix();
            glTranslated(-32,11,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();

     //dorshok
      glPushMatrix();
        //glColor3f(0.5, 0.5, 0.5);
        //glColor3f(0.16, 0.16, 0.16);
        glColor3f(0.66, 0.0, 0.0);



        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glVertex2f( 10, 40);
                glVertex2f(50, 40);
                glVertex2f( 50, 32);
                glVertex2f( 10, 32);

            glEnd();
     glPopMatrix();

     glPushMatrix();
            glTranslated(-14,6,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
     glPushMatrix();
            glTranslated(-22,6,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
      glPushMatrix();
            glTranslated(-30,6,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
      glPushMatrix();
            glTranslated(-5,6,-50);
            glColor3d(0.0, 0, 0.0);
            circle(2,2);
      glPopMatrix();
     //dorshok2
     glPushMatrix();
       // glColor3f(0.66, 0.5, 0.5);
        //glColor3f(0.53, 0.16, 0.88);
        glColor3f(0.53, 0.16, 0.88);



        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glVertex2f( 10, 35);
                glVertex2f(50, 35);
                glVertex2f( 50, 30);
                glVertex2f( 10, 30);

            glEnd();
     glPopMatrix();



     //portan after stag

     //portan after stage2
      glPushMatrix();
       // glColor3f(0.63, 0.8,0.4);
        //glColor3f(0.72, 0.53,0.42);
        //glColor3f(0.41, 0.41,0.41);


        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                // glColor3f(0.0, 0.5,0.5);
                glColor3f(0.99, 0.85,0.72);


                glVertex2f(-2, 3);
                //glColor3f(0.179, 0.54,0.33);
               // glColor3f(0.60, 0.80,0.19);


                glVertex2f(110, 3);
                glColor3f(0.13, 0.54,0.13);

                glVertex2f(110, 26);
                glColor3f(0.41, 0.55,0.136);


                glVertex2f(-2, 26);
            glEnd();
     glPopMatrix();


//portion on road
      glPushMatrix();
       // glColor3f(0.63, 0.8,0.4);
        //glColor3f(0.72, 0.53,0.42);
        //glColor3f(0.41, 0.41,0.41);


        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                // glColor3f(0.0, 0.5,0.5);
                glColor3f(0.21, 0.21,0.21);


                glVertex2f(-2, 22);
                //glColor3f(0.179, 0.54,0.33);
                glColor3f(0.199, 0.199,0.199);


                glVertex2f(67, 22);
                glColor3f(0.277, 0.277,0.277);

                glVertex2f(67, 26);
                glColor3f(0.34, 0.34,0.34);


                glVertex2f(-2, 26);
            glEnd();
     glPopMatrix();








      //portan side of stage
      glPushMatrix();
       // glColor3f(0.63, 0.8,0.4);
        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
               // glColor3f(0.0, 0.54,0.0);

               // glColor3f(0.33, 0.417,0.183);

                glColor3f(0.0, 0.93,0.0);
                glVertex2f(98,60 );
                //glColor3f(0.0, 0.93,0.0);
                glColor3f(0.0, 0.54,0.0);

                glVertex2f(67, 60);
                glColor3f(0.99, 0.85,0.72);
                glVertex2f(67, 26);
                glColor3f(0.33, 0.417,0.183);


                glVertex2f(98, 26);
            glEnd();
     glPopMatrix();

      //sky
      glPushMatrix();
    glTranslatef(0,0,0);
    glBegin(GL_QUADS);
    glColor3f(0, 0, .50);
        glVertex2d(19,5);
    glColor3f(.53, .81, .92);
        glVertex2d(19, 60);
    glColor3f(0, 0, .50);
        glVertex2d(50, 60);
    glColor3f(.94, .97, 1);
        glVertex2d(50,5);
    glEnd();
    glPopMatrix();

    //portion of gurnon
      glPushMatrix();
        //glColor3f(0.1, 0.8,0.4);
        glTranslatef(-43,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glColor3f(0.72, 0.523,0.42);
                glVertex2f(88,30 );
                glColor3f(0.99, 0.83,0.0);
                glVertex2f(78, 30);
                glColor3f(0.99, 0.99,0.0);
                glVertex2f(83, 50);
                glColor3f(0.72, 0.523,0.42);

                glVertex2f(84, 50);
            glEnd();
     glPopMatrix();
      //chakaline1
    glPushMatrix();
         glTranslatef(33, 21, 0);//handlefttx2=9
         glRotated(-30, 0, 0, 1);
         glColor3d(0.0, 0.5, 0.5);
         glRectf(4.8,4.0,-2.0,2.3);

    glPopMatrix();
     //chakaline2
    glPushMatrix();
         glTranslatef(43, 26, 0);//handlefttx2=9
         glRotated(-140, 0, 0, 1);
         glColor3d(0.0, 0.5, 0.5);
         glRectf(4.8,4.0,-2.0,2.3);

    glPopMatrix();
    //chakaline3
    glPushMatrix();
         glTranslatef(37, 28, 0);//handlefttx2=9
         glRotated(-90, 0, 0, 1);
         glColor3d(0.0, 0.5, 0.5);
         glRectf(4.8,4.0,-2.0,2.3);

    glPopMatrix();
     //sidecircle

     glPushMatrix();
            glTranslated(40,20,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle1(7,10);
      glPopMatrix();
       glPushMatrix();
            glTranslated(40,20,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle1(6.8,9.8);
      glPopMatrix();
       glPushMatrix();
            glTranslated(40,20,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle1(6.6,9.6);
      glPopMatrix();

      glPushMatrix();
            glTranslated(40,20,-50);
            glColor3d(0.57, 0.0, 0.82);

            circle(2.5,4.5);
      glPopMatrix();
       glPushMatrix();
            glTranslated(40,20,-50);
            glColor3d(0.99, 0.83, 0.0);

            circle1(2.6,4.6);
      glPopMatrix();


    //boxmiddle
      glPushMatrix();
         glTranslatef(40, 26, 0);//handlefttx2=9
         //glRotated(angle1, 0, 0, 1);
         glColor3d(0.99, 0.0, 0.0);
         glRectf(1.0,2.0,-2.0,0.0);

         glRectf(1.6,2.0,-2.0,-1.0);
    glPopMatrix();
    glPushMatrix();
         glTranslatef(40, 26, 0);//handlefttx2=9
         //glRotated(angle1, 0, 0, 1);
         glColor3d(0.99, 0.0, 0.0);
         glRectf(0.8,4.0,-0.0,0.3);

    glPopMatrix();


    //boxside1
      glPushMatrix();
         glTranslatef(46, 20, 0);//handlefttx2=9
         //glRotated(angle1, 0, 0, 1);
         glColor3d(0.99, 0.0, 0.0);
         glRectf(1.0,2.0,-2.0,0.0);

         glRectf(1.6,2.0,-2.0,-1.0);
    glPopMatrix();
    glPushMatrix();
         glTranslatef(46, 20, 0);//handlefttx2=9
         //glRotated(angle1, 0, 0, 1);
         glColor3d(0.99, 0.0, 0.0);
         glRectf(0.8,4.0,-0.0,0.3);

    glPopMatrix();

    //boxside2
      glPushMatrix();
         glTranslatef(33.2, 20, 0);//handlefttx2=9
         //glRotated(angle1, 0, 0, 1);
         glColor3d(0.99, 0.0, 0.0);
         glRectf(1.0,2.0,-2.0,0.0);

         glRectf(1.6,2.0,-2.0,-1.0);
    glPopMatrix();
    glPushMatrix();
         glTranslatef(33.2, 20, 0);//handlefttx2=9
         //glRotated(angle1, 0, 0, 1);
         glColor3d(0.99, 0.0, 0.0);
         glRectf(0.8,4.0,-0.0,0.3);

    glPopMatrix();
















      //footleavesright
     /* glPushMatrix();
        // glTranslatef(footleavesrightx2,footleavesrighty2,0);

         glColor3f(0.5,0.0,0.5);
         //glColor3f(1, .96, .93);
	    // glRotatef(55, 0.0, 0.0, 1.0);//right eye moni
         glRotatef(65, 0.0, 0.0, 1.0);//right eye moni
        glTranslatef(footleavesrightx2,footleavesrighty2,0);


         //glTranslatef(25,-2.0,0);
         circle(1.2,2);
      glPopMatrix();
      //footleavesleft
      glPushMatrix();
        // glTranslatef(footleavesleftx2,footleaveslefty2,0);

         glColor3f(0.5,1.0, 0.5);
         //glColor3f(1, .96, .93);
	    // glRotatef(55, 0.0, 0.0, 1.0);//right eye moni
         glRotatef(-65, 0.0, 0.0, 1.0);//right eye moni
        glTranslatef(footleavesleftx2,footleaveslefty2,0);

         //glTranslatef(-17,15.5,0);
         circle(1.2,2);
      glPopMatrix();

   glPopMatrix();*/
//puppetend22222
//gate
     glPushMatrix();
            glTranslated(-40,-13,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle1(8,16);
      glPopMatrix();
       glPushMatrix();
            glTranslated(-40,-13,-50);
            glColor3d(0.0, 0.5, 0.5);
            circle1(7.8,15.8);
      glPopMatrix();



      glPushMatrix();
            glTranslated(-40,-13,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle1(7.6,15.6);
      glPopMatrix();
       glPushMatrix();
            glTranslated(-40,-13,-50);
            glColor3d(0.99, 0.0, 0.0);
            circle1(7.4,15.4);
      glPopMatrix();
       glPushMatrix();
            glTranslated(-40,2,-50);
            glColor3d(0.99, 0.0, 0.0);
            circle(1.4,1.4);
      glPopMatrix();
      glPushMatrix();
            glTranslated(-37,0,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle(1.4,1.4);
      glPopMatrix();
      glPushMatrix();
            glTranslated(-38,1,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle(1.4,1.4);
      glPopMatrix();
      glPushMatrix();
            glTranslated(-44,0,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle(1.4,1.4);
      glPopMatrix();
       glPushMatrix();
            glTranslated(-42,1.5,-50);
            glColor3d(0.99, 0.83, 0.0);
            circle(1.4,1.4);
      glPopMatrix();

       glPushMatrix();
            glTranslated(40,-26,-50);
            glColor3d(0.42, 0.56, 0.14);
            circle(3,4);
      glPopMatrix();

      glPushMatrix();
            glTranslated(42,-26,-50);
            glColor3d(0.0, 0.39, 0.0);
            circle(3,4);
      glPopMatrix();
       glPushMatrix();
            glTranslated(44,-26,-50);
            glColor3d(0.42, 0.56, 0.14);
            circle(3,4);
      glPopMatrix();



     //roadmid
     glPushMatrix();
        glColor3f(0.4, 0.4,0.4);
        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glVertex2f(-2, -7);
                glVertex2f(98, -7);
                glVertex2f(98, 1);

                glVertex2f(-2, 1);
            glEnd();
     glPopMatrix();
      //road1portion
      glPushMatrix();
        glColor3f(0.0, 0.4, 0.0);
        glTranslatef(-48,-30.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glVertex2f(-2, 1);
                glVertex2f(98, 1);
                glVertex2f(98, 3);

                glVertex2f(-2, 7);
            glEnd();
     glPopMatrix();

      //road3portion
     glPushMatrix();
        glColor3f(0.0, 0.4, 0.0);
        glTranslatef(-48,-40.5,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glVertex2f(-2, 0);
                glVertex2f(98, 0);
                glVertex2f(98, 2.9);

                glVertex2f(-2, 4);
            glEnd();
     glPopMatrix();





    //rectangle
    //trafic main box
    glPushMatrix();
        glColor3f(0.74, 0.75, 0.75);
        glTranslatef(9,0,0);
        glRectf(4.0,2.0,-2.0,-22.0);
	glPopMatrix();
    //rectangleline
	glPushMatrix();
     	glColor3f(0.54, 0.277, 0.14);
        glTranslatef(11.0,0,0);
        glRectf(0.0,-22.0,-2.0,-29.5);
	glPopMatrix();
//circleofsignalbox

	glPushMatrix();

	  glColor3f(colour1, 0.0, 0.0);
      glTranslatef(10,-3,0);
	  circle(2,2.5);
    glPopMatrix();
    glPushMatrix();
         glColor3f(colour2, colour2, 0.0);
         glTranslatef(10,-10,0);
	     circle(2.0,2.5);
	glPopMatrix();
    glPushMatrix();
         glColor3f(0.0, colour3, 0.0);
         glTranslatef(10,-17,0);
         circle(2,2.5);
	glPopMatrix();

	//car
	 glPushMatrix();
            glTranslated(car_x_axix_midpor, -30 ,0);
            glColor3d(0.9, 0.67, 0.05);
           // glRectf(-36.0,2.0,-45.0,-1.0);

            glBegin(GL_POLYGON);
                glVertex2f(-48, -2.0);
                glVertex2f(-33, -2.0);
                glVertex2f(-35, 2.0);
                glVertex2f(-39, 3.0);
                glVertex2f(-45, 3.0);


                glVertex2f(-48, 2.0);
            glEnd();
    glPopMatrix();
   // Wheel 1
    glPushMatrix();
            glTranslated(wheel1x, -32, 0);
            glColor3d(0.0, 0, 0);
            circle(1.5, 1.5);
    glPopMatrix();
     // Wheel 2
    glPushMatrix();
           // glRotated(spin_wheel, 1, 0, 0);
            glTranslated(wheel2x, -32, 0);
            glColor3d(0.0, 0, 0);
            circle(1.5, 1.5);
    glPopMatrix();
   // Upper portion
     glPushMatrix();
        glPushMatrix();
           glTranslated(0, -1, 0.0);
            glColor3d(0.9, 0.67, 0.05);
            glBegin(GL_POLYGON);
                glVertex2f(wheel1x, -26.5);
                glVertex2f(wheel2x, -26.5);
                glVertex2f(car_x_axix_frac_neg, -22);

                glVertex2f(car_x_axix_frac_pos, -22);
               // glVertex2f(car_x_axix_frac_neg, -22);
            glEnd();

          glPopMatrix();
          glPushMatrix();
           glTranslated(0, -1, 0.0);
            glColor3d(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(wheel1x+1, -26.5);
                glVertex2f(wheel2x-1, -26.5);
                glVertex2f(car_x_axix_frac_neg-0.7, -22-1);

                glVertex2f(car_x_axix_frac_pos+0.7, -22-1);
            glEnd();
    glPopMatrix();



    glPopMatrix();
    //car window


     //simpleline
     glPushMatrix();
        glTranslatef(4, 0, 0);

        glColor3f(1.0, 1.0, 1.0);
        //glRectf(-36.0,30.0,-34.0,32.5);
         glBegin(GL_LINE_STRIP);

                glVertex2f( -5,31);

                glVertex2f( -5, 45);

            glEnd();

      glPopMatrix();
       //simpleline
     glPushMatrix();
        glTranslatef(4, 0, 0);

        glColor3f(1.0, 1.0, 1.0);
        //glRectf(-36.0,30.0,-34.0,32.5);
         glBegin(GL_LINE_STRIP);

                glVertex2f( -13,31);

                glVertex2f( -13, 45);

            glEnd();

      glPopMatrix();

         //simpleline
     glPushMatrix();
        glTranslatef(4, 0, 0);

        glColor3f(1.0, 1.0, 1.0);
        //glRectf(-36.0,30.0,-34.0,32.5);
         glBegin(GL_LINE_STRIP);

                glVertex2f( -20,31);

                glVertex2f( -20, 45);

            glEnd();

      glPopMatrix();
       glPushMatrix();
        glTranslatef(4, 0, 0);

        glColor3f(1.0, 1.0, 1.0);
        //glRectf(-36.0,30.0,-34.0,32.5);
         glBegin(GL_LINE_STRIP);

                glVertex2f( -28,31);

                glVertex2f( -28, 45);

            glEnd();

      glPopMatrix();
      //endline
      //grase
    glPushMatrix();
    glTranslatef(24,-6,0);

    glPushMatrix();
    glColor3f(0.42, .56, 0.14);
    glTranslatef(-7,-2,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.42, .56, 0.14);
    glColor3f(0, .39, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,-1,0);
    glColor3f(0.42, .56, 0.14);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();
glPopMatrix();


 //frontgrass
      glPushMatrix();
        glColor3f(0.0, 0.39,0.0);
        glTranslatef(0,0.0,0);
        //glRectf(98.0,25.5,-2.0,-2.0);
         glBegin(GL_POLYGON);
                glVertex2f(6, -0);
                glVertex2f(29, -9);
                glVertex2f(29, -9);

                glVertex2f(6, -0);
            glEnd();
     glPopMatrix();


















	glFlush();
}
void spinDisplay_left(void)
{
     angle1 = angle1-0.11;
     angle4 = angle4+0.11;

     if (angle1 < -46 )

         angle1 = angle1 + 50;


    if (angle4 > 225 )

         angle4 = angle4 - 50;


    glutPostRedisplay();
}
void spinDisplay_right(void)
{

    angle6 = angle6+0.11;
    angle5 = angle5-0.11;



    if (angle6 > 225 )

         angle6 = angle6 - 50;

     if (angle5 < 135 )

         angle5 = angle5 + 50;

    glutPostRedisplay();
}

void spinDisplay_together(void)
{


    angle1 = angle1-0.11;
    angle6 = angle6+0.11;

    angle4 = angle4+0.11;
    angle5 = angle5-0.11;

    if (angle1 < -46 )

         angle1 = angle1 + 50;

    if (angle6 > 225 )

         angle6 = angle6 - 50;


    if (angle4 > 225 )

         angle4 = angle4 - 50;

     if (angle5 < 135 )

         angle5 = angle5 + 50;

    glutPostRedisplay();
}
void puppet1PositionUpdateleft(void)
{
    for(int i=0;i<1;i++){
    face1=face1-15; //-20;//-35;
    eyeright= eyeright-15 ;//-33.5;
    eyeleft= eyeleft-15;//-36.5;
    lips= lips-15;//-35.0;
    singleft=singleft - 15;// -38;
    singright=singright - 15; //-32;
    throatx = throatx - 15.0; //-34.0;
//    throatx2 = throatx2 + 14.5; //-36.0;
    handrightx = handrightx - 15; //-28.0;
    handleavesrightx = handleavesrightx - 15;//-28.0;
    handleftx = handleftx - 15;//-42.5;
    handleavesleftx = handleavesleftx - 15;// -41.5;
    middlecircle1 =middlecircle1 - 15;// -35;
    middlecircle2 = middlecircle2 - 15;//-35;
    scatx = scatx - 15; //0;
    legleftx =legleftx - 15;// 0;
    legrightx = legrightx -15;//0;
    footleavesrightx = footleavesrightx - 6.3;// 5.7;
    footleavesrighty = footleavesrighty +13.5;// 38;

    footleavesleftx = footleavesleftx - 6.5;// -35.5;
    footleaveslefty = footleaveslefty -13.5;// -25.5;



    //spin_wheel -= 0.01;
    glutPostRedisplay();
    }
}

void puppet1PositionUpdateright(void)
{
    for(int i=0;i<1;i++){
    face1=face1+15; //-20;//-35;
    eyeright= eyeright+15 ;//-33.5;
    eyeleft= eyeleft+15;//-36.5;
    lips= lips+15;//-35.0;
    singleft=singleft + 15;// -38;
    singright=singright + 15; //-32;
    throatx = throatx + 15.0; //-34.0;
//    throatx2 = throatx2 + 14.5; //-36.0;
    handrightx = handrightx + 15; //-28.0;
    handleavesrightx = handleavesrightx + 15;//-28.0;
    handleftx = handleftx + 15;//-42.5;
    handleavesleftx = handleavesleftx + 15;// -41.5;
    middlecircle1 =middlecircle1 + 15;// -35;
    middlecircle2 = middlecircle2 + 15;//-35;
    scatx = scatx + 15; //0;
    legleftx =legleftx + 15;// 0;
    legrightx = legrightx +15;//0;
    footleavesrightx = footleavesrightx + 6.3;// 5.7;
    footleavesrighty = footleavesrighty -13.5;// 38;

    footleavesleftx = footleavesleftx + 6.5;// -35.5;
    footleaveslefty = footleaveslefty + 13.5;// -25.5;



    //spin_wheel -= 0.01;
    glutPostRedisplay();
    }
}
void puppet2PositionUpdateleft(void)
{
     for(int i=0;i<1;i++){

    face2=face2-15; //-20;//-35;
    eyeright2= eyeright2-15 ;//-33.5;
    eyeleft2= eyeleft2-15;//-36.5;
    lips2= lips2-15;//-35.0;
    singleft2=singleft2 - 15;// -38;
    singright2=singright2 - 15; //-32;
    throatx2 = throatx2 - 15.0; //-34.0;
    handrightx2 = handrightx2 -15; //-28.0;
    //handleavesrightx2 = handleavesrightx2 - 15;//-28.0;
    handleftx2 = handleftx2 - 15;//-42.5;
    handleavesleftx2 = handleavesleftx2 - 15;// -41.5;
    nmiddlecircle1 = nmiddlecircle1 - 15;// -35;
    nmiddlecircle2 = nmiddlecircle2 - 15;//-35;
    scatx2 = scatx2 - 15; //0;
    legleftx2 =legleftx2 - 15;// 0;
    legrightx2 = legrightx2 -15;//0;
    footleavesrightx2 = footleavesrightx2 - 6.3;// 5.7;
    footleavesrighty2 = footleavesrighty2 +13.5;// 38;

    footleavesleftx2 = footleavesleftx2 - 6.5;// -35.5;
    footleaveslefty2 = footleaveslefty2 - 13.5;// -25.5;






      glutPostRedisplay();
     }
}

void puppet2PositionUpdateright(void)
{
     for(int i=0;i<1;i++){

    face2=face2+15; //-20;//-35;
    eyeright2= eyeright2+15 ;//-33.5;
    eyeleft2= eyeleft2+15;//-36.5;
    lips2= lips2+15;//-35.0;
    singleft2=singleft2 + 15;// -38;
    singright2=singright2 + 15; //-32;
    throatx2 = throatx2 + 15.0; //-34.0;
    handrightx2 = handrightx2 +15; //-28.0;
    //handleavesrightx2 = handleavesrightx2 - 15;//-28.0;
    handleftx2 = handleftx2 + 15;//-42.5;
    handleavesleftx2 = handleavesleftx2 + 15;// -41.5;
    nmiddlecircle1 = nmiddlecircle1 + 15;// -35;
    nmiddlecircle2 = nmiddlecircle2 + 15;//-35;
    scatx2 = scatx2 + 15; //0;
    legleftx2 =legleftx2 + 15;// 0;
    legrightx2 = legrightx2 +15;//0;
    footleavesrightx2 = footleavesrightx2 + 6.3;// 5.7;
    footleavesrighty2 = footleavesrighty2 -13.5;// 38;

    footleavesleftx2 = footleavesleftx2 + 6.5;// -35.5;
    footleaveslefty2 = footleaveslefty2 + 13.5;// -25.5;






      glutPostRedisplay();
     }
}
void carPositionUpdate(void)
{
    colour1 = 0.0;
    colour2 = 0.0;
    colour3 = 1.0;
    car_x_axix_midpor += 0.2;
    wheel1x += 0.2;
    wheel2x += 0.2;
    car_x_axix_frac_pos += 0.2;
    car_x_axix_frac_neg += 0.2;
    spin_wheel -= 0.20;

    glutPostRedisplay();
}
void carPositionUpdate1(void)
{
    colour1 = 1.0;
    colour2 = 0.0;
    colour3 = 0.0;

    glutPostRedisplay();
}


void init(void)
{
	glClearColor (1.0, 1.0, 1.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}

void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				//puppet1PositionUpdate();
                puppet1PositionUpdateleft();

				//glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				//tx1 +=5;
				//colour1 = 0.0;
				//colour2 = 1.0;
				//colour3 = 0.0;
				//glutPostRedisplay();
                puppet1PositionUpdateright();

                //puppet2PositionUpdate1();

				break;

        case GLUT_KEY_DOWN:
				//ty1 -=5;
				//colour1 = 0.0;
				//colour2 = 0.0;
				//colour3 = 1.0;
				//glutPostRedisplay();
				 puppet2PositionUpdateright();

				break;

		case GLUT_KEY_UP:
				//ty1 +=5;
				//glutPostRedisplay();
				 puppet2PositionUpdateleft();


				break;
	  default:
			break;
	}
}
void my_keyboard2(unsigned char key, int x, int y)
{

	switch (key) {

		case 's':
            //carPositionUpdate();
			glutIdleFunc(carPositionUpdate);
			break;

		/*/case 'r':
		    right_rotate -= 1;
			spinDisplay_right();
			break;/*/

       // case 'e':
		   // right_rotate += 1;
			//spinDisplay_right();
			//break;
		case 't':

			glutIdleFunc(spinDisplay_together);
			break;
		case 'l':
			glutIdleFunc(spinDisplay_left);
			break;



       case 'r':
			glutIdleFunc(spinDisplay_right);
			break;



		case 'f':
            carPositionUpdate1( );
            glutIdleFunc(NULL);
			 break;
        case 'g':
            glutIdleFunc(NULL);
			 break;




	  default:
			break;
	}
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1000, 1000);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Translating Circle");
	init();
	glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard2);

	glutSpecialFunc(spe_key);//up,down,left,right
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

