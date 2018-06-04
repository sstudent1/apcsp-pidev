#include <stdio.h>
#include <string.h>

int main()

{

	char str1[27];
	char ascii = 'a';

       for (int i = 0; i < 27; i++)
{

 	str1[i] = ascii;

	ascii++;

}

       str1[26] = '\0';

       char str2[] = "abcdefghijklmnopqrstuvwxyz";

       if (strcmp(str1, str2) == 0)

       {
               printf("The first two strings are identical.\n");
       }

       for (int i = 0; i < 26; i++)

               {
                       str2[i] = str2[i] - 32;
               }

       char str3[54] = "";

       strcat(str3, str1);

       strcat(str3, str2);

       printf("%s\n%s\n%s\n", str1, str2, str3);

}
