#pragma once
#include<iostream>
using namespace std;

void GetVolumeSurface(double wide, double height, double depth, double* volume, double* surface) {

	*volume = wide * height * depth;
	*surface = wide * height * 2 + depth * height * 2 + wide * depth * 2;
}
