
//write a program for finding discounts
#include <stdio.h>

int main() {
    
    int a[100],i,n,dis,sum=0,bill,totalbill;
    printf("Enter the total product:");
    scanf("%d",&n);
    printf("Enter the price:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Price of %d are is :",n);
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\n");
    printf("Total product price is:%d\n",sum);
    printf("Enter the discount amount:");
    scanf("%d",&dis);
    bill=dis*100/sum;
    printf("discount percentage is:%d%\n",dis);
    totalbill=sum-bill;
    printf("Payable amount:%d\n",totalbill);

    return 0;
}
