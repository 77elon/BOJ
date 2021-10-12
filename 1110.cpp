#include<iostream>

using namespace std;

int main()
{
    int a, count, num1, num2, result, real_result, temp;
    cin >> a;
    temp = a;
    count = 1;

    while(1)
    {
        num1 = temp / 10;
        num2 = temp % 10;

        result = (num1 + num2) % 10;
        real_result = num2 * 10 + result;
        //cout << real_result << endl;
        temp = real_result;
        if(a == temp)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
}