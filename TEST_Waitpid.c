#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char *argv[]) {

    if (fork() == 0) // this is a child
    {
        fork();
    }
    else
    {
        int status = 0;
        waitpid(14, &status,0);
        printf(1,"STATUS IS: %d\n", status);
    }

    exit(100);
}