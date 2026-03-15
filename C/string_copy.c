#include<stdio.h>
#include<string.h>

void copy(char *dst, char *src){
  while (*src != '\0'){
    *dst=*src;
    dst++;
    src++;
  }
  *dst='\0';

}

int charLength(char *string){
  int count = strlen(string);
  return count;
}

int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  printf("%i\n", charLength(srcString));
  char dstString[61] = "";
  copy(dstString, srcString);
  printf("%s\n", dstString);

}



/*
src gives you the character src is pointing at
dst gives you the character dst is pointing at
src++ moves the pointer to the next character
*/