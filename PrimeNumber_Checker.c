#include <stdio.h>

int main()
{
    int n, not_prime = 0;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        not_prime = 1; // 0 and 1 are not prime numbers
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                not_prime = 1; // n is divisible by i, hence not prime
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}
