#include <iostream>
#include<cmath>

using namespace std;


unsigned long long Sequence(unsigned long long n)
{
    if (n > 1)
    {
        return (Sequence(n - 1) * Sequence(n - 1) - 2);
    }
    else
    {
        return 4;
    }
}

unsigned long long Mersenne(unsigned long long p)
{
    return powl(2, p) - 1;
}

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int input1 = 0, input2 = 0;

    cin >> input1 >> input2;

    int start = log2(input1) + 1;
    int end = log2(input2) + 1;

    for (int i = start; i <= end; i++)
    {
        if (Sequence(i - 1) % Mersenne(i) == 0)
        {
        cout << Mersenne(i) << " is a prime number\n";
        }
        else
        {
            cout << Mersenne(i) << " is not a prime number\n";
        }
    }


}