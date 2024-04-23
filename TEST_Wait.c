#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char *argv[]) {

    if (fork() == 0) // this is a child
    {
        printf(1,"Child Runing %d\n", 10);
    }
    else
    {
        int status = 0;
        wait(&status);
        printf(1,"sssssssss %d\n", status);
    }

    exit(-99);
}