#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main (){
    int n;
    cin >> n;
    vector<vector<int>> task(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; ++j)
        {
            int z;
            cin >> z;
            task[i].push_back(z);
        }
    }
    vector<vector<int>> dp(n, vector <int> (4,0));
    dp[0][0] = max(task[0][1], task[0][2]);   // day 1 ka task agar 0 hn to day 0 mn ya hoga 
    dp[0][1] = max(task[0][0], task[0][2]);   // similarly
    dp[0][2] = max(task[0][1], task[0][0]);   // same
    dp[0][3] = max(task[0][1], task[0][2]);   // now if there is no task then take max of all three task
    dp[0][3] = max(dp[0][3], task[0][0]);

    for(int day = 1; day < n; day++){
        for (int last = 0; last < 4; last++){ // hum day ka day+1 ka task ka hissab sa dekh rha hn
            dp[day][last] = 0;
            for (int present_task = 0; present_task < 3; present_task++){
                if(last != present_task){
                    int point = task[day][present_task] + dp[day-1][present_task];
                    dp[day][last] = max(dp[day][last], point);
                }
            }

        }
    }
    cout << dp[n-1][3];


}