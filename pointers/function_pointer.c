#include<stdio.h>

float add(float a, float b)
{
    return a+b;
}

float subtract(float a, float b)
{
    return a-b;
}

float multiply(float a, float b)
{
    return a*b;
}

float divide(float a, float b)
{
    return a/b;
}

int main()
{
    float (*operation) (float,float);
    char command[10];
    float a,b;

    printf("Type any arithmetic command followed by two numbers. Type 'quit' to exit\n");

    while(1)
    {
        scanf("%s",&command);

        if(strcmp(command,"add")==0)
        operation = &add;
        else if(strcmp(command,"subtract")==0)
        operation = &subtract;
        else if(strcmp(command,"multiply")==0)
        operation = &multiply;
        else if(strcmp(command,"divide")==0)
        operation = &divide;
        else if(strcmp(command,"quit")==0)
        {
            printf("quitting...\n");
            break;
        }
        else
        {
            printf("command not recognized.\n");
            scanf("%s",&command);
        }

        scanf("%f %f",&a, &b);
        printf("%.3f \n", operation(a,b));
    }
    return 0;
}
