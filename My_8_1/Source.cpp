#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");


	int number;
	cout << "Введите пятезначное число: ";
	cin >> number;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = number % 10;
		number /= 10;
	}

	for (int i = 4; i >= 0; i--)
		cout << arr[i] << endl;




	return 0;
}
