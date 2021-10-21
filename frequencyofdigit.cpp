#include <iostream>

using namespace std;  // use karte hai to karte hai

int main()
{
  cout<<"Enter a string"<<endl;  //endl to change line in c++
  string s;
  cin>>s;
  
  /* solution array*/
  int sol[10];
  
  // to initialize solution array to 0
  for(int i=0;i<10;i++)  
  {
    sol[i]=0;
  }
  
  int n = s.size(); // size of string
  
  /* string me ghumne ke liye loop */
  for(int i=0;i<n;i++) 
  {
    if(isdigit(s[i])) // to check if it is a digit
    {
        sol[s[i]-'0']++;
        // lets say s[i]=='9'  
        // s[i]-'0' =  '9' - '0' = 9
    }
  }
  
  // to print the khaata book(or frequency array )
    for(int i=0;i<10;i++)  
    {
        cout<<sol[i]<<" ";
    }
    return 0;
}

