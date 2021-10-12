#include <iostream>

using namespace std;

int main()
{


    int a, b;

    cin >> a >> b; //H, M

    if(b < 45)
    {
        a -= 1;
        a += 24;
        a %= 24;
        b -= 45;
        b += 60;
        b %= 60;
    }
    else 
    {
        b -= 45;
    }
    cout << a << " " << b << endl;
}