#include <stdio.h>

double combination(int n, int m) {
	if (n == m)
		return 1;
	if (m == 1)
		return n;
	return combination(n - 1, m - 1) + combination(n - 1, m);
}


int main()
{
    int count = 0;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int input1 = 0, input2 = 0;

        scanf("%d %d", &input1, &input2);

        int result = combination(input2, input1);
        printf("%d\n", result);
    }
}


