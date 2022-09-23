#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(const int& input)
{
    if (input <= 1)
    {
        return false;
    }
    if (input % 2 == 0)
    {
        return input == 2 ? true : false;
    }

    for (int i = 3; i <= sqrt(input); i++)
    {
        if (input % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int input1 = 0, input2 = 0;
    cin >> input1 >> input2;

    for (int i = input1; i <= input2; i++)
    {
        if (isPrime(i))
        {
            cout << i << "\n";
        }
    }
}