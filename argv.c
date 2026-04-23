#include <stdio.h>

int main(int argc, char *argv[]) {

  // TODO print the number of arguments and all the arguments themselves

  printf("What the heck are these argc and argv?\n");
  printf("Why is one an int and one an array?\n");

  printf("Number of Args: %d\n", argc);
  printf("Args: \n");
  for(int i = 0; i < argc; i++){
    printf("%s\n", argv[i]);
  }


  printf("Number of words: %d\n", wordcount)

  
  return 0;
}