#include <stdio.h>

int main(void){
        double value1, value2, pi=3.141592;
        value1 = 123-100;
        value2 = 234;
        value2 -= 100;
        value2++;
        printf("%d\n", (int)(value1+value2));   //キャスト変換
        printf("%6.2f\n%d\n", pi, 123456);
        return 0;
}
