#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (result > 0 && (result * 10 + (s[i] - '0')) < result)
            {
                if (sign == -1)
                    return (-2147483648);
                else
                    return (2147483647);
            }
            result = result * 10 + (s[i] - '0');
        }
        else if (result > 0)
            break;
        i++;
    }

    return (result * sign);
}

