#include <iostream>

using namespace std;

int main()
{
    int size, max = 0;
    double result = 0.0; 
    cin >> size;

    int *ary = new int[size];
    for(int i = 0; i<size; i++)
    {   
        cin >> ary[i];
    }
    for(int i = 0; i<size; i++)
    {
        if(ary[i] > ary[max])
        {
            max = i;
        }
    }
    for(int i = 0; i<size; i++)
    {
        result += (double) ary[i] / ary[max] * 100;
    }
    result /= size;

    cout <<(double)result << endl;

}