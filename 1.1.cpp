//Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?
#include <iostream>
#include <cstring>
using namespace std;

bool isUnique(string s){
	unsigned int i,value;
	bool flag[255];
	memset(flag,0,sizeof(flag));
	for(i=0;i<s.size();i++){
	  value=s[i];
	  if (flag[value] == false)
	    flag[value] = true;
	  else
	    return false;
	}
	return true;
}
int main(){
  string data="abcdefgjh";
  if(isUnique(data))
    cout<<"string "<<data<<" has all unique characters" << endl;
  else
    cout<<"string "<<data<<" has duplicate characters"<<endl;
  return 0;
}
