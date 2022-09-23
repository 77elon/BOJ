#include <bits/stdc++.h>

using namespace std;

#define SIZE 6

double dist_calc(const double * input, int index)
{
    if(index == 1) //a, b
    {
        return sqrt(pow((input[0] - input[2]), 2.0) + pow((input[1] - input[3]), 2.0));
    }
    else if(index == 2) //b, c
    {
        return sqrt(pow((input[2] - input[4]), 2.0) + pow((input[3] - input[5]), 2.0));
    }
    else if(index == 3) //a, c
    {
        return sqrt(pow((input[0] - input[4]), 2.0) + pow((input[1] - input[5]), 2.0));
    }
    else
    {
        return -1;
    }
}

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    double input[SIZE];
    memset(input, 0, sizeof(input));
    
    for(int i =0; i < SIZE; i++)
    {
        cin >> input[i];
    }

    double m1 = -1, m2 = -1;
    double result = 0.0;
    if(input[0] != input[2] || input[1] != input[3])
    {
        m1 = abs(input[1] - input[3]) / abs(input[0] - input[2]);
    }
    if(input[2] != input[4] || input[3] != input[5])
    {
        m2 = abs(input[3] - input[5]) / abs(input[2] - input[4]);
    }

    if(m1 == m2)
    {
        result = -1.0;
        cout << result << "\n";
        return 0;
    }

    double dist1 = dist_calc(input, 1); // a b
    double dist2 = dist_calc(input, 3); // a c
    double dist3 = dist_calc(input, 2); //b c

    double r_1 = (dist1 + dist2) * 2;
    double r_2 = (dist2 + dist3) * 2;
    double r_3 = (dist1 + dist3) * 2;

    double r_max = max(r_1, max(r_2, r_3));
    double r_min = min(r_1, min(r_2, r_3));

    //cout << dist1 << " " << dist2 << " " << dist3 << " " << r_1 << " " << r_2 << " " << r_3 << endl;


    cout<<fixed;
    cout.precision(16);

    result = r_max - r_min;

    cout << result << "\n";
    
}