#include <stdio.h>
#include <string.h>

void usage(int status){
  FILE *stream;
  if(status != 0){stream = stderr;}
  else{stream = stdout;}
  fprintf(stream,"Usage: strings [str1] [str2]\n");
  fprintf(stream,"Performs operations with two strings.\n");
}

int main(int argc, char **argv){
  if(argc < 3){
    usage(0);
    return 0;
  }
  else{
    char newStr[256] = "";
    for (int i=1;i < argc;i++){
      printf("Length of argument %i: %li characters\n",i,strlen(argv[i]));
      strcat(newStr, argv[i]);
    }
    puts(strcat("All arguments concatenated: ",newStr));
  }
}
