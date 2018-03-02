#include <stdio.h>

int add_array(int *a, int *b, int n){
  int sum = 0;
  int i = 0;
  for (i = 0; i < n ; i++) {
//arreglado que el loop solo vaya hasta n
    sum += abs(a[i]);
    sum += abs(b[i]);
  };
  return sum;
}

int main(int argc, char **argv) {
  int *a, *b;
//subida n para que la pueda tomar malloc
  int n = 3;
//definir el tamaño de memoria de a y b
  a = malloc(n*sizeof(int));
  b = malloc(n*sizeof(int));
  int i, sum;
  for (i = 0; i < n; i++) {
    a[i] = i;
    b[i] = i;
  }
  sum = add_array(a, b, 3);
  printf("The addition is %d\n", sum);
//agregado liberar la memoria de a y b
  free(a);
  free(b);
  return 0;
}
