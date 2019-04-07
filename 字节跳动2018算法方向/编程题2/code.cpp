//通过30%

#include <cstdio>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    int data[n];
    for(int i = 0; i < n; i++)
        cin >> data[i];
    long long res = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sum = 0;
            int min_t = INT_MAX;
            for(int k = i; k <= j; k++)
            {
                sum += data[k];
                min_t = min(min_t, data[k]);
            }
            res = (res > sum*min_t)? res: sum*min_t;
        }
    }
    cout << res << endl;
	return 0;
}
