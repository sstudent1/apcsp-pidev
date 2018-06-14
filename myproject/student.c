#include <stdio.h>
#include "student.h"

void printStudent(struct Students* student)
{
  printf(" First name: %s\n", student->firstname);
  printf(" Last name: %s\n", student->lastname);
  printf(" Age: %d\n", student->age);
  printf(" Student id: %d\n", student->studentid);
}

