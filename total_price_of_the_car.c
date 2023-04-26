
#include <stdio.h>
#include <string.h>
int main()
{
    char car[50];
    int price;
    int price1;
    int net,gst,total,discount;
    printf("Enter the car type:");
    gets(car);
    if(strcmp(car, "hatchback") ==0)
    {
        scanf("%d",&price);
        scanf("%d",&price1);
        total = price+price1;
        discount=total*0.05;
        gst=(total-discount)*.12;
        net =  total-discount+gst;
    }else if (strcmp(car, "sedan") ==0)
    {   scanf("%d",&price);
        scanf("%d",&price1);
        total = price+price1;
        discount=total*0.1;
        gst=(total-discount)*.12;
        net =  total-discount+gst;
    }else if (strcmp(car, "suv") ==0)
    {   scanf("%d",&price);
        scanf("%d",&price1);
        total = price+price1;
        discount=total*0.15;
        gst=(total-discount)*.12;
        net =  total-discount+gst;
    }else if (strcmp(car, "muv") ==0)
    {   scanf("%d",&price); 
        scanf("%d",&price1);
        total = price+price1;
        discount=total*0.20;
        gst=(total-discount)*.12;
        net =  total-discount+gst;
    }
    else
        printf("invalid type");
    printf("net amt is:%d",net);
    
}
