/**
 * 题目: P1004
 * 难度: 普及-
 */

#include <bits/stdc++.h>
using namespace std;

int n;
bool start = false;

int main()
{
    cin>>n;

    for(int i=n;i>=0;i--)
    {
        int num;
        cin>>num;
        
        if(num==0)continue;

        if(num<0)
        {
            cout<<"-";
        }
        else if(start){ 
            cout<<"+";
        }

        if(abs(num)!=1||i==0)cout<<abs(num);
        if(i!=0)cout<<"x^"<<i;
        
        if(start==false)start=true;
        
    }
    return 0;
}

/*
时间复杂度: O(N)
空间复杂度: O(1)

--- 复盘 ---

*/