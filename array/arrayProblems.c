#include <stdio.h>
/*                         //*** 1 enter 10 elements***

int main()
{
    int i,n,a[10];
    printf("enter the 10 element of array");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d",&a[i]);
    }
}*/

                         //*** 2 reverse elements***
                         
/*int main()
{
    int i,j,n,a[50];
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("elements");
        scanf("%d",&a[i]);
    }
    printf("entered array is");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\n reverse of the array is");
    for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
     return 0;
}*/


         //           ****3 addition*****
/*int main()
{
    int i,j,n,a[50],sum;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("elements of a");
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    printf("sum of the array element is %d",sum);
     return 0;
}
*/


//    *********   4 copy array  ****************
/*int main()
{
    int i,n,a[10],b[10];
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("copied array is");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}*/

//        5.************** duplicate *******************
 /* int main()
{
    int i,j,n,a[50];
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
    {
        if(a[i]==a[j]&&i!=j)
             {
                 if(i<j)
                 {
                     break;
                 }
                   printf("duplicate elements are");
                  printf("%d\n",a[i]);
             }
     }
    }
}*/

//          9. ***** max && min *****
/*int main()
{
    int i,n,a[10],max,min;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
       else if(a[i]<min)
        min=a[i];
    }  
        printf("\nmaximum element in array is %d",max);
        printf("\nminimum element in array is %d",min);
}*/



//             *************even odd**************
/*#include<stdio.h>
int main()
{
    int i,n,a[10];
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    printf("even elements are");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d, ",a[i]);
        }
    }
printf("\nodd elements are");
     for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d, ",a[i]);
        }
    }
}*/
        
//                  16***** second largest*****
/*int main()
{
    int i,n,a[10],max=0,s=0;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            s=max;
            max=a[i];
        }
        else if(a[i]>s)
        {
            s=a[i];
        }
    }
    printf("\nmaximum in array is %d",max);
    printf("\nsecond maximum in array is %d",s);
    
}*/

//                        17***** second smallest******

/*int main()
{
    int i,n,a[10],min,s;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            s=min;
            min=a[i];
        }
        else if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("\nminimum in array is %d",min);
    printf("\nsecond minimum in array is %d",s);
    
}*/

//          8. ****** frequency*****
/*int main()
{
    int i,n,j,a[10],c,k;
    printf("enter the size of array");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("enter elements a[%d]- ",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         k=1;
         c=0;
         for(j=0;j<n;j++)
         {
            if(a[i]==a[j]&&i!=j)
            {
                k++;
                if(j>i)
                {
                    c--;
                }
            }
         }
         if(c==0)
           printf("%d comes %d times\n",a[i],k);
     }  
}*/

//          ******sorting******asc
/*
int main()
{
    int i,j,n,a[10],temp;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}
*/
//                          *****desc******
/*int main()
{
    int i,j,n,a[10],temp;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}*/
//       ******insert at position (unsorted)*******
/*int main()
{
    int i,j,n,a[10],p,val;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    printf("enter the position of array");
    scanf("%d",&p);
    printf("enter the value array");
    scanf("%d",&val);
    
    if(p>n)
    {
        printf("invalid position");
    }
    else
    {
        for(i=n;i>=p;i--)
    a[i]=a[i-1];
    a[p-1]=val;
    for(i=0;i<=n;i++)
    {
    printf("%d ",a[i]);
    }
}
}*/
//    ******delete from position*****
/*int main()
{
    int i,j,n,a[10],p;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    printf("enter the position of array");
    scanf("%d",&p);
    //printf("enter the value array");
    //scanf("%d",&val);
    
    if(p>n)
    {
        printf("invalid position");
    }
    else
    {
        for(i=p;i<=n-1;i++)
    a[i-1]=a[i];
    
    for(i=0;i<n-1;i++)
    {
    printf("%d ",a[i]);
    }
}
}
*/
//              ******insert value in sorted array*******
/*int main()
{
    int i,j,n,a[10],p,val,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
            }
        }
    }
    printf("sorted array is");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    
    printf("enter the position of array");
    scanf("%d",&p);
    printf("enter the value array");
    scanf("%d",&val);
    if(p>n)
    {
        printf("invalid position");
    }
    else
    {
    for(i=n;i>=p;i--)
      { 
          a[i]=a[i-1];
      }
        a[p-1]=val;
    for(i=0;i<=n;i++)
        {
        printf("%d ",a[i]);
        }
}
}
*/
//          ******merge*****
/*int main()
{
    int i,j,n,a[10],b[10],temp;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("\n%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
            }
        }
    }
    
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]<b[j])
            {
               temp=b[j];
               b[j]=b[i];
               b[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}*/

// ******** unique*******
/*
int main()
{
    int i,j,k,n,a[10],b[10],temp;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("\n%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i]&&j!=i)
                k++;
        }
        if(k==0)
        {
            printf("%d is unique",a[i]);
        }
    }
} 
*/

