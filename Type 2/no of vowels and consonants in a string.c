/* Program to determine wether entered letter is a vowel or a consonant */

#include <stdio.h>

int main(void) {
  // start of main

  char str[100]; //declaring the required variables

  int i = 0, vowels = 0;
  int consonants = 0;  // initialising the required counter variables
  
  /* taking the input from user */
  printf("enter any string:");
  gets(str);  // using the built in function to read the user entered string

  while(str[i]!='\0'){
    
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){   // checking wether the character or letter is a vowel or not
    vowels ++ ;  // increment vowel count
  }
    else{
      consonants++;   // else increment consonants by one
    }i++;
  }

  /* displaying the number of vowels and consonants */

  printf("no of vowels is %d\n",vowels); 
  printf("no of consonats os %d\n",consonants);

 // end of main
 
}
