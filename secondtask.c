#include<stdio.h>
#include<stdlib.h>

char str[200];
char str1[200],str2[200]; 
char ch;
int str_length(char *str) //finding string length 
{
    
    int length;
while (*str != '\0' )
    {
        for (length=0; *str != '\0'; )
        {
    str++;
    ++length;
    
        }
        return length;
    } return -1;
    
}
 
char str_copy(char *str1, char *str2) //copying string to other string
{
 
  int position;

   for (position=0;*str1 != '\0';position++)
   {
  *str2=*str1;
   str2++;
   str1++;
   }
   return 0;

}

int str_compare(char *str1, char *str2) //comparing two srings

{
        
   while (*str1==*str2 && *str1 !='\0')
   {
       str1++;
   }
      if(*str2> *str1)
        {
      return(-1);

        } 
       else if(*str2 < *str1)
        {
      return(1);
        } 

       else 
        {
        return(0);
        } 
        
}


int str_find_char(char *str, char ch) //finding character in string
{
    
int position=0;

while ( *str !='\0')
{
   if(ch==*str)
   {
       return(position+1);
   }

   str++;
  position++;
} 
if (*str == '\0')
{
    return (-1);
}
}

int str_find_substring(char *str1, char *str2) //finding substring in string
{
    int position=0;
    int str2len=0;
    int str1len=0;
    char *pointer1 = str1; //duplicater pointers
    char *pointer2 = str2;
    int checkLen = 0;

    //find string lengths
    while ( *str2 !='\0')
    {
        str2++;
        str2len++;
    } 

    while ( *str1 !='\0')
    {
        str1++;
        str1len++;
    } 

    if(str1len < str2len)
        return -1;

    //get original strings
    str2 = pointer2;
    str1 = pointer1;

    while (*str1 !='\0') //traverse string 1
    {
        *str2 = *pointer2;
        while(*str2 == *str1) //check individual characters matching
        {
            checkLen++;
            if(checkLen == str2len)
                return (position+1);
            str2++;
            str1++;
        } 
        position++;
        str1++;  //increment pointer
    }
    return -1;
}



int main ()
{
    int result;
    char ch;
    char str1[200],str2[200];
    printf("to find length of string enter string:\n");
    gets(str);
    result= str_length(str);
    printf("Result: %d\n",result);

printf("copying strings\n ");
    printf("Enter string 1:\n ");
    gets(str1);
    printf("Enter string 2: \n");
    gets(str2);
    result= str_copy(str1,str2);
    printf("success of copying string Result: %d \n",result);

printf("comparing strings\n ");
    printf("Enter string 1:\n ");
    gets(str1);
    printf("Enter string 2: \n");
    gets(str2);
    result= str_compare(str1,str2);
    printf("comparing string Result: %d \n",result);

printf("finding character\n ");
     printf("enter string :\n");
    gets(str);
    printf("enter character to be searched :\n");
   scanf("%c",&ch);
    result =str_find_char(str, ch);
    printf("position of character Result: %d \n",result);

printf("finding substring\n ");
     printf("enter string : \n");
    gets(str1);
    printf("enter substring to be searched :\n");
    gets(str2);
    result = str_find_substring(str1,str2);
    //printf("\n%s\n%s",str1,str2);
    
    printf("position of substring Result: %d \n",result);
}
 