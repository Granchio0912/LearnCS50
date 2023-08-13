#include<stdio.h>		
			
long atoi(const char S[])
{
    long num = 0;
    int i = 0, sign = 1;
 
    while (S[i] == ' ' || S[i] == '\n' || S[i] == '\t') {
        i++;
    }
 
    if (S[i] == '+' || S[i] == '-')
    {
        if (S[i] == '-') {
            sign = -1;
        }
        i++;
    }
 
    while (S[i] && (S[i] >= '0' && S[i] <= '9'))
    {
        num = num * 10 + (S[i] - '0');
        i++;
    }
 
    return sign * num;
}
 
int main(void)
{ 
    char S[] = "\n-1234567890";
 
    printf("%ld ", atoi(S));
 
    return 0;
}
   
