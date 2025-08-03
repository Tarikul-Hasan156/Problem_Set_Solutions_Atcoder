#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<iomanip>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define sortarray sort(arr,arr+x);
#define rev reverse(s1.begin(), s1.end());
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
using namespace std;
bool isconditon (int arr[])
{
    // cout<<arr[0]<<endl;
    return (arr[0]*arr[1]==arr[2]);
}
int main ()
{
    speed;
    int arr[3];
    for (int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    // sort(arr,arr+3);
    do 
    {
        if (isconditon(arr))
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }while (next_permutation(arr,arr+3));
    cout<<"No"<<endl;
    return 0;
}