#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class EventOrganizer {
    private:
    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

    public:
    void run(){
        cout<<"Welcome to the Event Organizer!"<<endl;
        
        string eventName;
        cout<<"Enter the name of the event: ";
        cin>>eventName;

        string firstName, lastName;
        cout<<"Enter Your first name: ";
        cin>>firstName;
        cout<<"Enter your last name: ";
        cin>>lastName;

        int numberOfGuests;
        cout<<"Enter the number of guests: ";
        cin>>numberOfGuests;

        int numberOfMinutes;
        cout<<"Enter the number of minutes for the event: ";
        cin>>numberOfMinutes;

        //calculate the number of servers needed
        int numberOfServers = static_cast<int>(ceil(static_cast<double>(numberOfGuests)/20));

        //calculate the cost for one server
        double cost1 = (numberOfMinutes / 60)* CostPerHour;
        double cost2 = (numberOfMinutes % 60)* CostPerMinute;
        double costForOneServer = cost1 + cost2;

        //calculate the total food cost
        double totalFoodCost = numberOfGuests * CostOfDinner;

        //calculate the average cost per person
        double averageCost = totalFoodCost / numberOfGuests;

        //calculate the total cost
        double totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        //display the event details and cost estimation
        cout<<"\nEvent Details:"<<endl;
        cout<<"Event Name: "<<eventName<<endl;
        cout<<"Host: "<<firstName<<" "<<lastName<<endl;
        cout<<"Number of Guests: "<<numberOfGuests<<endl;
        cout<<"Number of Servers Needed: "<<numberOfServers<<endl;
        cout<<"Total food Cost: Rs."<<totalFoodCost<<endl;
        cout<<"Average Cost per Person: Rs."<<averageCost<<endl;
        cout<<"Total Cost: Rs."<<totalCost<<endl;
    }
};
int main(){
    EventOrganizer event;
    event.run();
    return 0;
}