
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int sum = 0;
	for (int i = 1; i <= 150; i++)
	{
		if (i % 7 == 0)
		{
			sum += i;
		}
	}
	cout << "Сумма всех чисел кратных 7 до 150:  " << sum << endl;

	return 0;
}


 