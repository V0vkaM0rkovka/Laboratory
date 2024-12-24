#include <iostream>
#include <clocale>
#include <cmath>
#include <math.h> 
using namespace std;

double e = exp(1.0);
double f(double x)
{
	return (pow(e, x) - pow(e, x*(-1))) / 2;
}
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
double f1(double x, int n)
{
	if (n == 0)
		{
		return 1;
		}
	else
	{
		return((pow(x, 2 * n + 1) / factorial(2*n+1))) + f1(x, n - 1);
	}
}
double f2(double x, double eps)
{
	double k = 0;
	double func;
	int n = 0;
	do
	{
		func = pow(x, 2 * n + 1) / factorial(2 * n + 1) + f1(x, n - 1);
		k += func;
		++n;
	} while (abs(func) >= eps);
	return k;
}
int main()
{
	setlocale(LC_ALL, "ru");
	double eps = 0.0001;
	double a = 0.1;
	double b = 1;
	double j = (b - a) / 10.0;
	int n = 20;
	for (double x = a; x <= b; x += j)
	{
		double ki = f1(x, n);
		double ki1 = f2(x, eps);
		double y = f(x);
		cout << "X = " << x << " Sn = " << ki << " Se = " << ki1 << " Y= " << y << endl;
	}
	return 0;
}
