#include <stdio.h>
int myfunction(int x, int y);


 int main(){
printf("Result is:%d",myfunction(3,5));

    return 0;
 }
  int myfunction(int x,int y){
    return x + y;
 }