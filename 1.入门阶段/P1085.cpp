/**
 * 题目: P1085
 * 难度: 入门
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int ans=0,max_unhappy=0; 

   for(int i=1;i<=7;i++)
   {
        int school,afterClass;
        cin>>school>>afterClass;

        if(max_unhappy<school+afterClass && school+afterClass>8)
        {
            max_unhappy=school+afterClass;
            ans=i;
        }
   }

    cout<<ans<<endl;
    return 0;
}
/*
时间复杂度:O(1)
空间复杂度:O(1) 

--- 复盘 ---
需要引入一个max_unhappy变量记录当前最大和，用做比较
*/