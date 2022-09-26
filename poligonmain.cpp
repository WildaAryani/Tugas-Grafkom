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


// PROGRAM MENGGAMBAR POLIGON

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void segitiga()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 1.0);

    glBegin(GL_POLYGON);

    glVertex2f(0.5, 0.5);   // Titik 1
    glVertex2f(0.5, 0.10);   // Titik 2
    glVertex2f(0.10, 0.10);   // Titik 3
    glVertex2f(0.10, 0.10);   // Titik 4

    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);

    glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.5, 0.5);   // Garis 1
    glVertex2f(0.5, 0.10);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.5, 0.10);   // Garis 2
    glVertex2f(0.10, 0.10);

    glColor3f(0.5, 1.0, 0.0);
    glVertex2f(0.10, 0.10);   // Garis 3
    glVertex2f(0.10, 0.10);

    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(0.10, 0.10);   // Garis 4
    glVertex2f(0.5, 0.5);

    glEnd();

    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(segitiga);
    glutMainLoop();
    return 0;
}
