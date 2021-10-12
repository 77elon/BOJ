#include <iostream>
#include <string>

using namespace std;

int main()
{
    int iter;
    cin >> iter;

    int *score = new int[iter];
    string result = "";

    for (int i = 0; i < iter; i++)
    {
        cin >> result;
        score[i] = 0;
        int add = 1; //순열
        for(unsigned int n = 0; n < result.length(); n++)
        {
            if(result[n] == 'O')
            {
                score[i] += add;
                add++;
            }
            else if (result[n] == 'X')
            {
                add = 1;
            }
        }
    }

    for (int i = 0; i< iter; i++)
    {
        cout << score[i] << endl;
    }
}