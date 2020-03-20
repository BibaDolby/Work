#include<stdio.h>

int main()
{
    fprintf(stdout, "Используем в циклах break, continue, goto\n");
    

    for(int i = 0; i <= 10; i++)
    {
        printf((i <= 5) ? "break":"continue" "%d\n", i);
    }
    return 0;
}
