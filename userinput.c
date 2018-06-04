#include <stdio.h>
#include <string.h>

float areaOfCircle (float radius)
{
  printf("radius: %f\n", radius);
  return (radius * radius * 3.14);
}

int main(int argc, char* argv[])
{

  float area;
  char smallString[256], bigString[256];
  int smallRadius;
  int bigRadius;
  int switchRadius;

  if (argc != 3)
  {
    printf("Did not input valid range of radii. Input a radius\n");
  while (1)
  {
    fgets(smallString, 256, stdin);
    if (sscanf(smallString, "%d", &smallRadius) == 1) break;
      printf("Not a valid radius size - try again!\n");
  }

  while (1)
  {
    fgets(bigString, 256, stdin);
    if (sscanf(bigString, "%d", &bigRadius) == 1) break;
      printf("Not a valid radius size - try again!\n");
  }


  if (smallRadius > bigRadius)
  {
    switchRadius = smallRadius;
    smallRadius = bigRadius;
    bigRadius = switchRadius;
  }

  for (float i = smallRadius; i <= bigRadius; i++)
  {
    area = areaOfCircle(i);
    printf("area: %f\n\n", area);
  }
  }

  int arg1;

  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }

  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }

  if (arg2 > arg1)
  {
    bigRadius = arg2;
    smallRadius = arg1;
  }
  else
  {
    bigRadius = arg1;
    smallRadius = arg2;
  }

  for (float i = smallRadius; i <= bigRadius; i++)
  {
    area = areaOfCircle(i);
    printf("area: %f\n\n", area);
  }

}

