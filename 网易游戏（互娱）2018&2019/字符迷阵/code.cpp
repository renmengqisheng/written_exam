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
    for(int l = 0; l < T; l++)
    {
        int m, n;
        cin >> m >> n;
        cin.get();
        vector<string> str;
        for(int i = 0; i < m; i++)
        {
            string t;
            getline(cin, t);
            str.push_back(t);
        }
        string word;
        getline(cin, word);
        int word_len = word.size();
        int count = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(str[i][j] == word[0])
                {
                    bool same = true;
                    for(int k = 1; k < word_len; k++)
                    {
                        if(j+k > n-1 || str[i][j+k] != word[k])
                        {
                            same = false;
                            break;
                        }
                    }
                    if(same) count++;
                }
                if(str[i][j] == word[0])
                {
                    bool same = true;
                    for(int k = 1; k < word_len; k++)
                    {
                        if(i+k > m-1 || str[i+k][j] != word[k])
                        {
                            same = false;
                            break;
                        }
                    }
                    if(same) count++;
                }
                if(str[i][j] == word[0])
                {
                    bool same = true;
                    for(int k = 1; k < word_len; k++)
                    {
                        if(i+k > m-1 || j+k > n-1 || str[i+k][j+k] != word[k])
                        {
                            same = false;
                            break;
                        }
                    }
                    if(same) count++;
                }
            }
        }
        cout << count << endl;
    }
	return 0;
}
