#include <stdio.h>
#include <string.h>
struct Students {
        char  firstname[50];
        char  lastname[50];
        int age;
        int studentid;
};
void printStudent(struct Students* student);
int main()
{
  struct Students StudentArr[2];
  char input[256] ;
  char  firstname[256];
  char  firstname2[256];
  char  lastname[256];
  char lastname2[256];
  int age;
  int age2;
  int studentid;
  int stid2;
  struct Students student1;
  struct Students student2;
  printf("What is your first student's name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname);
  printf("What is your first student's last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname);
  printf("What is your first student's age?\n");
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &age) == 1) break;
        printf("Not a valid age - try again!\n");
  }
  printf("What is your first student's student id?\n");
  //fgets(input, 256, stdin);
  //sscanf(input, "%s", studentid);
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &studentid) == 1) break;
        printf("Not a student id - try again!\n");
  }
  strcpy(student1.firstname, firstname);
  strcpy(student1.lastname, lastname);
  student1.age = age;
  student1.studentid = studentid;
  strcpy(StudentArr[0].firstname, firstname);
  strcpy(StudentArr[0].lastname, lastname);
  StudentArr[0].age = age;
 fgets(input, 256, stdin);
  sscanf(input, "%s", lastname);
  printf("What is your first student's age?\n");
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &age) == 1) break;
        printf("Not a valid age - try again!\n");
  }
  printf("What is your first student's student id?\n");
  //fgets(input, 256, stdin);
  //sscanf(input, "%s", studentid);
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &studentid) == 1) break;
        printf("Not a student id - try again!\n");
  }
  strcpy(student1.firstname, firstname);
  strcpy(student1.lastname, lastname);
  student1.age = age;
  student1.studentid = studentid;
  strcpy(StudentArr[0].firstname, firstname);
  strcpy(StudentArr[0].lastname, lastname);
  StudentArr[0].age = age;
  StudentArr[0].studentid = studentid;
  printf("What is your second student's name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname2);
  printf("What is your second student's last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname2);
  printf("What is your second student's age?\n");
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &age2) == 1) break;
        printf("Not a valid age - try again!\n");
  }
 // fgets(input, 256, stdin);
 // sscanf(input, "%s", age2);
  printf("What is your second student's student id?\n");
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &stid2) == 1) break;
        printf("Not a valid age - try again!\n");
  }
 printf("\n");
  //printf("1");
  //fgets(input, 256, stdin);
  //sscanf(input, "%s", studentid);
 //printf("1");
  //fgets(input, 256, stdin);
  //sscanf(input, "%s", studentid);
  //printf("2");
  strcpy(student2.firstname, firstname2);
  //printf("3");
  strcpy(student2.lastname, lastname2);
  //printf("4");
  student2.age = age2;
  //printf("5\n");
  student2.studentid = stid2;
  strcpy(StudentArr[1].firstname, firstname2);
  strcpy(StudentArr[1].lastname, lastname2);
  StudentArr[1].age = age2;
  StudentArr[1].studentid = stid2;
 
  for (int i = 0; i < 2; i++)
         {
        printf("This is student %d:\n", i+1);
        printStudent(&(StudentArr[i]));
        printf("\n");
         }
//printf("This is student 1\n");
  //printStudent(&student1);
 // printf("This is student 2\n");
 // printStudent(&student2);
}
 
void printStudent(struct Students* student)
{
  printf(" First name: %s\n", student->firstname);
  printf(" Last name: %s\n", student->lastname);
  printf(" Age: %d\n", student->age);
  printf(" Student id: %d\n", student->studentid);
}
 
