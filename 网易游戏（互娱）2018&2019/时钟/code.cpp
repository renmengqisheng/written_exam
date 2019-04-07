#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T; cin >> T;
	for (int i = 0; i < T; i++)
	{
		int hour, min, sec;
		char t;
		cin >> hour >> t >> min >> t >> sec;
		string res;
		if (hour > 23 || hour < 10)
		{
			hour %= 10;
			res += '0';
		}
		res += to_string(hour) + ':';
		if (min > 59 || min < 10)
		{
			min %= 10;
			res += '0';
		}
		res += to_string(min) + ':';
		if (sec > 59 || sec < 10)
		{
			sec %= 10;
			res += '0';
		}
		res += to_string(sec);
		cout << res << endl;
	}
	return 0;
}
