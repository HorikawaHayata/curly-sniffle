#include <stdio.h>

int main()
{
    int ws;
    int es;
    printf("How many soldiers are there?\n");
    
    printf("The number of soldiers in the West is:");
    scanf("%d", &ws);
    
    printf("The number of soldiers in the East is:");
    scanf("%d", &es);
    
    if(ws > es)
    {
        printf("A victory for the West.\n");
    }
    else if (ws < es)
    {
        printf("A victory for the East.\n");
    }
    else 
    {
        printf("It is a draw.\n");
    }
    
    return 0;
}