#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(){
    int i,j=0;
    double vt[N];
    int rand();
    double *p;
    p = vt;
    
    for(i = 0; i < N; i++){
        vt[i]=1 + rand() % 100;
        printf("%.2f\n", vt[i]);
    }

    puts("\nRecorriendo el vector con puntero:\n");
    while (j != N)
    {
        printf("%.2f\n",*p);
        p++;
    }

    return 0;
}