// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

#include<stdio.h>

int main(){
    int c, count = 0;

    while((c = getchar()) != EOF){
        if(c == '\n' || c == ' ' || c == '\t')
            count++;
    }

    printf("\n%s\t%d\n", "num of blanks, tabs and new lines -> ", count);
    return 0;
}