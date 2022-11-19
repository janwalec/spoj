#include <iostream>
#include <iomanip>
#define PI 3.141592654
using namespace std;

float przyblizenie(double a);

int main()
{
	double radius;
	double distance;
	cin >> radius;
	cin >> distance;

	radius = radius * radius;
	distance = distance * distance/4;
	

	double equation = PI * (radius - distance);
	cout << setprecision(2) << fixed << equation;
}

float przyblizenie(double a)
{
	float temp = a * 100;
	int b = (int)temp;
	temp = (float)b / 100;
	return temp;
}