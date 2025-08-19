//  increment
#include <stdio.h>
int main(){
 int age = 10;
 int *ptr = &age;
printf("%u\n" ,ptr);
*ptr++ ;
printf("%u\n" ,*ptr);

    return 0;
}