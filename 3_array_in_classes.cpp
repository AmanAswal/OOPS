#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    int numberOfItems;
    
    public:
        void initCounter(void) {
            counter = 0;
        }
        void setPrice(void);
        void displayPrice(void);
        void setNumberOfItems(void);
        void runLoop(void);
};

void Shop :: setNumberOfItems(void){
    cout<<"Enter Number of Items : ";
    cin>>numberOfItems;
}

void Shop :: runLoop(void){
    for(int i=0; i<numberOfItems; i++){
        setPrice();
    }
}

void Shop :: setPrice(void){
    cout<<"Enter id of your item no "<<counter+1<<" : ";
    cin>>itemId[counter];
    cout<<"Enter price of your item: ";
    cin>>itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setNumberOfItems();
    dukan.runLoop();
    dukan.displayPrice();
    return 0;
}