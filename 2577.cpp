#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main ()
{
    int ary[10] = {0, };
    int input1, input2, input3, result, length;

    cin >> input1 >> input2 >> input3;
    result = input1 * input2 * input3;

    //cout << result << endl;
    //cout << length << endl;
    //for first digit

    while(result > 0)
    {
        ary[result % 10]++;
        result /= 10;
    }
    
    for(int i= 0; i< 10; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;

}