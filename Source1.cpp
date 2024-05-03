#include <GL/glut.h>
e
void renderScene1() {
    glClearColor(0.0, 0.0, 1.0, 1.0); // Blue background
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw your scene here
    glColor3f(1.0, 1.0, 1.0); // White color
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glEnd();

    glFlush();
}

// Function to render the second scene
void renderScene2() {
    glClearColor(1.0, 0.0, 0.0, 1.0); // Red background
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw your scene here
    glColor3f(1.0, 1.0, 1.0); // White color
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.0, 0.5);
    glEnd();

    glFlush();
}

// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Render the first scene
    renderScene1();

    // Swap buffers
    glutSwapBuffers();
}

// Display callback function for the second scene
void display2() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Render the second scene
    renderScene2();

    // Swap buffers
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Scene 1");

    // Register the display callback function for the first window
    glutDisplayFunc(display);

    // Create the second window
    glutInitWindowPosition(550, 50);
    glutCreateWindow("Scene 2");

    // Register the display callback function for the second window
    glutDisplayFunc(display2);

    glutMainLoop();
    return 0;
}
