//stack-lifo->last in first out
//queue-fifo-. first in first out
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"stack implimentation"<<endl;
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    cout<<"queue implimentation"<<endl;
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");

    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    
}