#include <iostream>
#include <queue>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of the queue: ";
    cin>>size;

    int qu[size];
    int sizern=0;
    int front=-1;
    int back=-1;

    while(true){
        cout<<("\nWhat do you want to perform: \n");
		cout<<("1.enqueue\n");
		cout<<("2.dequeue\n");
		cout<<("3.isEmpty\n");
		cout<<("4.isFull\n");
		cout<<("5.Display\n");
        cout<<("6.Peek\n");
		cout<<("7.Exit\n");
		int num;
		cin>>num;

        switch (num)
        {
        case 1:
            if(sizern<size){
                if(front==-1){
                    front=0;
                }
                int numPush;
                back=(back+1) % size;
                cout<<"Enter the number to add to queue: ";
                cin>>numPush;
                qu[back]=numPush; 
                cout<<"Queued "<<numPush<<" to the queue";
                sizern++;   
            }
            else{
                cout<<"queue is full!";
            }
              
            break;
        case 2:
            if(sizern!=0){
                int numPop=qu[front];
                front=(front+1)%size;
                sizern--;
                cout<<"Removed "<<numPop<<" from the queue";
                if(sizern==0){
                    front=-1;
                    back=-1;
                }
            }
            else{
                cout<<"The queue is already empty!";
            }
            break;
        case 3:
            if(sizern==0){
                cout<<"The queue is empty";
            }
            else{
                cout<<"The queueue is not empty";
            }
            
            break;
        case 4:
            if(sizern==size){
                cout<<"The queue is full";
            }
            else{
                cout<<"The queue is not full";
            }
            break;
        case 5:
            if (sizern==0) {
                cout << "Queue is empty!";
            } else {
                cout << "Queue elements: ";
                for(int i=0;i<sizern;i++){
                    cout<<qu[(front + i) % size] << " ";
                }
            }
            break;
        case 6:
            if (sizern==0) {
                cout << "Queue is empty!";
            } else {
                cout << "Front element: " << qu[front];
            }
            break;
            break;
        case 7:
            cout<<"Exiting! ";
            return 0;
        
        default:
            cout<<"Invalid code. Try again!";
            break;
        }
    }
}