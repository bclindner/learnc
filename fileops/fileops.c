#include <stdio.h>
void usage(FILE *stream){
  fprintf(stream,"Usage: fileops [file] [text-to-write] ...\n");
  fprintf(stream,"Write text to a file.\n");
}
int main(int argc, char **argv){
  if(argc == 1){
    usage(stderr);
    return 1;
  }
  FILE *file; 
  file = fopen(argv[1],"w+"); //open the file specified in the first argument
  if(argc == 2){ //if there are no args to write
    fprintf(file,"Hello world!"); //write hello world to the file
  }
  else if(argc > 2){ //if we have one arg or more to write
    for(int i=2; i < argc; i++){ //start a for loop
      fprintf(file,argv[i]); //and write them all to the file
    }
  }
  fclose(file);
}
