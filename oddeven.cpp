#include<iostream.h>
#include<conio.h>
int main()
{
int x;
cout<<"enter the no. of your choice";
cin>>x
if(!checkOdd(x))
cout<<"the no is even";
else
cout<<"The number is Odd";
return 0;
}

int checkOdd(int n){
  boolean flag = true;
  if(n%2 == 0){
    flag = false;
  }
  return flag;
}
