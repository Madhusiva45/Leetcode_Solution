#include <limits.h>

int reverse(int n)
{
    int digit, rn = 0;

    while(n != 0)
    {
        digit = n % 10;
        n = n / 10;

        if(rn > INT_MAX / 10 || 
           (rn == INT_MAX / 10 && digit > 7))
        {
            return 0;
        }

        if(rn < INT_MIN / 10 || 
           (rn == INT_MIN / 10 && digit < -8))
        {
            return 0;
        }

        rn = rn * 10 + digit;
    }

    return rn;
}
