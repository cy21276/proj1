#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int main(){
kill(7183,SIGUSR1);
}
