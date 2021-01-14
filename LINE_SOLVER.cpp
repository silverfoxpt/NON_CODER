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

const int MAXN = 5; int a[MAXN+1]; int n; int pos[MAXN+1];



void displayRes()
{
    for (int i = 1; i <= 10; i++)
    {
        bool cor = false;
        for (int j = 1; j <= n; j++)
        {
            if (i >= pos[j] && i <= pos[j]+a[j]-1) {cor = true; break;}
        }
        if (cor) {cout << "1 ";} else {cout << "0 ";}
    }
    cout << "\n";
}

int maxpos(int i)
{
    return 10 - a[i] +1;
}

void Try(int i, int counter)
{
    for (int j = i; j <= maxpos(counter); j++)
    {
        int endline = j + a[counter] - 1;
        if (endline > 10) {break;}
        else
        {
            pos[counter] = j;
            if (counter == n) {displayRes();}
            Try(endline+2, counter+1);
        }
    }
}

bool checkLine()
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {sum += a[i];}
    if (sum > 10) {return false;}
    if (10 - sum < n-1) {return false;}
    return true;
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream inp("LINER.INP");
    inp >> n;
    for (int i = 1; i <= n; i++) {inp >> a[i];}
    if(!checkLine()) {cout << "Line not sufficient." << endl; return 0;}
    Try(1, 1);
}

