#include <stack>
#include <vector>
#include <iostream>

using namespace std;

int n,target_x,target_y;
stack<vector<int>>st;

int main()
{
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int a,b,g,k;
        cin>>a>>b>>g>>k;
        st.push({a,b,g,k,i});
    }
    //存储地毯信息

    cin>>target_x>>target_y;

    while(!st.empty()){
        vector<int>cpt=st.top();
        st.pop();

        bool flagX=(target_x>=cpt[0] && target_x<=cpt[0]+cpt[2]);
        bool flagY=(target_y>=cpt[1] && target_y<=cpt[1]+cpt[3]);

        if(flagX && flagY)
        {
            cout<<cpt[4];
            return 0;
        }
    }

    cout<<-1;
    return 0;
}

//AC
//SUBMIT 1
