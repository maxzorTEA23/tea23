#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
int globalVar = 1;
const int globalVar2 = 0;
static int globalVar3;
void foo();
int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    /*Übung 2*/
    fmt::print("{}, Adresse: {} \n", globalVar, fmt::ptr(&globalVar));
    fmt::print("{}, Adresse: {} \n", globalVar2, fmt::ptr(&globalVar2));
    fmt::print("{}, Adresse: {} \n", globalVar3, fmt::ptr(&globalVar3));
    int localVar = 2;
    static int staticVar = 3;
    fmt::print("{}, Adresse: {} \n", localVar, fmt::ptr(&localVar));
    fmt::print("{}, Adresse: {} \n", staticVar, fmt::ptr(&staticVar));
    /*Übung 3*/
    int*  heapVar = new int(4);
    fmt::print("{}, Adresse: {} \n", *heapVar, fmt::ptr(heapVar));
    /*Übung4*/
    fmt::print("Adresse von foo: {}\\n", fmt::ptr(&foo));
    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
void foo(){
    { fmt::print("Hello from foo!\\n"); }
}
