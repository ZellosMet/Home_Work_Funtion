#include<iostream>
using namespace std;

//#define FACTORIAL
//#define POWER

int Factorial(int iterat);
double Power(double base, int degree);

void main()
{
	double a, b;
	setlocale(LC_ALL, "ru");

#ifdef FACTORIAL

	cout << "Введите переменные для расчёта факториала: "; cin >> a;	
	if (a < 0)cout << "Нельзя вычислить факториал отрицательного числа!\n";
	if (a > 0)cout << a << "! = " << Factorial(a);

#endif 

#ifdef POWER

	cout << "Введите основание и степень для расчёта "; cin >> a >> b;
	if (b==0) cout << "Число " << a << " в степени " << b << " = " << 1;
	if (b!=0) cout << "Число " << a << " в степени " << b <<" = " << Power(a, b);

#endif 

}

int Factorial(int iterat)
{
	if (iterat == 0) 
	return 1;	
	return iterat * Factorial(iterat - 1);
}

double Power(double base, int degree)
{
	double result = base;
	for (int i = degree < 0 ? degree * (-1) : degree; i > 1; i--)
	{
		result *= base;
	}
	if (degree > 0)
	return result;
	return 1 / result;
	
}