// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int m, n, HCF;
//     printf("Enter two numbers:");
//     scanf("%d %d", &m, &n);

//     HCF = (m < n) ? m : n;

//     while (1)
//     {
//         if (m % HCF == 0 && n % HCF == 0)
//         {
//             printf("The LCM of %d and %d is = %d", m, n, HCF);
//             break;
//         }
//         HCF--;
//     }

//     printf("\n");

//     return 0;
// }
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int m, n, i, HCF;
    printf("Enter two number:");
    scanf("%d %d", &m, &n);
    
    for(i=1; i<=m && i<=n; i++)
    {
        if(m%i == 0 && n%i==0)
            HCF = i;
    }
    printf("The value of HCF is %d", HCF);
    return 0;
}