#include <iostream>
#include <cmath>

using namespace std;

int combi_result [30][30];

int combi(int n, int r) {
    if (combi_result[n][r] > 0) {
        return combi_result[n][r];
    }
    if (n == r || r == 0) {
        return combi_result[n][r] = 1;
    }
    return combi(n - 1, r - 1) + combi(n - 1, r);
}

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int count = 0;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int input1 = 0, input2 = 0;
        cin >> input1 >> input2;

        int result = combi(input2, input1);
        cout << result << "\n";
    }
}


