#include <iostream>
#include <cstring>

#define SIZE 1000000

using namespace std;

bool result[SIZE + 1];

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    std::ios::sync_with_stdio(false);

    memset(result, 1, sizeof(result));
    result[1] = false;

    int input1 = 0, input2 = 0;
    cin >> input1 >> input2;

    for (int p = 2; p <= input2; p++)
    {
        if(result[p] == true)
        {
            for (int i = 2; p * i <= input2; i++)
            {
                result[p * i] = false;
            }
        }
    }

    for (int i = input1; i <= input2; i++)
    {
        if (result[i])
        {
            cout << i << endl;
        }
    }

}