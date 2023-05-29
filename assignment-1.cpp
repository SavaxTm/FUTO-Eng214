#include <iostream>
using namespace std;
//program to calculate area of a circle
int main(void)
{
	const double pi = 3.142;
	double r;
	double d;

	cout << "Input the radius of the circle" << endl;
	cin >> r;
	d = r*r;
	double a;

	a = pi*d;
	cout << "The area of the circle is " << a << endl;
	return (0);
}
