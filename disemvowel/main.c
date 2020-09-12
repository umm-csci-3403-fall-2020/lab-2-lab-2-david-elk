#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;

  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
    char *to_print = disemvowel(line);
    printf("%s\n", to_print);
    free(to_print);
  }

  free(line);
}
