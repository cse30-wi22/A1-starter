/**
 * Assignment-1
 * CSE30 Username: cs30wi22 (fill out your username)
 * Class: UCSD CSE30-WI22
 */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {


    if (argc != 2) {
        fprintf(stderr, "%s wrong number of arguments\n", argv[0]);
        return EXIT_FAILURE;
    }


    unsigned int population = (unsigned) atoi(argv[1]);
  
    // put your code here (use as many lines as you need)


    return EXIT_SUCCESS; 
}
