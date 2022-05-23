#include <unistd.h>
#include <stdio.h>

const int NUM_SECONDS = 10;

int main()
{
    int i;
  int a;
  int c = 0;
  printf ("saisir un entier");
    for(int count = 0;count<10;count++)
    {

        //delay for 10 seconds
        for(i = 0 ; i < NUM_SECONDS ; i++) { usleep(1000*10); }
        //print
      scanf("%d",&a);
        printf("%d\n", c);
      c++;
    }
  if (c==9&&a==0){
    printf("bite");
  }
    return 0;
}