#include <stdio.h>


int main() {
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d \n", i, j, i*j);
		}
	}
	return 0;
}



/*
* char: signed, unsigned: 1byte
* short: signed, unsigned: 2bytes
* int: signed, unsigned: 4bytes
* long: signed, unsigned: 4bytes
* long long int: signed, unsigned: 8bytes
* float: 4bytes
* double: 8bytes
*
* pointer: 4bytes (on 32-bit systems), 8bytes (on 64-bit systems)
*
*
* printf("Size of %s: %zu bytes\n", "char", sizeof(char));
  printf("Size of %s: %zu bytes\n", "short", sizeof(short));
  printf("Size of %s: %zu bytes\n", "int", sizeof(int));
  printf("Size of %s: %zu bytes\n", "long", sizeof(long));
  printf("Size of %s: %zu bytes\n", "long long", sizeof(long long));
  printf("Size of %s: %zu bytes\n", "float", sizeof(float));
  printf("Size of %s: %zu bytes\n\n", "double", sizeof(double));

  printf("Size of %s: %zu bytes\n", "char*", sizeof(char*));
  printf("Size of %s: %zu bytes\n", "short*", sizeof(short*));
  printf("Size of %s: %zu bytes\n", "int*", sizeof(int*));
  printf("Size of %s: %zu bytes\n", "long*", sizeof(long*));
  printf("Size of %s: %zu bytes\n", "long long*", sizeof(long long*));
  printf("Size of %s: %zu bytes\n", "float*", sizeof(float*));
  printf("Size of %s: %zu bytes\n", "double*", sizeof(double*));


  #define RED_ANSI "\033[0;31m"
  #define ORANGE_ANSI "\033[31m"
  #define YELLOW_ANSI "\033[0;33m"
  #define GREEN_ANSI "\033[0;32m"
  #define BLUE_ANSI "\033[0;34m"
  #define INDIGO_ANSI "\033[36m"
  #define PURPLE_ANSI "\033[0;35m"
  #define RESET_ANSI "\033[0m"
  
  int red = 1;
  int orange = 2;
  int yellow = 3;
  int  green = 4;
  int blue = 5; // 0이외에는 모두 True
  int indigo = 6;
  int purple = 7;
  
  if (red) printf("%sred    = %d%s\n", RED_ANSI, red, RESET_ANSI);
  
  if (orange) printf("%sorange = %d%s\n", ORANGE_ANSI, orange, RESET_ANSI);
  
  if (yellow) printf("%syellow = %d%s\n", YELLOW_ANSI, yellow, RESET_ANSI);
  
  if (green) printf("%sgreen  = %d%s\n", GREEN_ANSI, green, RESET_ANSI);
  
  if (blue) printf("%sblue   = %d%s\n", BLUE_ANSI, blue, RESET_ANSI);
  
  if (indigo) printf("%sindigo = %d%s\n", INDIGO_ANSI, indigo, RESET_ANSI);
  
  if (purple) printf("%spurple = %d%s\n", PURPLE_ANSI, purple, RESET_ANSI);

  char data[6] = "hello";  // 문자열일땐 \0 자리도 추가
	printf("%c\n", data[1]);
	printf("%c\n", data[4]);
	printf("data's size: %zu\n", sizeof(data));
*/