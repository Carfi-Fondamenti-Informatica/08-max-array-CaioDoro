#include <iostream>
using namespace std;

int main (){
    int g;
    cin >> g;
    float arr[g];
    float n;
    int i;

    for(i=0; i<g; i++){
        cin>>arr[i];
    n = arr[0];}
    for(i=1; i<g; i++)
    {
        if(n<arr[i])
            n = arr[i];
    }
    cout << n << endl;
    return 0;}
