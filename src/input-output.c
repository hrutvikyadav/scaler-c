/*
 * input-output.c
 * Author: Hrutvik Yadav
 * Introduction to format specifiers and basic input output in C
 * */

#include <stdio.h>

int main() {
  // basic data types
  int i;
  char c;
  float f;
  double d;
  long l;

  printf("Enter int: ");
  scanf("%d", &i);

  // NOTE: the space in `scanf` format string, needed for consuming any existing
  // whitespace chars in input buffer, like newline character See README.md for
  // more
  printf("Enter char: ");
  scanf(" %c", &c);

  printf("Enter double: ");
  scanf("%lf", &d);

  printf("Enter float: ");
  scanf("%f", &f);

  printf(" I: %d\n C: %c\n D: %lf\n F %f\n", i, c, d, f);

  // IO for advanced data types
  char myString[20];
  printf("size of char arr: %ld\n", sizeof(myString));
  // clear input buffer;; commenting next line will cause existing newline
  // from buffer to be read into variable passed to `fgets`
  while (getchar() != '\n')
    ;
  printf("Enter your string: ");
  fgets(myString, sizeof(myString), stdin);
  printf("%s\n", myString);

  while (getchar() != '\n') {
    printf("wtf so many newlines????\n");
  };
  char new_string[20];
  printf("Another one: ");
  scanf("%[^\n]%*c", new_string);
  printf("%s", new_string);

  return 0;
}
