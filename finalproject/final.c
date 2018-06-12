#include<stdio.h>

#include<string.h>

#include<stdlib.h>

void showHangman(int);

int main(void)
{
    char hangmanWord[100], tempWord[100];
    char hangmanOutput[100];
    int wrongTry = 6 , matchFound = 0;

    int counter = 0 , position = 0, winner, length , i;
    char alphabetFromUser;


    system("cls");
    printf("\n\n Enter any word in lower case letters then press  >>enter<<");
    printf("\n\n\t Enter HERE ==>  ");
    scanf("%s",hangmanWord);
    printf("\n\n See if your friend can solve the hangman game!");
    printf("\n\n\tHIT >>enter<<");
    getchar();
    length = strlen(hangmanWord);

    system("cls");

    printf("\n\n Hangman Game!\n\n\n");
    printf("\n\n There will be 5 tries to guess the word!");
    printf("\n\n GO!");

    getchar();

    printf("\n\n\tHIT >>enter<< ");

    getchar();

    system("cls");

        printf("\n\t||===== ");
	printf("\n\t||    | ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");

    printf("\n\n     The word has %d letters! \n\n",length);
    for( i = 0; i < length ; i++)
    {
        hangmanOutput[i] = '_';
        hangmanOutput[length] = '\0';
    }

    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",hangmanOutput[i]);

    }
    while(wrongTry != 0)
    {
        matchFound = 0;
        printf("\n\n   enter any letters from a to z and use lower case letters!");
        printf("\n\n\t Enter HERE ==> ");

	    fflush(stdin);

	    scanf("%c",&alphabetFromUser);
    if(alphabetFromUser < 'a' || alphabetFromUser > 'z')
    {
        system("cls");
        printf("\n\n\t WRONG TRY AGAIN ");
        matchFound = 2;
    }
    fflush(stdin);
    if (matchFound != 2)
    {
        for(counter=0;counter<length;counter++)
	    {
		    if(alphabetFromUser==hangmanWord[counter])
		     {
		       matchFound = 1;
                     }
            }

	   if(matchFound == 0)
	    {
     	      printf("\n\t :( You have %d tries left ",--wrongTry);
	          getchar();
              showHangman(wrongTry);
              getchar();
	    }

	   else
	   {
	     for(counter = 0; counter < length; counter++)
             {
     	         matchFound = 0;
                 if(alphabetFromUser == hangmanWord[counter])
	          {
     		     position = counter ;
     		     matchFound = 1;
	          }
    	      if(matchFound == 1)
	          {
                 for(i = 0 ; i < length ; i++)
                 {
                      if( i == position)
                  	  {
                          hangmanOutput[i] = alphabetFromUser;
                      }
                      else if( hangmanOutput[i] >= 'a' && hangmanOutput[i] <= 'z' )
                      {
                          continue;
                  	  }

                      else
                      {
                          hangmanOutput[i] = '_';
                      }
                }
                tempWord[position] = alphabetFromUser;
                tempWord[length] = '\0';
                winner = strcmp(tempWord,hangmanWord);

                if(winner == 0)
                {
                    printf("\n\n\t \t You won!");
                    printf("\n\n\t The Word was %s ",hangmanWord);
                    printf("\n\n\n\n\t\tThat was fun!\n\n");
                    getchar();
                    return 0;
                }
	       }
	    }
      }
     }

    printf("\n\n\t");
    for(i = 0 ; i < length ; i++)
      {
          printf(" ");
          printf("%c",hangmanOutput[i]);
      }

    getchar();
    }

      if(wrongTry <= 0)
      {
          printf("\n\n\t The Word was %s ",hangmanWord);
          printf("\n\n\t You lost!");
	      printf("\n\n\t Better luck next time !");

      }
getchar();
return 0;
}



void showHangman(int choice)
 {

     switch(choice)
     {

     case 0:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
     case 1:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
     case 2:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 3:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 4:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 5:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
      }
      return;
 }
