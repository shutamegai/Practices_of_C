#include <stdio.h>
#include <memory.h>


int main(void) {
     int array1[] = {12, 23, 34, 45};
     int array1_count = sizeof(array1)/sizeof(array1[0]);
     int array2[] = {11, 22, 33, 44, 55};
     int array2_count = sizeof(array2)/sizeof(array2[0]);
     int i;
     
     for (i=0; i<array1_count; i++) {
          printf("array1[%d] = %d\n", i, array1[i]);
     }

     memcpy(array2, array1, array1_count);
     
     for (i=0; i<array2_count; i++) {
          printf("array2[%d] = %d\n", i, array2[i]);
     }
     
     return 0;
}
