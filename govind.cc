#include<bits/stdc++.h> 
   
using namespace std; 
  
int Gov(int a) 
{ 
    int num = 0; 
     
    while(a > 0 || num >= 9) 
    { 
        if(a == 0) 
        { 
            a = num; 
            num = 0; 
        } 
        num += a % 10; 
        a /= 10; 
    } 
    return num; 
} 
  
int main() 
{ 
    int a; 
    cout<<"\n\nEnter the number:\n\n";
    cin>>a;
    cout <<endl<<endl<< Gov(a)<<endl<<endl; 
    return 0; 
} 