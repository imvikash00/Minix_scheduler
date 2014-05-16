#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
  {
     char *const arg1[] ={"long1", "1", "100",NULL};
     char *const arg2[] = {"long2", "2", "100", NULL};
     char *const arg3[] = {"long3", "3", "100", NULL};     
     if (fork() == 0) {
        execv("long1",arg1);
     }
     if (fork() == 0) {
        execv("long2", arg2);
     }
     if (fork() == 0) {
        execv("long3",arg3);
     }
     return 0;
  }
