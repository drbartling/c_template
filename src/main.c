#include "hello.h"
#include <stdio.h>

int
main(int argc, char const *argv[])
{
    if (2 != argc) {
        return -1;
    }
    char const *name = argv[1];

    char const *greeting = make_greeting(name);
    printf("%s\n", greeting);

    return 0;
}
