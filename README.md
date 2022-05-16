# Task
#include<stdio.h>  
#include<stdlib.h>
int i=0,j=0,n=5,x,y,z;  
int array[10];  
  

//adding element i=0;
void add_element(int x)
{
printf("enter element to be added to the array:"); 
scanf("%d",&x);

if (n<10)
{
i=0;
while (i<n && x!= array[i])
{
    i++;
}

if (x==array[i])
{
    printf("element %d already added please try again \n",y);
}
else
{
    array[n]=x;
    printf("element added successfully\n");
}
n++; 
}
else 
{
    printf("array if full \n");
}
}

//search if an element exists 
void search_element(int y)
{
printf("enter element to be searched:");
scanf("%d",&y);
i=0;
while (i<n && y!= array[i])
{
    i++;
}

if (y==array[i])
{
    printf("element %d found at the index %d \n",y,i+1);
}
else
{
    printf(" %d element not found \n",y);
}
}


//removing element 
void remove_element(int z)
{
printf("enter element to be removed: ");
scanf("%d",&z);

i=0;
while(i<n && z!=array[i])
{
    i++;
}

for( ;i<n;i++)
    {
        array[i]=array[i+1];
       
    }
  n--;
  printf("%d element has been removed\n",z);
}

//sorting of array
void sort_array(int temp,int t)
{
printf(" 1. Sort in Ascending order: \n" " 2. Sort in Descending order \n");
scanf("%d",&t);
  if (t==1)
  {
     for(i = 0; i<n; i++)    
    {    
        for(j = i+1; j<n; j++)    
        {    
          
            
            if(array[j] < array[i])    
            {    
                temp = array[i];    
                array[i] = array[j];    
                array[j] = temp;     
            }   
        }
    }
  }
            else 
            {
             for(i = 0; i<n; i++)    
             {    
        for(j = i+1; j<n; j++)
            {
                if(array[j] > array[i])    
            {    
                temp = array[i];    
                array[i] = array[j];    
                array[j] = temp;     
            }   
            }  
        }     
    }     
}

//printing of array using n, because when adding n will have to be increased. use n++ then
void print_array()
{
printf("array entered:\n ");  
for(j=0;j<n;j++)
{   
    printf("%d \n",array[j]); 
}  
}

int main()
{     
    int s,temp,t; 
//initialization of array  
printf("enter the 5 initial array elements:\n");
for(i=0;i<5;i++)
{   
    scanf("%d",&array[i]);  
}   
 
repeat:
printf(" 1. Add element to the array \n" " 2. Search an element in the array\n" " 3. Remove an element from the array \n" " 4. sort array\n" " 5. Print array\n" " 6. Exit \n");

scanf("%d",&s);
if(s==1)
{
  add_element(x);
}
else if(s==2)
{
 search_element(y);
}
else if (s==3)
{
    remove_element(z);
}
else if (s==4)
{
    sort_array(temp,t);
}
else if(s==5)
{
   print_array() ;
}
else if(s==6)
{
    exit(0) ;
}
else
{
    printf("enter a valid option number:\n");
}

while (s !=6)
{
    goto repeat;
}
return 0;  
} 
