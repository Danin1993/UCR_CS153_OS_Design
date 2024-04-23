#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    //fork();
    //fork();

    //hello();  // Ensure this function is defined somewhere in your project
    //getsb();
    printf(1 ,"\n THIS IS THE ID : %d\n", getsb());  // Changed single quotes to double quotes
    exit();  // Added 0 as argument to properly exit the program
}