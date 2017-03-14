#include <iostream> 
#include <string> 
#include "StackV.h"//Use vector implementation of Stack

using namespace std;
        
        
string reverseString(string str);


int main()
{         
    string a_string = "COMP2115 here we come!!!";
     
    cout<<"\""<<a_string<<"\""<<endl<<"\""<<reverseString(a_string)<<"\"";
	    
    return 0;
        
}

string reverseString(string str)
{
     string res;
     Stack stk;

   for (auto ch : str )
      stk.push(ch);


    while( stk.size() > 0)
       {  
          res +=  stk.top();
           stk.pop();
       }
   
   return res;
}

