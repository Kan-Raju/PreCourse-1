// Time complexity:
// isEmpty(): O(1)
// push(): O(1)
// pop(): O(1)
// peek(): O(1)
// Space Complexity : O(n) where n is size of the array
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No

#include <bits/stdc++.h> 
  
using namespace std; 
  
#define MAX 1000 
  
class Stack {
  //Please read sample.java file before starting.
  //Kindly include Time and Space complexity at top of each file
    int top;
  
public: 
    int a[MAX]; // Maximum size of Stack 
  
    Stack() { 
        top=-1;
    }
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
}; 
  
bool Stack::push(int x) 
{ 
    //Your code here
    //Check Stack overflow as well
    if(top==MAX)
    {
        cout<<"Stack Overflow\n";
        return false;
    }

    a[++top]=x;
    return true;
} 
  
int Stack::pop() 
{ 
    //Your code here
    //Check Stack Underflow as well
    if(top==-1){
        cout<< "Stack Underflow\n";
        return false;
    }
    return a[top--];
} 
int Stack::peek() 
{ 
    //Your code here
    //Check empty condition too
    if(top==-1){
        return NULL;
    }
    return a[top];
} 
  
bool Stack::isEmpty() 
{ 
    //Your code here
    if(top==-1){
        cout << "Stack is Empty";
        return true;
    }
    return false;
} 
  
// Driver program to test above functions 
int main() 
{ 
    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30);
    cout << s.peek() << " is peek of stack\n";
    s.pop();
    cout << s.peek() << " is peek of stack\n";
    s.pop();
    cout << s.peek() << " is peek of stack\n";
    s.pop();
    s.pop();
    s.isEmpty();
  
    return 0; 
} 
