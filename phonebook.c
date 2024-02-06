#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double convert(char *hex);

int main(void)
{
    char s[10];
    printf("Hexadecimal number: ");
    scanf("%s", s);

    double result = convert(s);
    
    printf("%.0f", result);

    return 0;
}

double convert(char *hex)
{
    double dec = 0.0;
    int power = 0;

    while (strlen(hex) < 1)
    {
        return -1;
    }

    for (int i = strlen(hex) - 1; i >= 0; i--)
    {
        if (isdigit(hex[i]))
        {
            dec += ((hex[i] - '0') * pow(16, power));
            power++;
        }
        else
        {
            switch (hex[i])
            {
                case 'a':
                    dec += 10 * pow(16, power);
                    power++;
                    break;
                
                case 'b':
                    dec += 11 * pow(16, power);
                    power++;
                    break;
                
                case 'c':
                    dec += 12 * pow(16, power);
                    power++;
                    break;
                
                case 'd':
                    dec += 13 * pow(16, power);
                    power++;
                    break;
                
                case 'e':
                    dec += 14 * pow(16, power);
                    power++;
                    break;
                
                case 'f':
                    dec += 15 * pow(16, power);
                    power++;
                    break;
        
                default:
                    break;
            }   
        }
    }
    return dec;
}
