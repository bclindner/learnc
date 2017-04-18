#include <stdio.h>
#include <stdbool.h> //we need boolean for this; more on that later

int main(){
  bool a;
  bool b;
  if(true){
    puts("Hi!");
  }
  if(true && !false){
    a = true;
    b = false;
    puts("The && operator means \"and\", and it allows you to set multiple conditions to be met at once!");
    puts("The ! operator means \"not\", so it changes false to true and vice versa!");
  }
  if(a || b){
    a = false;
    puts("The || operator means \"or\", and it allows you to set multiple conditions, but only one has to be met!");
  }
  if(!a || !b){
    puts("The || operator only returns false if all conditions are false.");
  }
  else if(!a){
    // it's true, yes, but since the previous if statement ran this won't do anything
  }
  if(a || b){
    // this won't run either, because both a and b are false at this part of the script!
  }
  else{
    puts("Else-if statements let you run an if statement only if the one on the line before failed.");
    puts("An else statement runs after an if statement fails, but it needs no conditions - it runs so long as the other if fails!");
    return 0;
  }
  return 1;
}
