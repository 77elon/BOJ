#include <iostream>
#include <cstring>
#include <cmath>

#define SIZE 100

using namespace std;

bool isPrime(const int & input)
{
    if(input <= 1)
    {
        return false;
    }
    else if (input % 2 == 0)
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
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int count = 0;
    int num = 0;
    cin >> count;

    int input_ary[SIZE];
    memset(input_ary, 0, sizeof(input_ary));

    for (int i = 0; i < count; i++)
    {
        cin >> input_ary[i];
        if(isPrime(input_ary[i]))
        {
            num++;
        }
    }

    cout << num << "\n";

}