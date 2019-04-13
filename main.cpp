#include <iostream>

#define NDEBUG
#include <GL/freeglut.h>
#include "cScene.h"

cScene scena;

void resize_binding(int width, int height) {
	scena.resize(width, height);
}

void key_binding(unsigned char key, int x, int y) {
	scena.key(key, x, y);
}

void idle_binding() {
	scena.idle();
}
void display_binding() {
	scena.display();
}

int main(int argc, char *argv[])
{
	std::cout << "Hello openGL world!" << std::endl;
	scena.init(argc, argv, "Okno sceny");

	return 0;
}