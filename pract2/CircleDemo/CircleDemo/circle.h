#include <iostream>
#include <math.h>
#include <conio.h>
#include <cmath>
#define pi 3.14159

class Circle {


	/*
	Radius - ������ 
	Ference - ����� ���������� 
	Area - ������� ����� */

public:

	void setRadius(double set_Rad) {

		Radius = set_Rad;
		Ference = 2 * pi * Radius;
		Area = pi *  pow(Radius, 2);
	}

	void setFerence(double set_Fer) {

		Ference = set_Fer;
		Radius = Ference / (2 * pi);
		Area = pi * pow(Radius, 2);
	}

	void setArea(double set_Ar) {

		Area = set_Ar;
		Radius = sqrt(Area / pi);
		Ference = 2 * pi * Radius;
	}

	double get_Radius() {
		return Radius;
	}
	double get_Ference() {
		return Ference;
	}
	double get_Area() {
		return Area;
	}
	public:
	double Radius, Ference, Area;

};