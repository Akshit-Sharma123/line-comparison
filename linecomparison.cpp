#include<iostream>
#include<cmath>
using namespace std;
int calLengthOfLine(){

    int x1,x2,y1,y2;
    cout<<"Enter co ordinates of a line "<<endl;
    cout<<"Enter x1 "<<endl;
    cin>>x1;
    cout<<"Enter x2 "<<endl;
    cin>>x2;
    cout<<"Enter y1 "<<endl;
    cin>>y1;
    cout<<"Enter y2 "<<endl;
    cin>>y2;
    int ans=(sqrt((x2-x1)*(x2-x1))) -sqrt((y2-y1)*(y2-y1));
    return ans;
}
int main(){
    cout<<"Line comparison Problem"<<endl;
    
    
    int line1length=calLengthOfLine();
    int line2length=calLengthOfLine();
    if(line1length==line2length){
        cout<<"Two lines are equal"<<endl;
    }
    else{
      cout<<"Two lines are not equal"<<endl;
    }
}
