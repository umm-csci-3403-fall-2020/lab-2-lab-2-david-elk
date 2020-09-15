#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  int num = count_consonants(str);
  char *result = (char*) calloc(num + 1, sizeof(char));

  //looping over the string
  int i;
  int j = 0;
  int len = strlen(str);
  for(i = 0; i < len; i++) {
    if (!is_vowel(str[i])) {
      result[j] = str[i];
      j++;
    }
  }
  result[j] = '\0';
  return result;
}

//counts consonants in string for mem alloc
int count_consonants(char *str) {
  int num_c = 0;
  int i;
  int len =strlen(str);
  for(i = 0; i < len; i++) {
    if (!is_vowel(str[i])) {
      num_c++;
    }
  }
 return num_c;
}

bool is_vowel(char c) {
  if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') {
     return true;
  }
  return false;
}
