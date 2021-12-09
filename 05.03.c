#include <stdio.h>
#include <io_utils.h>

int StrLen(char *s) {
  int n;
  for (n = 0; *s != '\0'; s++) {
    n++;
  }
  return n;
}
int main() {
//  {
//    int result;
//    result = StrLen("Chris Zhang");
//    PRINT_INT(result);
//  }

//  {
//    int result;
//    char arr[] = "Chris Zhang";
//    result = StrLen(arr);
//    PRINT_INT(result);
//  }

  int arr[] = {1, 2, 3, 4, 5, 6};
  int *arr_ptr;
  arr_ptr = arr;
  PRINT_PTR(arr_ptr);
  PRINT_PTR(arr);

  PRINT_PTR(arr_ptr);
  PRINT_INT(arr_ptr++);
  PRINT_PTR(arr_ptr);
  PRINT_INT(arr_ptr+1);
  PRINT_PTR(arr_ptr);

//  PRINT_INT(arr++); //ERROR
  return 0;
}