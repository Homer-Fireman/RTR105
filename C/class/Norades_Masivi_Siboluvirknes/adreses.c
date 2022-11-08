#include <stdio.h>

int main(void){

    int i =10;
    printf("i ir %d\n",i);
    printf("sizeof(i) = %ld (bytes)\n",sizeof(i));

    int *i_pointer = &i;
    printf("i pointer (adress) = %p\n",i_pointer);
    printf("i (found by adress) = %d\n",*i_pointer);
    printf("sizeof(i_pointer) = %ld (bytes)\n",sizeof(i_pointer));

    *i_pointer = *i_pointer+1; //i++ nestrādā jo tam ir zemāka prioritāte un izgūtā vērtība (*i_pointer)
                               //nav vairs saistīta ar mainīgo
    printf("i tagad ir = %d\n",i);

    return 0;
}