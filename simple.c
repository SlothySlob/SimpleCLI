#include <stdio.h>


int main(int argc, char *argv[]) {
  // Check if the program has received any arguments
  // calling the name of the program is also an argument
  if (argc <= 1) {
    // No arguments were given
    printf("Thank you for using this CLI\n");
    printf("Make sure to use --help to learn how to use this tool\n");
  } else {
    // Arguments given
    // List all arguments
    for(int i = 1; i < argc; i++)
    {
      printf("Argument %i : %s \n",i, argv[i]);
    }
  }

  return 0;
}