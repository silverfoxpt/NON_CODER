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

vector<int> calculateRes(vector<int> a, vector<int> pos, int n)
{
    vector<int> returnVec; for (int i = 0; i <= 10; i++) {returnVec.push_back(-1);}
    for (int i = 1; i <= 10; i++)
    {
        bool cor = false;
        for (int j = 1; j <= n; j++)
        {
            if (i >= pos[j] && i <= pos[j]+a[j]-1) {cor = true; break;}
        }
        if (cor) {returnVec[i] = 1;} else {returnVec[i] = 0;}
    }
    return returnVec;
}

int maxpos(int i, vector<int> a)
{
    return 10 - a[i] +1;
}

vector<vector<int> > Try(int i, int counter, vector<int> a, vector<int>& pos, int n)
{
    vector<vector<int> > res;
    for (int j = i; j <= maxpos(counter, a); j++)
    {
        int endline = j + a[counter] - 1;
        if (endline > 10) {break;}
        else
        {
            pos[counter] = j;
            if (counter == n) {vector<int> tmp = calculateRes(a, pos, n); res.push_back(tmp);}
            vector<vector<int> > tmpo = Try(endline+2, counter+1, a, pos, n);
            for (int x = 0; x < tmpo.size(); x++){ res.push_back(tmpo[x]);  }
        }
    }
    return res;
}

void displayRes(vector<vector<int> > a)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

bool checkLine(vector<int> a, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {sum += a[i];}
    if (sum > 10) {return false;}
    if (10 - sum < n-1) {return false;}
    return true;
}

/*int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream inp("LINER.INP");
    int n;
    inp >> n;
    vector<int> a; a.push_back(-1); // vector a : store input data
    vector<int> pos; for (int i = 0; i <=n ; i++) {pos.push_back(-1);} //vector pos : store output data
    for (int i = 1; i <= n; i++) {int x; inp >> x; a.push_back(x);}

    if(!checkLine(a, n)) {cout << "Line not sufficient." << endl; return 0;}
    vector<vector<int> > tryVec = Try(1, 1, a, pos, n);
    displayRes(tryVec);
}*/

