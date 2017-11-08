#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

static void sighandler (int signal){

}

int main()
{
    while(1){
        printf("pid: %d", getpid());
    }
    return 0;
}



