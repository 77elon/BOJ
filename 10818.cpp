#include<iostream>

using namespace std;

int main()
{
    int size, max = 0, min = 0;
    cin >> size;

    int * ary = new int [size];
    
    for (int i = 0; i<size; i++)
    {
        cin >> ary[i];
        if(ary[i] > ary[max])
        {
            max = i;
        }
        if(ary[i] < ary[min])
        {
            min = i;
        }
    }
    cout << ary[min] << " " << ary[max] << endl;
}