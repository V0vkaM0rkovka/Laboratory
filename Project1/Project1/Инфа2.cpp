//����� ����������� �������
// 
//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <clocale>
//using namespace std;
//
//double eps;
//double f(double x)
//{
//   return x - 2 + sin(1 / x);
//}
//
//double n(double x1,double(*f)(double), double x2)
//{
//    cout << "������� ��������: " << endl;
//	cin >> eps;
//    double x;
//    int c = 0;
//    double* ptrx = &x;
//    double* ptrx1 = &x1;
//    double* ptrx2 = &x2;
//    int* ptrc = &c;
//    int start = clock();
//	if (f(*ptrx1) == 0)
//	{
//		cout << "������ ��������� � �������� ��������� ���������: " << *ptrx1 << endl;
//	}
//	if (f(*ptrx2) == 0)
//	{
//		cout << "������ ��������� � �������� ��������� ���������: " << *ptrx2 << endl;
//	}
//    while (abs(x2 - x1) > eps)
//    {
//        ++*ptrc;
//        *ptrx = (x2 + x1) / 2;
//        cout << "������������ ������: " << *ptrx << " ��� ��������: " << *ptrc << endl;
//        if (f(*ptrx) * f(*ptrx1) < 0)
//        {
//            *ptrx2 = x;
//        }
//        else
//        {
//            *ptrx1 = x;
//        }
//    }
//    cout << "�������� ��������: " << *ptrx2 << " ��� ��������: " << c << endl;
//    int end = clock();
//    cout << "����� ���������� � �������������: " << (end - start);
//    return x2;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    cout << n(1,f, 2) << endl;
//}



//����� ��������
// 
//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <clocale>
//using namespace std;
//
//double f(double x)
//{
//	return 2 - sin(1 / x);
//}
//void f1(double x, double (*f)(double))
//{
//	int k = 0;
//	double eps;
//	cout << "������� ��������: " << endl;
//	cin >> eps;
//	int start = clock();
//	while (abs(x - f(x)) > eps)
//	{
//		++k;
//		x = f(x);
//		cout << "������������ ������: " << x << " ��� ��������: " << k << endl;
//	}
//	int end = clock();
//	cout << "������ � ������ ��������: " << x << " ���-�� ��������: " << k << endl;
//	cout << "����� ���������� � �������������: " << (end - start);
//}
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	f1(2, f);
//}

//����� �����������(�������)
// 
//#include <iostream>
//#include <clocale>
//#include <cmath>
//#include <ctime>
//using namespace std;
//
//double eps;
//
//double F(double x)
//{
//	return x - 2 + sin(1 / x);
//}
//
//double F1(double x)
//{
//	return 1 + cos(1 / x) * ((-1) / pow(x, 2));
//}
//
//double F2(double x)
//{
//	return (2 * cos(1 / x) * x - sin(1 / x)) / pow(x, 4);
//}
//
//void n(double a, double(*f)(double), double b)
//{
//	cout << "������� ��������: ";
//	cin >> eps;
//	int start = clock();
//	double x0, x;
//	int k = 0;
//	if (F(a) * F2(a) == 0)
//	{
//		cout << "������ ���������: " << a;
//	}
//	else
//	{
//		if (F(b) * F2(b) == 0)
//		{
//			cout << "������ ���������: " << b;
//		}
//		else
//		{
//			x0 = 1;
//			x = 2;
//			while (abs(x0 - x) > eps)
//			{
//				++k;
//				if (F(a) * F2(a) > 0)
//				{
//					x = x0 - F(x0) / F1(x0);
//				}
//				else
//				{
//					x = x0 - F(x0) / F1(x0);
//				}
//				x0 = x - F(x) / F1(x);
//				cout << "������ ��� " << k << " �������� x0 = " << x0 << '\n';
//				x = x0 - F(x0) / F1(x0);
//			}
//			cout << "������������ ������ ���������: " << x0 << '\n' << "���-�� ��������: " << k << '\n';
//			int end = clock();
//			cout << "����� ���������� ��������� (� �������������): " << (end - start);
//		}
//	}
//}
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	n(1, F, 2);
//	return 0;
//}