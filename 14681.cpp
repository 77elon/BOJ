#include <iostream>

using namespace std;

int main()
{   
    int a, b;

    cin >> a >> b;

    if(a > 0) //1, 4 분면
    {
        if(b > 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "4" << endl;
        }
    }
    else // 2, 3 분면
    {
        if(b > 0)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
}