// CHEK THE CODE AGAIN AND AGAIN.

#include<iostream>
using namespace std;
class shop{
    int itemid[10];
    int itemprice[10];
    int counter;
    public:
    void initcounter (void){counter=0;}
void setprice(void);
void displayprice(void);
};
void shop:: setprice(void){
    cout<<"Enter id of your item no."<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item."<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop:: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id:"<<itemid[i]<<"is:"<<itemprice[i]<<endl;
    }
}
int main(){
    shop dukaan;
dukaan.initcounter();
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.displayprice();
return 0;
}