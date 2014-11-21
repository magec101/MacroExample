#include <stdio.h>

const char* macroExampleMain(int argc, char** argv) {
	return "Hello world\n";
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    printf("%s\n", macroExampleMain(argc, argv));
    return 0;
}

#endif