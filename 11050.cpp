#include <bits/stdc++.h>

using namespace std;

int bino_coef(const int & times, const int & got)
{
    if (times == got || got == 0)
    {
        return 1;
    }
    return bino_coef(times -1, got) + bino_coef(times -1, got - 1);
}

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int times =0, got = 0;
    cin >> times >> got;

    cout << bino_coef(times, got) << "\n";
}