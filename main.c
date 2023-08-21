#include <stdio.h>
#include <stdlib.h>

int main(){
int t[6];
int ts[6];
int n,i;
for(i=0;i<6;i++){
    printf("enter a number t[%d]=",i+1);
    scanf("%d",&t[i]);
}

for(i=0;i<6;i++){
    ts[5-i]=t[i];
}printf("les elements du tableau :\n");
for(i=0;i<6;i++){
    printf("t[%d]=%d\n",i,ts[i]);
}
    return 0;
}
