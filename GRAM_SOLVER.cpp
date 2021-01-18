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
#include "LINE_COMPARER.h"
using namespace std;

int n; vector< vector<int> > rows, cols;

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream inp("NON.INP");
    for (int i = 1; i <= 10; i++)
    {
        vector<int> tmp;
        inp >> n;
        int x; for (int j = 1; j <= n; j++) {inp >> x; tmp.push_back(x);}
        rows.push_back(tmp);
    }
    for (int i = 1; i <= 10; i++)
    {
        vector<int> tmp;
        inp >> n;
        int x; for (int j = 1; j <= n; j++) {inp >> x; tmp.push_back(x);}
        cols.push_back(tmp);
    }


}

