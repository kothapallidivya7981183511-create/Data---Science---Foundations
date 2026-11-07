#include <stdio.h>
#include <string.h>

int main() {
  char a[20] = "VJIT";
  int i,j;
  char temp;
  i=0;
  j = strlen(a)-1;
  while(i<j) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }
  puts(a);
  }


  