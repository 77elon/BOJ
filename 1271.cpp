#include <iostream>


using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int input1 = 0, input2 = 0;

    cin >> input1 >> input2;

    if(!input2)
    {
        cout << input1 / input2 << " ";
    }
    cout  << input1 % input2 << "\n";

}