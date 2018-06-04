#include <stdio.h>

float radius;
int i = 0;
int Circle ()
  {
    int area;
    printf("radius= \n");
    scanf("%c", &radius);
    area=3.14*radius*radius;
    radius++;
    return area;
  }

int main ()
{
    for (i=0 ; i<9 ; i=i+1)
      {
          int temp = Circle();
          printf ("%d\n", temp);
      }
}

