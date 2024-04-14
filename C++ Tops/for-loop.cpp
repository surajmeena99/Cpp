#include<iostream>
using namespace std;

main(){
    int i,num;
    cout<<"Enter a number:";  //printf("Enter a number:");
    cin>>num;  //scanf("%d", &num);
    for(i=1; i<=num; i++){
        cout<<"\n"<<i;  //printf("%d\n",i);
    }
}