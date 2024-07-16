#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    for(int i=n;i>d;i--){
        printf("%d ",(i-d));
        i=i-d+1;
    }

}
Example Input/Output 1:
Input:
20 5

Output:
15 11 8 6 5
