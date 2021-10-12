#include <iostream>

using namespace std;

int main()
{
    int ary[9] = {};
    int max = 0;

    for(int i = 0; i < 9; i++)
    {
        cin >> ary[i];
        if(ary[i] > ary[max])
        {
            max = i;
        }

    }
    cout << ary[max] << endl << max + 1 << endl;
}