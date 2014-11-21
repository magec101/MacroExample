#include <stdio.h>
#include <stdlib.h>

#define square(x) x*x

int macroExampleMain(int num1, int num2) {
   return  (square(num1+num2));
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char* argv[]){
    int num1, num2;
    num1 = num2 = 1;
    if (argc > 2) {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
    }
    printf("Boadmass: %d\n", macroExampleMain(num1, num2));
    return 0;
}

#endif