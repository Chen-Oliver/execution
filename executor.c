#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  printf("enter a command ");
  char s[50];
  fgets(s,sizeof(s),stdin);
  printf("%s\n",s);
  char *a = s;
  char *command[sizeof(s)];
  int i;
  for(i=0;command[i] = strsep(&a," ");i++)
  // printf("%d\n",i);
  command[i]=0;
  int j=0;
  while(command[j]){
    printf("%s",command[j]);
    j++;
    }
  execvp(command[0],command);
}
