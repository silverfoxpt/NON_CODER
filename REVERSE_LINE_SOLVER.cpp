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

void displayVector(vector<int> a)
{
    for (int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream inp("REV_LINE.INP");
    int a[11];
    for (int i = 1; i <= 10; i++) {inp >> a[i];}

    int len = 1; int x = a[1]; vector<int> tmp;
    for (int i = 1; i <= 10; i++)
    {
        if (x == a[i] && a[i] == 1) {len++;}
        else if (x != a[i] && x == 1)
        {
            tmp.push_back(len); len = 1; x = a[i];
        }
        else if (x!= a[i]) {x = a[i];}
    }
    if (x==1) {tmp.push_back(len);}
    displayVector(tmp);
}

