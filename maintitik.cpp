/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

//TITIK

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glPointSize(5.0);
    glBegin(GL_POINTS);

    glColor3f(1.0,1.0,1.0); //putih
    glVertex3f(0.2,0.5,0.0);
    glColor3f(1.0,0.5,0.1); //orange
    glVertex3f(0.2,0.3,0.0);
    glColor3f(0.1,1.1,1.1); //cyan
    glVertex3f(0.6,0.3,0.0);
    glColor3f(1.1,0.5,1.1); //pink
    glVertex3f(0.6,0.5,0.0);
    glColor3f(0.1,0.1,1.0); //bitu
    glVertex3f(0.2,0.7,0.0);
    glColor3f(0.5,0.1,0.1); //maron
    glVertex3f(0.6,0.7,0.0);

    glEnd();
    glFlush();

}

void Initialize(){
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}

int main(int iArgc,char**cppArgv){
    glutInit(&iArgc,cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250,250);
    glutInitWindowPosition(200,200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
