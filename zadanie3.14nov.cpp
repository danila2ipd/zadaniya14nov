
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int number;
	cout << "Введите число: ";
	cin >> number;

	cout << "Делители числа " << number << ": ";
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i << " ";

		}
	}
	return 0;

}

     