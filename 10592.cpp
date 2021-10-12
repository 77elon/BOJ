#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);


    int a, b;

    while(1)
    {
        cin >> a >> b;
        if(!a && !b) break;
        cout << a + b << "\n";
    }


}