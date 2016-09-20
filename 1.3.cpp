
/*
1 3 Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer  NOTE: One or two additional variables are fine   An extra copy of the array is not
FOLLOW UP
Write the test cases for this method
*/
#include <iostream>
using namespace std;
#include <string>

void reverseString(string & a){
  int i,len;
  char temp;
  len=a.length();
  for(i=0;i<len / 2;i++){
    temp=a[i];
    a[i]=a[len-1-i];
    a[len-1-i]=temp;
  }
}
int main(){
  string t="abcdefghi";
  reverseString(t);
  cout<<t<<endl;
}
