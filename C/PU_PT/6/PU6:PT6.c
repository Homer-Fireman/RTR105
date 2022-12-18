#include <stdio.h>

// without arguments and without return
void print1() {
printf("Hello World!\n");
}

// with arguments and without return
void print2(char* message) {
printf("%s\n", message);
}

// without arguments and with return
int memory() {
return 420;
}

// with arguments and with return
int math(int a, int b) {
return a + b;
}

int main() {
print1(); 
print2("I should not return anything."); 

int num = memory(); 
printf("I can return: %d\n", num);

int res = math(1, 3); 
printf("quick math: %d\n", res);

return 0;
}
