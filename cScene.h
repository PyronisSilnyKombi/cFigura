#pragma once
#include "cRectangle.h"
#include "cCircle.h"
#include <vector>

void resize_binding(int width, int height);
void idle_binding();
void display_binding();
void key_binding(unsigned char key, int x, int y);

class cScene {
	std::vector<cFigure*> figures;
	int active_id_;
public:
	cScene();
	void resize(int width, int height);
	void idle();
	void display();
	void init(int argc, char **argv, const char* window_name);
	void set_callbacks();
	void key(unsigned char key, int x, int y);

};