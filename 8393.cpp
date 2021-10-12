#include <iostream>

using namespace std;

int recursive_sum(int result)
{
    if(result == 1)
    {
        return 1;
    }
    else 
    {
        return result += recursive_sum(result - 1);
    }
}

int main()
{
    int input;
    cin >> input;
    cout << recursive_sum(input) << endl;

}