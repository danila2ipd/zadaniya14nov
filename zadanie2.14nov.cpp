

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int n = 10;
	int first = 0, second = 1, next;
	cout << "Первые 10 чисел: ";
	
	for (int i = 1; i <= n;i++)
	{
		cout << first << " ";
		next = first + second;
		first = second;
		second = next;
	}
	return 0;
}
