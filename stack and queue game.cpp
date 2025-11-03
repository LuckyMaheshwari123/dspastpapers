#include<iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front, rear, capacity;

public:
    // Constructor to initialize the queue
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = 0;
    }

    // Destructor to release memory
    ~Queue() {
        delete[] arr;
    }

    // Check if the queue is full
    bool isFull() {
        return rear == capacity;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return rear == front;
    }

    // Add an element to the rear of the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        arr[rear++] = value;
    }

    // Remove an element from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Return -1 when queue is empty
        }
        return arr[front++];
    }

    // Get the front element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Get the current size of the queue
    int size() {
        return rear - front;
    }
};
int getmax(int arr[],int n){
    int max=arr[0];
    int id=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            id=i;
        }
    }
    return id;
}

void simulategame(Queue &q1,int win[]){
    for(int i=0;i<25;i++){
    int arr[4]={0,0,0,0};
    //for cards
    for(int j=0;j<4;j++){
       
        arr[j]=q1.dequeue();
       
    }
    int n=getmax(arr,4);
    win[n]+=4;
    
}
}
void encode(Queue &q1){
      for(int i=0;i<100;i++){
        q1.enqueue(i+1);
        
    }
}
int main(){
    Queue q1(100);
    encode(q1);
int winn[4]={0,0,0,0};
simulategame(q1,winn);

 



int n=getmax(winn,4);
cout<<"the winner is "<<n+1<<endl;
//>>>>>>
// now here you have to insert tie breaking condition
    
    
    
    
    
    
    
    
    
    
    
    
}
