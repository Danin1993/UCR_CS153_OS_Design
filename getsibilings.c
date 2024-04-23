#include "types.h"
#include "stat.h"
#include "user.h"

int mian(int argc, char *argv[])
{
    fork();
    fork();

    hello();
    //printf('%d\n', hello());
    exit();
}