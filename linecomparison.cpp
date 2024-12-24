#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Line comparison Problem"<<endl;

    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    int ans=(sqrt((x2-x1)*(x2-x1))) -sqrt((y2-y1)*(y2-y1));
    cout<<ans;
}
