#include <stdio.h>

int sum(int, int);


int main(void) {
     printf("%d\n", sum(50,100));
     
     return 0;
}


int sum(int left, int right) {
     int num;
     num = left+right;
     
     return num;
}
