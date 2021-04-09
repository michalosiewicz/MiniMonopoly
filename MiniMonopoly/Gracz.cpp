#include "Gracz.h"



Gracz::Gracz() {

};


Gracz::~Gracz()
{
}

void Gracz::dodaj(std::string s, Color k) {
	nazwa = s;
	kolor = k;
}
