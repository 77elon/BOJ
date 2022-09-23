#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int count = 0;
    cin >> count;

    int input[50]; //50보다 작은 수만큼 제시되므로...
    memset(input, 0, sizeof(input));

    for (int i = 0; i < count; i++)
    {
        cin >> input[i];
    }

    int result = 0;

    sort(input, input + count);
    result = input[0] * input[count - 1];

    cout << result << "\n";
}