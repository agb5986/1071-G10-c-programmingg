#include<stdio.h>
void ararr(int k,int c,int a[])
{
for(int i=0;i<5;i++)
    {
        a[0]=n[i];
        a[1]=m[i];
        if(i==0)
        {
            printf("力道:");
        }else if(i==1)
        {
            printf("氣勁:");
        }else if(i==2)
        {
            printf("根骨:");
        }else if(i==3)
        {
            printf("洞察:");
        }else if(i==4)
        {
            printf("身法:");
        }
       printf("%d\n",a[k]+(a[c])/2);
    }
}
int main()
{
    int a[38];

    int k,c;
    scanf("%d %d",&k,&c);
    ararr(k,c,a);
}
