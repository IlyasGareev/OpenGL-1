#include <GL/freeglut.h>

static void RenderSceneCB() //функция отображения на экран
{
	glClear(GL_COLOR_BUFFER_BIT);// очистка буфера кадра
	glutSwapBuffers();//функция, которая меняет фоновый буфер и буфер кадра местами
}

static void InitializeGlutCallbacks()
{
	glutDisplayFunc(RenderSceneCB); //функция обратного вызова(отрисовка 1 кадра)
}


void main(int argc, char** argv)
{
	glutInit(&argc, argv); //инициализация GLUT
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //настраиваются некоторые опции GLUT

	glutInitWindowSize(1024, 768);//здесь задаются параметры окна 
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tutorial 01");//создание окна с заголовком

	InitializeGlutCallbacks();

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); //устанавление цвета, который будет использован во время очистки буфера кадра

	glutMainLoop(); //передача контроля GLUT'у
}
