#include<stdio.h>
#include<math.h>
int main(){
    int num,r,c=0,result=0,count=0,p=1,q;
    printf("enter number:");
    scanf("%d",&num);
    q=num;
    while (q!=0){
        q=q/10;
        c++;
    }
    count=c;
    q=num;
    while (q!=0){
        r=q%10;
        while (count!=0){
            p=p*r;
            count--;
        }
        result+=p;
        q=q/10;
        count=c;
        p=1;
    }
    if (result==num){
        printf("%d is armstrong number",num);
    }
    else{
    printf("%d is not armstrong number",num);
    }
    return 0;
}
    