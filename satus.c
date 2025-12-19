#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
        int i, s, c;
    srand(time(0));
    
    i = (rand() % 18) + 1;
     
    s = (rand() % (19-i)) + 1;
    
    c = 20 - (s+i);
    
    if(i>s && i>c)
    {
    printf("You are mage.\n");
    }
    else if(s>i && s>c)
    {
    printf("You are knight.\n");
    }
     else if(c>i && c>s)
    {
    printf("You are thief.\n");
    }
    else if(i==s)
    {
        printf("You are mage or knight.\n");
    }
    else if(i==c)
    {
        printf("You are mage or thief.\n");
    }
    else if(s==c)
    {
        printf("You are knight or theif.\n");
    }
    
    printf("Your status is intelligence = %d stamina = %d charisma = %d", i,s,c);
    
    return 0;
}