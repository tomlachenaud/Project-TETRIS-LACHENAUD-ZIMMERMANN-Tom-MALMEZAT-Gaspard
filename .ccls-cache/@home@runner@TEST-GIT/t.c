#include <stdio.h>
#include <sys/time.h>

unsigned long getTimeMicroSec(){
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return(1000000*tv.tv_sec)+tv.tv_usec;
}

int main(){
  int a;
  unsigned long time1 = getTimeMicroSec();
  printf ("saisir");
  scanf("%d",&a);
  unsigned long time2 = getTimeMicroSec();
  if((time2-time1)/1000000>2){
    printf("bite");
  }
}