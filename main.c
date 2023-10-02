#include <stdio.h>
#include <string.h>

int main(void)
{
  int arraySize = 5;
  char ids[] = {'a', 'b', 'c', 'd', 'e'};

  char *firstArrayAddress = &ids[0];
  int size = sizeof(char);

  for (int i = 0; i < arraySize; i++)
  {
    printf("Adress: %p -> ids[%d]: %c\n", firstArrayAddress, i, *firstArrayAddress);
    firstArrayAddress = firstArrayAddress + size;
  }

  return 0;
}
