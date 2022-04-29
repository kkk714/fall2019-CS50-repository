#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%c\n", greetings[3]);

  char str1[2][6] = {"aaaaa", "bbbbb"};
  printf("%s\n", str1[1] );
  //字符数组表示字符串

  char *str3 = "ccccc";
  printf("%s\n", str3 );
  //字符指针表示字符串


  return 0;
}