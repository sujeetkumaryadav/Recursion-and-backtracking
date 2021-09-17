 void solve(string ip,string op,vector<string>&v)
    {
        if(ip.length()==0)
        {
            v.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        op1.push_back(' ');
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1,v);
        solve(ip,op2,v);
        return;
    }


    vector<string> permutation(string S){
        vector<string>v;
        string ip(S);
        string op="";
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op,v);
        return v;
    }
