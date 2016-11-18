#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  printf("enter a command:$ ");

  char s[256];
  fgets(s,sizeof(s),stdin);
  char *a = s;
  s[strlen(s)-1]=0;

  char *command[sizeof(s)];
  int i=0;
  while(a!=NULL){
    command[i]=strsep(&a," ");
    i++;
  }
  execvp(command[0],command);
}
