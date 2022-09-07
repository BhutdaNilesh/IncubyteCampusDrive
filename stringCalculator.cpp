#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int stringCalculator(string s){

    vector<int>res;

    int sum=0;
    string ans;
    for(int i=0;i<s.size();i++){
        
        if(s[i]!=','){
            if(s[i]<='9' && s[i]>='0'){
                ans+=s[i];
            }else if(s[i]>='a' && s[i]<='z'){
                int x = s[i]-'a';
                x++;
                ans+=(to_string(x));
            }else{
                ans+=s[i];
            }
        }
        else{
            // cout<<ans<<endl;
            int n = stoi(ans);
            cout<<n<<endl;
            if(n>1000){
                n=0;
            }else if(n<0){
                
                return -1;
            }
            sum+=n;
            ans="";
        }
        
    }
    int n = stoi(ans);
    if(n>1000){
        n=0;
    }else if(n<0){
        return -1;
    }
    sum+=n;
    return sum;

    

}

int main()
{
    string s;
    cin>>s;
    
    int ans = stringCalculator(s);
    if(ans==-1){
        cout<<"Negative number are not allowed"<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}