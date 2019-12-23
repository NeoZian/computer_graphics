#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

//TOP Border
glColor3f (0.0, .00, 0.3);
glBegin(GL_POLYGON);
glVertex2f (-1, 1);
glVertex2f (-1, .97);
glVertex2f (1, .97);
glVertex2f (1, 1);
glEnd();
glFlush ();


//Scaling left side
glColor3f (0.0, .00, 0.3);
glBegin(GL_POLYGON);
glVertex2f (-1, .97);
glVertex2f (-1, -1);
glVertex2f (-.97, -1);
glVertex2f (-.97, .97);

glEnd();
glFlush ();



//Scaling BOTTOM
glColor3f (0.0, .00, 0.3);
glBegin(GL_POLYGON);
glVertex2f (-.97, -.97);
glVertex2f (-.97, -1);
glVertex2f (1, -1);
glVertex2f (1, -.97);

glEnd();
glFlush ();




//Scaling Right Border
glColor3f (0.0, .00, 0.3);
glBegin(GL_POLYGON);
glVertex2f (.97, .97);
glVertex2f (.97, -.97);
glVertex2f (1, -.97);
glVertex2f (1, .97);

glEnd();
glFlush ();



//Mosque's TOP TOMB
glColor3f (0.1, 0.9, .1);
glBegin(GL_POLYGON);
glVertex2f (-.39, -.10);
glVertex2f (-.65, -.35);
glVertex2f (-.65, -.50);
glVertex2f (-.20, -.50);
glVertex2f (-.20, -.35);
glVertex2f (.20, -.35);
glVertex2f (.15, -.50);
glVertex2f (.65, -.50);
glVertex2f (.65, -.35);
glVertex2f (.39, -.10);
glVertex2f (.13, .00);
glVertex2f (-.13, .00);
glEnd();
glFlush ();



//TOMB TRIANGLE
glColor3f (.5, .3, .4);
glBegin(GL_POLYGON);
glVertex2f (0,.2);
glVertex2f (-.13, -.00);
glVertex2f (.13, -.00);

glEnd();
glFlush ();






//LEFT MINAAR
glColor3f (0.3, 0.3, 0.0);
glBegin(GL_POLYGON);
glVertex2f (-.95, .30);
glVertex2f (-.95, -.97);
glVertex2f (-.85, -.97);
glVertex2f (-.85, .30);
glEnd();
glFlush ();



//LEFT MINAAR's top rectangle
glColor3f (0.3, 0.3, 0.0);
glBegin(GL_POLYGON);
glVertex2f (-.97, .40);
glVertex2f (-.97, .30);
glVertex2f (-.83, .30);
glVertex2f (-.83, .40);
glEnd();
glFlush ();


//LEFT MINAAR's Top Triangle
glColor3f (0.5, 00, 0.0);
glBegin(GL_POLYGON);
glVertex2f (-.90, .60);
glVertex2f (-.97, .40);
glVertex2f (-.83, .40);
glEnd();
glFlush ();


//Mosque's left rectangle
glColor3f (.4, .7, .2);
glBegin(GL_POLYGON);
glVertex2f (-.80, -.50);
glVertex2f (-.80, -.97);
glVertex2f (-.20, -.97);
glVertex2f (-.20, -.50);


glEnd();
glFlush ();


//Mosque's left rectangle door 1
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (-.75, -.70);
glVertex2f (-.75, -.97);
glVertex2f (-.55, -.97);
glVertex2f (-.55, -.70);
glEnd();
glFlush ();


//Mosque's left rectangle door 1 > top triangle
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (-.65, -.65);
glVertex2f (-.75, -.70);
glVertex2f (-.55, -.70);
glEnd();
glFlush ();




//Mosque's left rectangle door 2
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (-.45, -.70);
glVertex2f (-.45, -.97);
glVertex2f (-.25, -.97);
glVertex2f (-.25, -.70);

glEnd();
glFlush ();


//Mosque's left rectangle door 2 > top triangle
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (-.35, -.65);
glVertex2f (-.45, -.70);
glVertex2f (-.25, -.70);
glEnd();
glFlush ();




//Mosque's Middle Rectangle
glColor3f (.8, .5, .1);
glBegin(GL_POLYGON);
glVertex2f (-.20, -.25);
glVertex2f (-.20, -.97);
glVertex2f (.20, -.97);
glVertex2f (.20, -.25);
glEnd();
glFlush ();



//Mosque's Middle door
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (-.13, -.40);
glVertex2f (-.13, -.97);
glVertex2f (.13, -.97);
glVertex2f (.13, -.40);
glEnd();
glFlush ();



//Mosque's Middle door> triangle
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (0, -.33);
glVertex2f (-.13, -.40);
glVertex2f (.13, -.40);

glEnd();
glFlush ();




//Mosque's Right Rectangle
glColor3f (.4, .7, .2);
glBegin(GL_POLYGON);
glVertex2f (.20, -.50);
glVertex2f (.20, -.97);
glVertex2f (.80, -.97);
glVertex2f (.80, -.50);
glEnd();
glFlush ();





//Mosque's RIGHT rectangle > door 2
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (.25, -.70);
glVertex2f (.25, -.97);
glVertex2f (.45, -.97);
glVertex2f (.45, -.70);
glEnd();
glFlush ();



//Mosque's right rectangle door 2 > top triangle
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (.35, -.65);
glVertex2f (.25, -.70);
glVertex2f (.45, -.70);

glEnd();
glFlush ();


//Mosque's right rectangle > door 1
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (.55, -.70);
glVertex2f (.55, -.97);
glVertex2f (.75, -.97);
glVertex2f (.75, -.70);

glEnd();
glFlush ();


//Mosque's left rectangle door 1 > top triangle
glColor3f (.1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (.65, -.65);
glVertex2f (.55, -.70);
glVertex2f (.75, -.70);

glEnd();
glFlush ();



//Flower Corolla
glColor3f (.2, .31, .51);
glBegin(GL_POLYGON);
glVertex2f (.50, .75);
glVertex2f (.50, .70);
glVertex2f (.525, .65);
glVertex2f (.55, .70);
glVertex2f (.55, .75);
glVertex2f (.525, .80);
glEnd();
glFlush ();




// PETAL LEFT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.65, .725);
glVertex2f (.55, .70);
glVertex2f (.55, .75);
glEnd();
glFlush ();


// PETAL RIGHT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.40, .725);
glVertex2f (.50, .75);
glVertex2f (.50, .70);
glEnd();
glFlush ();


// PETAL LEFT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);

glVertex2f (.50, .70);
glVertex2f (.46, .57);
glVertex2f (.525, .65);
glEnd();
glFlush ();

// PETAL RIGHT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.525, .65);
glVertex2f (.58, .57);
glVertex2f (.55, .70);
glEnd();
glFlush ();



// Line for flower
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.515, .97);
glVertex2f (.515, .80);
glVertex2f (.53, .80);
glVertex2f (.53, .97);
glEnd();
glFlush ();






//===================

//SECOND Flower

//Flower Corolla
glColor3f (.2, .31, .51);
glBegin(GL_POLYGON);
glVertex2f (.70, .55);
glVertex2f (.70, .50);
glVertex2f (.725, .45);
glVertex2f (.75, .50);
glVertex2f (.75, .55);
glVertex2f (.725, .60);
glEnd();
glFlush ();




// PETAL LEFT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.85, .525);
glVertex2f (.75, .50);
glVertex2f (.75, .55);

glEnd();
glFlush ();


// PETAL RIGHT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.60, .525);
glVertex2f (.70, .55);
glVertex2f (.70, .50);
glEnd();
glFlush ();


// PETAL LEFT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);

glVertex2f (.70, .50);
glVertex2f (.66, .37);
glVertex2f (.725, .45);
glEnd();
glFlush ();

// PETAL RIGHT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.725, .45);
glVertex2f (.78, .37);
glVertex2f (.75, .50);
glEnd();
glFlush ();



// Line for flower
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (.72, .97);
glVertex2f (.72, .60);
glVertex2f (.74, .60);
glVertex2f (.74, .97);
glEnd();
glFlush ();

// =====================================================

//second Flower in the -+ co-ordinate





//Flower Corolla
glColor3f (.2, .31, .51);
glBegin(GL_POLYGON);
glVertex2f (-.50, .75);
glVertex2f (-.50, .70);
glVertex2f (-.525, .65);
glVertex2f (-.55, .70);
glVertex2f (-.55, .75);
glVertex2f (-.525, .80);
glEnd();
glFlush ();




// PETAL LEFT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.65, .725);
glVertex2f (-.55, .70);
glVertex2f (-.55, .75);

glEnd();
glFlush ();


// PETAL RIGHT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.40, .725);
glVertex2f (-.50, .75);
glVertex2f (-.50, .70);
glEnd();
glFlush ();


// PETAL LEFT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);

glVertex2f (-.50, .70);
glVertex2f (-.46, .57);
glVertex2f (-.525, .65);
glEnd();
glFlush ();

// PETAL RIGHT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.525, .65);
glVertex2f (-.58, .57);
glVertex2f (-.55, .70);
glEnd();
glFlush ();



// Line for flower
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.515, .97);
glVertex2f (-.515, .80);
glVertex2f (-.53, .80);
glVertex2f (-.53, .97);
glEnd();
glFlush ();






//SECOND Flower

//Flower Corolla
glColor3f (.2, .31, .51);
glBegin(GL_POLYGON);
glVertex2f (-.70, .55);
glVertex2f (-.70, .50);
glVertex2f (-.725, .45);
glVertex2f (-.75, .50);
glVertex2f (-.75, .55);
glVertex2f (-.725, .60);
glEnd();
glFlush ();




// PETAL LEFT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.85, .525);
glVertex2f (-.75, .50);
glVertex2f (-.75, .55);

glEnd();
glFlush ();


// PETAL RIGHT
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.60, .525);
glVertex2f (-.70, .55);
glVertex2f (-.70, .50);
glEnd();
glFlush ();


// PETAL LEFT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);

glVertex2f (-.70, .50);
glVertex2f (-.66, .37);
glVertex2f (-.725, .45);
glEnd();
glFlush ();

// PETAL RIGHT BOTTOM-CORNER
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.725, .45);
glVertex2f (-.78, .37);
glVertex2f (-.75, .50);
glEnd();
glFlush ();



// Line for flower
glColor3f (.2, .7, .7);
glBegin(GL_POLYGON);
glVertex2f (-.72, .97);
glVertex2f (-.72, .60);
glVertex2f (-.74, .60);
glVertex2f (-.74, .97);
glEnd();
glFlush ();


//==================================
//RIGHT MINAR




//RIGHT MINAAR
glColor3f (0.3, 0.3, 0.0);
glBegin(GL_POLYGON);
glVertex2f (.95, .30);
glVertex2f (.95, -.97);
glVertex2f (.85, -.97);
glVertex2f (.85, .30);
glEnd();
glFlush ();



//RIGHT MINAAR's top rectangle
glColor3f (0.3, 0.3, 0.0);
glBegin(GL_POLYGON);
glVertex2f (.97, .40);
glVertex2f (.97, .30);
glVertex2f (.83, .30);
glVertex2f (.83, .40);
glEnd();
glFlush ();


//RIGHT MINAAR's top triangle
glColor3f (0.5, 00, 0.0);
glBegin(GL_POLYGON);
glVertex2f (.90, .60);
glVertex2f (.97, .40);
glVertex2f (.83, .40);

glEnd();
glFlush ();



}

void init (void)
{
/* select clearing (background) color */
glClearColor (0.1, 0.5, 0.4, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, -1.0);
}



/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (700, 640);
glutInitWindowPosition (400, 100);
glutCreateWindow ("Greeting Card");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */}
