#include <stdio.h>
#include <cmath>

#define ret double
using namespace std;

/*ret factorial(double input)
{
    if (input < 1)
    {
        return 1;
    }
    else
    {
        ret return_value = factorial(input - 1);
        ret result = input * return_value;
        return result;
    }
}*/
ret factorial(ret x) { return tgamma(x + 1); }


int main()
{
    int count = 0;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int input1 = 0, input2 = 0;

        scanf("%d %d", &input1, &input2);

        ret fact_result1 = 0, fact_result2 = 0, fact_result3 = 0;

        fact_result1 = factorial(input1);
        fact_result2 = factorial(input2);
        fact_result3 = factorial(input2 - input1);
        
        ret result = fact_result2 / (fact_result1 * fact_result3);
        printf("%.lf\n", result);
    }
}


