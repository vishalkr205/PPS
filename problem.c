#include <stdio.h>

int main()


// program for natural number to 10

// {
//     int i=1;
//     while (i<11)
//     {
//         printf("%d ", i);/* code */
//         i++;
//     }
//     return 0;
// }

//program for first 10  even number

// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d ",i*2);
//         i++; 
//     }
//     return 0;

// }

// {
//     int n=5,i=1;
//     // printf("how many numbers you need");
//     // scanf("%d",&n);
//     while (i<=5)
//     {
//         printf("%d ",2*n-1);
//         n--;
//         i++;
//     }
//     return 0;
// }

// program for area of square

// {
//     int i=4;
//     printf("%d ",i*i);
// }

// program for sum of n natural number

// {
//     int i=1,n;
//     scanf("%d",&n)
//     for (size_t i = 1; i < count; i++)
//     {
//         printf("%d",)/* code */
//     }
    
// }

//program for table to-10
// {   int i,j;
//     for ( i=1; i<=10; i++)
//     {
        
//         for ( j=1; j<=10; j++)
//         {
//             printf("%d ", j*i);
//         }
//         printf("\n");
        
//     }
// }

// star pattern


// 1. 
// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j= 0; j <=5 ; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 2. 
    
// {
//     int i,j;

//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= i ; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 3. digit

// {
//     int i,j;

//     for  (i = 1; i < 5; i++)
//     {
//         for ( j = 1; j <= i ; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4. 

// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5. 
// {
//         int i,j;

//     for ( i = 5; i >= 1 ; i--)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 6.

// {
//     int i,j;

// for (i = 5; i >=1 ; i--)
// {
//     for ( j = 1; j <= i; j++)
//     {
//         printf("%d ", j);
//     }
//     printf("\n");
// }
// return 0;
// }


// 7. 
    // {
    // int i,j;
    // for ( i = 5; i >= 1; i--)
    // {
    //     for ( j = 1; j <= 9; j++)
    //     {
    //         if (j>=i && j<=10-i)
    //         {
    //             printf("*");
    //         }
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    //     return 0;
    // }
    

// 8.
// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 9 ; j++)
//         {
//             if (j<=10-i && j>=i)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 9.
//     {
//     int i,j;
    
//         for ( i = 5; i >= 1; i--)
//         {
//         for ( j = 1; j <= 9; j++)
//         {
//             if (j>=i && j<=10-i)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//         for ( i = 6; i <= 10; i++)
//         {
//         for ( j = 1; j <= 9 ; j++)
//         {
//             if (j <= 15-i && j >= i - 5)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 10.
// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for ( i = 6; i <= 9; i++)
//     {
//         for ( j = 1; j <= 10-i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 11.
    // {
    //     int i,j;
    //     for ( i = 1; i <= 5; i++)
    //     {
    //         for ( j = 1; j <= i ; j++)
    //         {
    //             if ((i + j) % 2 == 0)
    //             {
    //                 printf("1");
    //             }
    //             else
    //                 printf("0");
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }

    // 12.
    // {
    //     int i,j;
    //     for ( i = 1; i <= 4; i++)
    //     {
    //         for ( j = 1; j <= i; j++)
    //         {
    //             printf("%d ", j);
    //         }
    //         for ( j = i + 1 ; j <= 8-i; j++)
    //         {
    //             printf("  ");
    //         }
            
    //         for ( j = i; j >= 1; j--)
    //         {
    //             printf("%d ", j);
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }

    // 13.
    {
        int i,j,k;
        k=1;
        for ( i = 1; i <= 5; i++)
        {
            for ( j = 1; j <= i; j++)
            {
                printf("%d ", k);
                k++;
            }
            printf("\n");
        }
        return 0;
    }