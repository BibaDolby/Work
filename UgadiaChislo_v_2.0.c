#include<stdio.h>
#include<stdlib.h>

   void class(void);
   int main()
   {
       int a;
       int rrand = 1+rand()%(10-1+1);
       int *am = malloc(a *sizeof(int));
       class();
       scanf("%d", &a);

      if(rrand == a)
      {
          printf("Введенное Вами число правильное\n");
          printf("Загаданное число = %d\n", rrand);
      }
      else if(rrand > a)
      {
          printf("Введенное число больше, чем то что вы ввели\n");
      }
      else if(rrand < a)
      {
          printf("Введенное число меньше, чем то что вы ввели\n");
      }
      else
          printf("Вы ввели не то, что предпологала программа!\n");

      free(am);
      return 0;
    }

    void class(void)
    {
        printf("Компьютер загадал число от 1 до 10\n");
        printf("Введите число: ");
    }
