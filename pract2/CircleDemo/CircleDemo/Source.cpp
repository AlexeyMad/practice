#include <conio.h>
#include <iostream>
#include "Circle.h"
#include <math.h>
#include <cmath>
using std::cout;
using std::endl;
int main ()
{	/*Представим, что земля имеет форму идеального шара.
	Вокруг поверхности земного шара туго натянута верёвка
	(между ней и поверхностью нет никакого зазора).Кто - то 
	разрезает верёвку в произвольном месте и добавляет кусок 
	верёвки длиной 1 метр.После вставки между поверхностью земли
	и верёвкой возникает зазор, вызванный увеличением длины.Найти
	величину этого зазора.Примем за радиус земли расстояние в 6378.1 км*/
	setlocale(0, "");
	Circle Earth, Rope;
	Earth.setRadius(6378.1);
	cout << "******Earth********" << endl;
	cout << "radius\t"<< (int)Earth.Radius <<"(km)"<< endl;
	cout << "Ference\t"<< (int)Earth.Ference << endl;
	cout << "Area\t" <<  (int)Earth.Area << endl;

	Rope.setFerence(0.001);
	cout << "******Rope********" << endl;
	cout << "radius\t" << Rope.Radius << endl;
	cout <<"Ference\t" << Rope.Ference << endl;
	cout << "Area\t"   << Rope.Area << endl;
	Rope.setArea((int)Earth.get_Ference() + Rope.get_Ference());
	cout << "Просвет:\t" << Rope.get_Radius() - (int)Earth.get_Radius() << endl;
	_getch();
	return 0;

}