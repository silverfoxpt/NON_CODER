#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>
#include <set>
#include <cstdio>
#include <iomanip>
#include <cctype>
#include <utility>
#include <cmath>
#include <climits>
#include "LINE_SOLVER.h"
using namespace std;

vector<int> similarLine(vector<vector<int> > curLine)
{
    vector<bool> marked;
    for (int i = 0; i <= 10; i++) {marked.push_back(true);}
    for (int i = 0 ;i < curLine.size(); i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (curLine[i][j] == 0) {marked[j] = false;}
        }
    }
    vector<int> res; res.push_back(-1);
    for (int i = 1; i <= 10; i++)
    {
        if (marked[i]) {res.push_back(1);} else {res.push_back(0);}
    }
    return res;

}

void displayVector(vector<int> a)
{
    for (int i = 1; i <= 10; i++) {cout << a[i] << " ";}
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream inp("SIM_LINE.INP");
    int n; inp >> n; vector<int> curline; curline.push_back(-1); vector<int> pos; pos.push_back(-1);
    for (int i = 1; i <= n; i++) {int x; inp >> x; curline.push_back(x); pos.push_back(-1);}
    vector<vector<int> > calculatedProposed = Try(1, 1, curline, pos, n);
    vector<int> res = similarLine(calculatedProposed);
    displayVector(res);
}

