#include<stdio.h>
#include<string.h>
char* find_char(char *arr,char* str,char *pos){
    int len1=strlen(arr);
    int len2=strlen(str);
    for(int i=0;i<(len1-len2);i++){
        int j;
        for(j=0;j<len2;j++){
            if(arr[i+j]!=str[j]){
               break;
            }
        }
        if(j==len2){
           *pos=arr[i];
           return pos;
        }
    }
    return NULL;
}
int main(){
    char arr[]="hello world";
    char str[10];
    printf("enter str");
    scanf("%s",str);
    char pos;
    char *result=find_char(arr,str,&pos);
    if(result!=NULL){
        printf("found\n");
    }
    else{
        printf("not found\n");
    }
    return 0;
}
         
