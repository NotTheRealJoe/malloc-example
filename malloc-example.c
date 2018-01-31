#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "malloc-example.h"

int main(int argc, char** argv) {
  //Soil some memory for demonstrative purposes
  char *oldMem = (char*)malloc(sizeof(char) * 16);
  strcpy(oldMem, "abcdefghjlkmnop");
  free(oldMem);
  
  //malloc just allocates the memory and makes it available to the program. Previous contents are not cleared
  void *mallocAddr = malloc(16 * sizeof(char));
  hexDump("Malloc", mallocAddr, 16 * sizeof(char));
  free(mallocAddr);

  //calloc allocates the memory, but also clears it
  void *callocAddr = calloc(16, sizeof(char));
  hexDump("Calloc", callocAddr, 16 * sizeof(char));

  return 0;
}
