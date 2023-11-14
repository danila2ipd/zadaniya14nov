
#include <iostream>

using namespace std;

int SumDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    setlocale(LC_ALL, "russian");
    int n;
    cout << "Ввдите число: "; cin >> n;

    cout << SumDigits(n) << endl;
    return 0;
}

