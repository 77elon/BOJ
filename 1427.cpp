#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int input;
    int N[10];
    memset(N, 0, sizeof(N));

    cin >> input;
    
    int index = 0;
    while (input != 0)
    {
        N[index] = input % 10;
        input /= 10;
        index++;
    }

    sort(N, N + index, greater<int>());

    for (int i = 0; i < index; i++)
    {
        cout << N[i];
    }
    cout << "\n";

}
