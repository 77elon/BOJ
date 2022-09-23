#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 10001

bool result_ary[SIZE];

void self_number()
{
    for (int i = 1; i < SIZE; i++)
    {
        int result = i;
        int temp = i;
        while (temp != 0)
        {
            result += temp % 10;
            temp /= 10;
        }
        //cout << i << endl;
        result_ary[result] = true;
    }
}

int main()
{
    memset(result_ary, 0, sizeof(result_ary));
    self_number();
    for (int i = 1; i < SIZE; i++)
    {
        if (!result_ary[i])
        {
            cout << i << "\n";
        }
    }

}