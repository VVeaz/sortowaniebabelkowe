#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int tab[], int n){
    int t;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1;j++){
            if(tab[j]>tab[j+1]){
                t=tab[j+1];
                tab[j+1]=tab[j];
                tab[j]=t;
            }
        }
    }

}
void f(int tab[], int n){
    srand(time(0));
    for(int i=0; i<n;i++){
        tab[i]=rand()%(60-29)+30;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int tab[n];
    f(tab,n);
    for(int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    sort(tab,n);
    for(int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}
