    #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
    string s;cin>>s;
    int size=(s.size()/2);
    for (int i=0;i<s.size();i++)
    {
        if (i!=size)cout<<s[i];
    }
    cout<<endl;
    return 0;
    }