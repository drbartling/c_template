#include "hello.h"

#include <memory.h>
#include <stdlib.h>
#include <string.h>

char const *
make_greeting(char const *name)
{
    int   name_len      = strlen(name);
    char  greeting[]    = "Hello, ";
    char  greeting_len  = strlen(greeting);
    char *full_greeting = malloc(sizeof(greeting) + name_len + 1);
    memcpy(full_greeting, greeting, greeting_len);
    memcpy(&full_greeting[greeting_len], name, name_len);
    full_greeting[greeting_len + name_len]     = '!';
    full_greeting[greeting_len + name_len + 1] = '\0';
    return full_greeting;
}
