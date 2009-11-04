#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int N = 20;
    int M = 30;
    float T1 = 0.5;
    float T2 = 0.25;
    int i;
    pid_t pid;

    pid = fork();
    if (pid != 0) {
    
	for (i=1; i<=N; i++) {
	    printf("P: [%d]\n",i);
	    usleep(1000000*T1);
	}
    } else {
	for (i=1; i<=M; i++) {
	    printf("F: [%d]\n",i);
	    usleep(1000000*T2);
	}
    }
    
    return 0;
}

