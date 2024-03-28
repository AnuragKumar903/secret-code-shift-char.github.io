#include <stdio.h>

int main(){
  char ch;
  int n;
  scanf("%c %d", &ch, &n);
  if(islower(ch)){
    int index = ch - 'a' + n;
    if(index > 25){
      index = index - 26;
      ch = 'a' + index;
    }
    else{
      ch = 'a' + index;
    }
  }
  
  return ch;
}