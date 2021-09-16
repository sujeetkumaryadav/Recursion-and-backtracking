#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&st,int k)
{
    if(k==1)
    {
        st.pop();
        return;
    }
    int val=st.top();
    st.pop();
    solve(st,k-1);
    st.push(val);
}
void DelMiddle(stack<int>&st)
{
    if(st.size()==0)
    return;
   int k=(st.size()/2)+1;
   solve(st,k);
   return;
}
int main()
{
    int n;
    cin>>n;
     stack<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    DelMiddle(st);
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
