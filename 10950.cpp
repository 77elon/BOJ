#include <iostream>

using namespace std;

int main()
{
    int iter;
    cin >> iter;
    
    //int * ary = new int[iter];

    int a, b;

    for (int i = 0; i < iter; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }

}