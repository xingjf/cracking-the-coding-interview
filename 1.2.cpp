//Write code to reverse a C-Style String  (C-String means that “abcd” is represented as five characters, including the null character )
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
