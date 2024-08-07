// C++ Sum of 2 numbers to meet target value

#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> twosum(vector<int>&v1,int target){
        int size=v1.size();
        for(int i=0;i<size;i++){
            for(int j=1;j<size;j++){
                if(v1[i]+v1[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    };
};
int main(){

    vector<int> vector{21,2,4,7,0,4,12,32};
    int target;
    cout<<"Enter the target :";
    cin>>target;

    solution q1;
    q1.twosum(vector, target);
}
    