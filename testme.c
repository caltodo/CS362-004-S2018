#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include <stddef.h>

char inputChar()
{
   printf("in inputChar()\n");
   char randomletter = 'a' + (random() % 26);
   printf("randomletter is: %c\n", randomletter);
   return randomletter;
}

char *inputString()
{
   printf("in inputString()\n");
   char *str;
   int length;

   length = 5;
   str = (char *) malloc(length);

   int p = -1, i, j;
	       
   const char charset[] = "abcdefghijklmnopqrstuvwxyz";
   if (length) {
      --length;
      int n;
      for (n=0; n < length; n++) {
	 int key = rand() % (int) (sizeof charset - 1);
	 str[n] = charset[key];
	 //printf("str n is: %c\n", str[n]);
      }
      str[length] = '\0';
   }
   printf("str is: %s\n", str);
/*   printf("checking str for repeats\n");
   j = 1;
	 for (i = 0; i < length; i++) {
	   
	       printf("i = %d\n", i);
	       printf("j = %d\n", j);
	       if (str[i] == str[j]) {
		  printf("no repeats allowed\n"); 
		  printf("%c\n", str[i]);
		  printf("%c\n", str[j]);
		  exit(200);
	       }
	    j++;   
	    }
*/	    
   return str;
}

void testme()
{
   int tcCount = 0;
   char *s;
   char c;
   int state = 0;
   while (1)   
   {
      //state = rand()%9;      
      printf("state is %d:\n", state);
      tcCount++;
      c = inputChar();
      printf("out of inputChar\n");
      s = inputString();
      printf("out of inputString\n");
      printf("Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);

      if (c == 'a' && state == 0) state = 1;
      if (c == 'b' && state == 1) state = 2;
      if (c == 'c' && state == 2) state = 3;
      if (c == 'd'&& state == 3) state = 4;
      if (c == 'e' && state == 4) state = 5;
      if (c == 'f' && state == 5) state = 6;
      if (c == 'g' && state == 6) state = 7;
      if (c == 'h' && state == 7) state = 8;
      if (c == 'x' && state == 8) state = 9;
      if (s[0] == 'r' && s[1] == 'e' && s[2] == 's' && s[3] == 't' && s[4] == '\0' && state == 9)
      {
	 printf("error big time");
	 printf("c: %c\n", c);
	 exit(200);
      }
      /*if (tcCount == 10){
	 printf("hit the cap - 10\n");
	 exit(200);
      }
     */ 
      
   }
}


int main(int argc, char *argv[])
{
   srand(time(NULL));
   testme();
   return 0;
}
