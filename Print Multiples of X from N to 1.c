#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x;
scanf("%d %d",&n,&x);
for(int i=n;i>0;i--){
    if(i%x==0){
        printf("%d ",i);
    }
    }

}
Sample Input:
10 2
Sample Output:
10 8 6 4 2 
  
