#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

static void sighandler (int signo){
	if(signo == SIGINT){
		printf("Program exited due to: SIGINT\n");
		exit(EXIT_SUCCESS);
	}
	if(signo == SIGUSR1){
		printf("Parent pid: %d\n", getppid());
	}
}

int main(){
	signal(SIGINT, sighandler);
	signal(SIGUSR1, sighandler);

    while(1){
        printf("pid: %d\n", getpid());
        sleep(1);
    }
    return 0;
}



