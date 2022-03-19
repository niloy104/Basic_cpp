#include <bits/stdc++.h>

using namespace std;

void solve()
{
    double N = 10;
    double A[10];
    double d[10][10];
    double dsquare[10][10];
    double dsum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    double ds_sum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    double sig[10];
    double week[10][10];
    double mean[10];
    double cv[10];
    for(int i = 0; i < 10; i++){
       
        for(int j = 0; j < 10; j++){
            cin >> week[i][j];
        }
        A[i] = max(week[i][4], week[i][5]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            d[i][j] = week[i][j] - A[i];
            dsquare[i][j] = d[i][j] * d[i][j];
           // cout << dsquare[i][j] << " ";
            dsum[i] += d[i][j];
            ds_sum[i] += dsquare[i][j];
        }

    }
    cout << endl;
    double best = 101;
    int pos;
    for(int i = 0; i < 10; i++){
        sig[i] = sqrt( (ds_sum[i] / N) - ( (dsum[i] / N) * (dsum[i] / N) ) );
        mean[i] = A[i] + (dsum[i] / N);
        cv[i] = (sig[i] / mean[i]) * 100;
        cout << "C.V. of week " << i+1 << " is : " << cv[i] << endl;
        if(cv[i] < best){
            best = cv[i];
            pos = i + 1;
        }
    }
    printf("\nWeek %d has minimum C.V. among all the weeks.\n\nC.V. of week %d is: %.3lf\n", pos, pos, best);

}

int main()
{
    solve();

    return 0;
}