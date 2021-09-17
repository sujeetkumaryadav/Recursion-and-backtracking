#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op,vector<string>&v)
{

    if(ip.length()==0)
    {
        v.push_back(op);
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1,v);
    solve(ip,op2,v);
    return;
}
vector <string> powerSet(string s)
{
    vector<string>v;
  string ip=s;
  string op="";
  solve(ip,op,v);
  sort(v.begin(),v.end());
  return v;
}
int main()
{
    string s;
    cin>>s;
     vector<string>v;
    v=powerSet(s);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}
