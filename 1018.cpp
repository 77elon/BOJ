#include <iostream>
#include <cstring>

#define min(a, b) a < b ? a : b
using namespace std;


int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    
    
    char input[50][50];
    memset(input, 0, sizeof(input));
    
    int size1 = 0, size2 = 0;

    cin >> size1 >> size2;
    
    int result = 32;
    
    for (int i = 0; i < size1; i++)
    {
        cin >> input[i]; //row input;
    }
    
    
    //for (int i = 0; i < size1; i++)
     //{
     //cout << input[i] << endl; // for test
     //}
    
    for (int i = 0; i< size1 - 7; i++)
    {
        for(int n = 0; n < size2 - 7; n++)
        {
            int count_B = 0, count_W = 0;
            for(int c1 = i; c1 < i + 8; c1++)
            {
                for(int c2 = n; c2 < n + 8; c2++)
                {
                    if((c1 + c2) % 2 == 0)
                    {
                        if(input[c1][c2] == 'W')
                        {
                            count_B++;
                        }
                        else if(input[c1][c2] == 'B')
                        {
                            count_W++;
                        }
                    }
                    else
                    {
                        if(input[c1][c2] == 'W')
                        {
                            count_W++;
                        }
                        else if (input[c1][c2] == 'B')
                        {
                            count_B++;
                        }
                    }
                }
            }
            result = min(result, count_W);
            result = min(result, count_B);
        }
    }
    cout << result << endl;
}


