#include <stdio.h>

void myfunction( char name[],int age){
  printf("hello %s. You are %d years old.\n  ",name,age);
} 


int sum (int k);


int main (){
  myfunction("liam", 3);
  myfunction("kwame", 4);
  myfunction("Anja", 6);

    int result = sum(10);
    printf("%d", result);


    return 0;
}
  int sum(int k) {
    if (k > 0){
        return k + sum(k - 1);

    }else {
        return 0;
    }
  }




  