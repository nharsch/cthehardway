#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // go through each string in argv
  // why am I skipping argv[0]?
  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon", 
    "Washington", "Texas"

  };
  int num_states = 4;

  states[0] = argv[1];

  for(i = 0; i < num_states; i++) {
    int n = i + 1;
    printf("state %d: %s\n", n, states[i]);
  }

  return 0;
}
