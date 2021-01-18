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

}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream inp("SIM_LINE.INP");
    int n; inp >> n; vector<int> curline; curline.push_back(-1); vector<int> pos; pos.push_back(-1);
    for (int i = 1; i <= n; i++) {int x; cin >> x; curline.push_back(x); pos.push_back(-1);}
    vector<vector<int> > calculatedProposed = Try(1, 1, curline, pos, n);
}

