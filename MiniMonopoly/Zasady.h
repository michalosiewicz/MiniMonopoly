#pragma once
#include"menu.h"

class Zasady:public menu
{
public:
	Text info[4]; // teksty o zasadach gry
	void zdarzenia(RenderWindow &rw, int &x,int &m); // oblsuguje zdarzenia w zasadach
	Zasady();
	~Zasady();
};

