#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct std{
   int grade;
   char name[];
};

int GetMax(struct std std[],int x){
    int m,max = std[0].grade;
	for(m=1;m<x;m++){
        if(std[m].grade>max){
            max = std[m].grade;
        }
    }
    return max;
}

int main(){
    int N,i,j;
    scanf("%d\n",&N);
    struct std std[N];
    for(i=0;i<N;i++){
        scanf("%d %s",&std[i].grade,&std[i].name);
    }
    int max=0;
    max=GetMax(std,N);
    int t;
    for(j=1;j<=N;j++){
        if(std[j].grade==max){t=j;}
    }
    printf("%s",std[t].name);
}

