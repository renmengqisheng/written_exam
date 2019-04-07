//通过50%

#include <cstdio>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Point2d
{
    int x;
    int y;
};

bool cmp(Point2d p1, Point2d p2)
{
    return p1.x < p2.x;
}

int main()
{
    int N; cin >> N;
    vector<Point2d> points;
    for(int i = 0; i < N; i++)
    {
        Point2d p;
        cin >> p.x >> p.y;
        points.push_back(p);
    }
    vector<Point2d> res;
    for(int i = 0; i < points.size(); i++)
    {
        Point2d p = points[i];
        for(int j = 0; j < points.size(); j++)
        {
            Point2d t = points[j];
            if(p.x < t.x && p.y < t.y) break;
            if(j == points.size()-1) res.push_back(p);
        }
    }
    sort(res.begin(), res.end(), cmp);
    for(auto p: res)
        cout << p.x << " " << p.y << endl;
    
	return 0;
}
