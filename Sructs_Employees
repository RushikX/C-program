#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp{
    char name[50];
    int age;
    char position[50];
    char doj[50];
};

void Name(struct emp e[], int n){
    int i,j;
    struct emp t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(e[i].name,e[j].name)>0){
                t=e[i];
                e[i]=e[j];
                e[j]=t;
            }
        }
    }
}

void Join(struct emp e[], int n){
    int i,j;
    struct emp t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(e[i].doj,e[j].doj)>0){
                t=e[i];
                e[i]=e[j];
                e[j]=t;
            }
        }
    }
}

int main(){
    int n,i;
    scanf("%d",&n);
    struct emp e[n];
    for(i=0;i<n;i++){
        scanf("%s",e[i].name);
        scanf("%d",&e[i].age);
        scanf("%s",e[i].position);
        scanf("%s",e[i].doj);
    }
    Name(e,n);
    for(i=0;i<n;i++){
        printf("%s\n",e[i].name);
        printf("%d\n",e[i].age);
        printf("%s\n",e[i].position);
        printf("%s\n\n",e[i].doj);
    }
    Join(e,n);
    for(i=0;i<n;i++){
        printf("%s\n",e[i].name);
        printf("%s\n",e[i].position);
        printf("%s\n",e[i].doj);
    }
    return 0;
}
