#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t t;
    char input[10];
    printf("stopwatch by James Nakano\n");
    printf("Commands:\n");
    printf("'start' - start the timer\n");
    printf("'stop' - stops the timer\n");
    printf("'quit' - quits the program\n");

    while(strcmp(input,"quit")!=0)
    {
        scanf("%s",input);
        if(strcmp(input,"start")==0)
        {
            t = clock();
            printf("timer started.\n");
        }
        if(strcmp(input,"stop")==0)
        {
            t = clock() - t;
            printf("timer stopped.\n");
            printf("elapsed time: %.3f seconds\n",((float)t)/CLOCKS_PER_SEC);
        }
    }

    return 0;
}
