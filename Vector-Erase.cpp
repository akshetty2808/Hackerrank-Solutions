#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, a;
    vector<int> v;
    int size = v.size();
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+(x-1));
    int f, l;
    cin>>f>>l;
    v.erase(v.begin()+(f-1), v.begin()+(l-1));
      
    n = n - (l-f) - 1;
    cout<<n<<endl;
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
