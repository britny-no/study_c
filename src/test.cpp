#include <iostream>
#include <stdlib.h>

struct info {
    int old;
    int key;
    char name[30];
};

int main(void){
    // char a[2] = "4";
    int a = 1;

    printf("%d\n",sizeof(a));
    printf("%d\n", sizeof((double)a));
    printf("%d\n",sizeof(a));

    return 1;
}