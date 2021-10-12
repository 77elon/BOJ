#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int iter;
    cin >> iter;

    int a, b;

    for (int i = 0; i<iter; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a + b << "\n";
    }


}