#include <stdlib.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  //init stuff
  char *result = (char*) calloc(count_vowels(str) + 1, sizeof(char));
  char vowel = ('A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u'); //idk if this will work

  //looping over the string
  int i;
  for(i = 0; str[i] != '\0'; i++) {
    if (str[i] != vowel) {
      result[i] = str[i];
    }
  }

  return (char*) result;
}

//counts non-vowels in string for mem alloc
int count_vowels(char *str) {
  int result;
  int i;
  char vowel = ('A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u');
  for(i = 0; str[i] != '\0'; i++) {
    if (str[i] != vowel) {
      result++;
    }
  }
 return result;
}
