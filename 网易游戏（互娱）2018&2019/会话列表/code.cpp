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
    int T; cin >> T;
    for(int i = 0; i < T; i++)
    {
        int N; cin >> N;
        vector<int> v(N, 0);
        for(int j = N-1; j >= 0; j--)
            cin >> v[j];
        for(int j = 0; j < N; j++)
        {
            bool dup = false;
            for(int k = 0; k < j; k++)
            {
                if(v[k] == v[j])
                {
                    dup = true;
                    break;
                }
            }
            if(!dup)
            {
                cout << v[j];
                if(j != N-1)
                    cout << " ";
            }
        }
        cout << endl;
    }
	return 0;
}
