#include <stdio.h>
#include <sys/time.h>

unsigned long getTimeMicroSec(){
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return(1000000*tv.tv_sec)+tv.tv_usec;
}