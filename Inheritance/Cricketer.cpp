#include<iostream>
#include<string>
using namespace std;

class Batsman{
    protected:
    int scores[5];

    public:
    void setScores(int s1, int s2, int s3, int s4, int s5){
        scores[0]=s1;
        scores[1]=s2;
        scores[2]=s3;
        scores[3]=s4;
        scores[4]=s5;
    }
    int getTotalRuns(){
        int total = 0;
        for(int i=0; i<5; i++){
            total += scores[i];
        }
        return total;
    }
    double getAverageRuns(){
        int total = getTotalRuns();
        return static_cast<double>(total) / 5;
    }
    int getBestPerformance(){
        int best = scores[0];
        for(int i=1; i<5; i++){
            if(scores[i] > best){
                best = scores[i];
            }
        }
        return best;
    }
};
class Cricketer : public Batsman{
    private:
    string name;

    public:
    Cricketer(const string& _name) : name(_name){
        cout<<"Cricketer: "<<name<<endl;
    }

    void displayStatus(){
        // cout<<"Cricketer: "<<name<<endl;
        cout<<"Total Runs: "<<getTotalRuns()<<endl;
        cout<<"Average Runs: "<<getAverageRuns()<<endl;
        cout<<"Best Performance: "<<getBestPerformance()<<endl;
    }
};
int main(){
    Cricketer player("Suraj");
    player.setScores(50,75,60,45,100);
    player.displayStatus();
    return 0;
}