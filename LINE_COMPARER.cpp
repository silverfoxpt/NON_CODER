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
using namespace std;

bool compareLine(vector<int> mainLine, vector<int> proposed)
{
    for (int i = 1; i <= 10; i++)
    {
        if (mainLine[i] == -1) {continue;}
        else
        {
            if (mainLine[i] != proposed[i])
            {
                return false;
            }
        }
    }return true;
}

/*int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream inp("COMPARE_INP.INP");
    vector<int> mainLine, proposedLine; mainLine.push_back(-1); proposedLine.push_back(-1);
    for (int i = 1; i <= 10; i++) {int x; inp >> x; mainLine.push_back(x);}
    for (int i = 1; i <= 10; i++) {int x; inp >> x; proposedLine.push_back(x);}

    bool comparer = compareLine(mainLine, proposedLine);
    if (comparer) {cout << "YES";} else {cout << "NO";}
}*/

