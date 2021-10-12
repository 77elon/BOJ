#include <iostream>

using namespace std;

int main()
{
    int ary[10] = {0, };

    int result = 0, chk;

    for(int i= 0; i< 10; i++)
    {
        cin >> ary[i];
        ary[i] %= 42;
    }

    for(int i=0; i<10; i++)
    {
        chk = 0;
        while(1)
        {
            if(chk == 10)
            {
                chk = 0;
                break;
            }
            if(i == chk)
            {
                chk++;
                result++;
                continue;
            }
            else if(ary[i] == ary[chk])
            {
                break;
            }
            chk++;
        }
    }

    cout << result << endl;
}