
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Введите два числа: \n";
	cin >> x >> y;
	int *px = &x;
	int *py = &y;
	int srarifm = (*px + *py) / 2;
	cout << "Ср. ариф. чисел = " << srarifm << "\n";



	return 0;
}