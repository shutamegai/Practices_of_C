#include <stdio.h>

int main(void) {
     int array[] = {12, 23, 34, 45};
     int array_count = sizeof(array)/sizeof(array[0]);
     int i;
     
     for (i=0; i<array_count; i++) {
          printf("array[%d] = %d\n", i, array[i]);
     }
     
     return 0;
}
