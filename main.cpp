#include <iostream>
#include<vector>
using namespace std;

template<typename B> class SetofStack{
    public:
    SetofStack(int msize){
    vector<B> A;
    stacks.push_back(A);
    max = msize;
    }
    void push(B value){
    if(stacks[stacks.size()-1].size() < max)
    stacks[stacks.size()-1].push_back(value);
    else{
    vector<B> A;
    A.push_back(value);
    stacks.push_back(A);
    }
    }
    B pop(){
    B val;
    if(stacks[stacks.size()-1].size > 1){
    val = stacks[stacks.size()-1][stacks[stacks.size()-1].size()-1];
    stacks[stacks.size()-1].pop_back();
    }
    else{
    val = stacks[stacks.size()-1][0];
    stacks.pop_back();
    }
    return val;
    }

    B popAT(int index){
    B val = stacks[index][stacks[index].size()-1];
    stacks[index].pop_back();
    return val;
    }
    private:
    vector<vector<B>> stacks;
    int max;
    };
    int main() {
    // ваш код
    return 0;
    }