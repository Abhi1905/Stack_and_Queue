//ABHIJAY SRIVASTAVA

//Suppose we want to generate N numbers(let N = 5) that has either 5 or 6 only.
//OUTPUT will be : 5,6,55,56,65
//Time Complexity : O(n)


#include <bits/stdc++.h> 
#include <queue>
using namespace std; 


void printFirstN(int n) 
{ 
    queue<string> q;
    
    q.push("5");
    q.push("6");
    
    for(int i = 0; i < n; i++)
    {
        string curr = q.front();
       
        cout << curr << " ";
        
        q.pop();
        
        q.push(curr + "5");
        q.push(curr + "6");
    }
        
} 

 
int main() 
{ 
	int n = 5;
		
	printFirstN(n);
} 
