/*
program uses the formula C=(5/9)(F-32) to print the following table of Fahrenheit temperatures and their centigrade or Celsius equivalents:
1 -17
20 -6
40 4
60 15
80 26
100 37
120 48
140 60
160 71
180 82
200 93
220 104
240 115
260 126
280 137
300 148
*/

#include <stdio.h>

void main()
{
    for (int i = 0; i <= 300; i += 20)
    {
        int c = (5 * (i - 32)) / 9;

        printf("%d\t%d\n", i, c);
    }
}