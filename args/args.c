#include <stdio.h>
int main(int argc, char **argv){
  fprintf(stdout,"There are %d arguments given, excluding the intial shell arg %s\nArgs:\n",argc,argv[0]);
  for(int i=0;i < argc; i++){
    fprintf(stdout,"Argument %d: \"%s\"\n",i,argv[i]);
  }
}
