
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

//#include <stdlib.h>

// polygon

// triangle
void s3Shape1(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0, 1, 0); glVertex2f(2.0, 4.0);
    glColor3f(0, 1, 0); glVertex2f(8.0, 4.0);
    glColor3f(0, 1, 0); glVertex2f(8.0, 6.0);
    //glColor3f(1, 0, 0); glVertex3f(0, 0.75, 0);
    glEnd();
    glFlush();
}
// triangle 2
void s3Shape2(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0, 0.4, 0); glVertex2f(4.0, 4.0);
    glColor3f(0, 0.4, 0); glVertex2f(6.0, 2.0);
    glColor3f(0, 0.4, 0); glVertex2f(2.0, 2.0);
    //glColor3f(1, 0, 0); glVertex3f(0, 0.75, 0);
    glEnd();
    glFlush();
}
// rectangle
void s4Shape(void)
{
     glClear( GL_COLOR_BUFFER_BIT);
     glColor3f(0.0, 1.0, 0.0);

     /* TRANSFORMATIONS */
     // translation
     //glTranslatef(2.8f, 2.8f, 0.0f);
     // rotation
     //glRotatef(15,0.0f,0.0f,0.1f);
     // scaling
     //glScalef(0.5f, 0.5f,0.5f);

     // rotation and scaling
     //glRotatef(15,0.0f,0.0f,0.1f);
     //glScalef(0.5f, 0.5f,0.5f);

     //scaling and rotation
     glRotatef(15,0.0f,0.0f,0.1f);
     glScalef(0.5f, 0.5f,0.5f);

     glBegin(GL_POLYGON);
     glVertex2f(2.0, 6.0);
     glVertex2f(4.0, 6.0);
     glVertex2f(4.0, 0.0);
     glVertex2f(2.0, 0.0);
     glEnd();
     glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 100);
    glutInitWindowSize(1024,720);
    glutCreateWindow("CG-Assignment opengl Shapes");
    glClearColor(0.4, 0.4, 0.4, 0.0);
    glMatrixMode(GL_PROJECTION);              // setup viewing projection
    glLoadIdentity();                           // start with identity matrix
    glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);   // setup a 10x10x2 viewing world

    glutDisplayFunc(s4Shape);
    glutMainLoop();
}
