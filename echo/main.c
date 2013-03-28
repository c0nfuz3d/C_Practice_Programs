#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("echo by James Nakano\n");
    printf("Directions:\n");
    printf("Type anything to see it spat back out.\n");
    printf("Type 'quit' to quit.\n");

    char user_input[50];
    while(strcmp(user_input,"quit")!=0)
    {
        scanf("%s",&user_input);
        printf("echo: %s\n",&user_input);
    }
    printf("quitting...");
    return 0;
}
