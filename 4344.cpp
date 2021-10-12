#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int iter, index;

    cin >> iter;

    for(int i = 0; i <iter; i++ )
    {
        cin >> index;
        int *ary = new int[index];
        double result = 0.0;
        double ratio = 0.0;
        for(int n =0; n < index; n++)
        {
            cin >> ary[n];
        }
        for(int n =0; n < index; n++)
        {
            result += ary[n];
        }
        result /= index;
        for(int n =0; n < index; n++)
        {
            if(ary[n] > result)
            {
                ratio++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << ratio / index * 100 << "%" << endl;
    }
}