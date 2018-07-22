#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    int t;
    cin>>t;
    while(t--){
        cin.ignore(256, '\n');
        getline(cin, str);
        int l,r,count=0;
        cin>>l>>r;
        //cout<< str<<" ";
        vector<char> brackstk;
        for(int i=l;i<=r;i++){
            if(str[i]=='(')
                brackstk.push_back(str[i]);
            else{
                if(brackstk.empty()){

                }else if(brackstk.back()=='('){
                    brackstk.pop_back();
                    count+=2;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
