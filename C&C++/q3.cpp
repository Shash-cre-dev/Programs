#include<iostream>
using namespace std;

class Registration{
    public:
    int tot_participant_count;
    int reg_amount;

    int amount(){
        int total = tot_participant_count*reg_amount;
        return total;
    }

};

int main(){
    int n;
    cout<<"Enter no. of events";
    cin>>n;
    int sumtotal =0;
    for(int i = 0 ; i<n;i++){
        
        Registration r[i];
        cout<<"Enter details for event  "<<i+1<<endl;
        cin>>r[i].tot_participant_count;
        cin>>r[i].reg_amount;
        // r[i].amount();
        sumtotal += r[i].amount();
    }
    cout<<sumtotal<<endl;

}
