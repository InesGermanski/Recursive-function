#include <stdio.h>

int nextDivisibleByK(int currentNumber, int divisible)
{
    if ((currentNumber + 1) % divisible == 0)
    {
        return currentNumber + 1;
    }
    nextDivisibleByK(currentNumber + 1, divisible);
}

int main()
{
    int k;
    int A, B;
    scanf("%d%d%d", &A, &B, &k);
    for (A = A; A <= B; A++)
    {
        printf("%d -> %d\n", A, nextDivisibleByK(A, k));
    }
    return 0;
}
