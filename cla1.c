#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y,w,z;
    scanf("%d %d",&x,&y);
    w = x/y;
    z=x%y;
    printf("Quotient:%d\n",w);
    printf("Remainder:%d",z);

    return 0;
}
