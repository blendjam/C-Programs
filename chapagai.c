#include <stdio.h>


// Prime number function(returns 1 for prime)
int prime(num)
{
    int i;
    int count = 0;
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
            count++;
    }
    return count;
}


// Main function
int main()
{   
    int n = 1211;
    int rem,n1;
    int count = 0;
    while(n != 0)
    {
        int c = 0;
        rem = n % 100;
        n1 = rem;

        //Counting the digits in the remainder
        while(n1 != 0)
        {
            n1 /= 10;
            c++;
        }

        // Checking for the prime numbers
        if(c == 2 && prime(rem) == 1)
        {
            count++;
        }
        n /= 10;
    }
    printf("The count is %d",count);

    

}
