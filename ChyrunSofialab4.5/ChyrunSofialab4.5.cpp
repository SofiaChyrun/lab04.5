// ChyrunSofialab4.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_04_5.cpp
// < Чирун Софія >
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру 
// Варіант 18

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x;
	double y;
	double R;
    srand((unsigned)time(NULL));
	cout << "R = "; cin >> R;
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		
		if ((x > 0 && y > 0 && y <= x && y <= sqrt(pow(R, 2) - pow((x - R), 2)) + R) ||
			(x < 0 && y < 0 && y >= x && y <= sqrt(pow(R, 2) - pow((x + R), 2)) - R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
		{
			x = 4 * R * rand() / RAND_MAX - 2*R;
			y = 4 * R * rand() / RAND_MAX - 2*R;
			if ((x > 0 && y > 0 && y <= x && y <= sqrt(pow(R, 2) - pow((x - R), 2)) + R) ||
				(x < 0 && y < 0 && y >= x && y <= sqrt(pow(R, 2) - pow((x + R), 2)) - R))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}

