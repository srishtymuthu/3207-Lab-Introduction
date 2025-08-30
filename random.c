#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    int randvalue = rand() % 26;
    return ('A' + randvalue);

}