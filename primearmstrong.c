#include <stdio.h>
#include <stdbool.h>
void Isprime(int n,bool isprime)
{
    
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            isprime = 0;
            break;
        }
        
    }
    if(isprime == 0)
    
            printf("not a prime Number");
        else
            printf("prime number");
            }
int main()
{
    int n ;
    bool isprime=1;
    scanf("%d",&n);
    Isprime(n,isprime);


}