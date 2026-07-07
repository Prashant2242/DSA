#include <iostream>
using namespace std;
#include <vector>

void print(vector<int>& a){
    for(int i=0; i<a.size();i++){
        cout<<a[i];
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<a.size();i++){
         cin>>a[i];
    }
  

    print(a);
    return 0;

}