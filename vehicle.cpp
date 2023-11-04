#include <iostream>
using namespace std;
class Vehicle{
private:
    string model;
    string make;
    int year;
public:
Vehicle(string model="N/A",string make="N/A",int year=0){
        setmodel(model);
        setmake(make);
        setyear(year);
}
void setmake(string make){
    this->make=make;
}
void setmodel(string model){
    this->model=model;
}
void setyear(int year){
    this->year=year;
}
string getmake(){
    return make;
}
string getmodel(){
    return model;
}
int getyear(){
    return year;
}
void display(){
    cout<<"Make: "<<getmake()<<endl;
    cout<<"Model: "<<getmodel()<<endl;
    cout<<"Year: "<<getyear()<<endl;
}
};
class Car:public Vehicle{
private:
int noDoor;
public:
Car(int noDoor,string make,string model,int year) : Vehicle(model,make,year){
setnoDoor(noDoor);
}
void setnoDoor(int noDoor){
    this->noDoor=noDoor;
}
int getnoDoor(){
    return noDoor;
}
void display(){
    cout<<"Make: "<<getmake()<<endl;
    cout<<"Model: "<<getmodel()<<endl;
    cout<<"Year: "<<getyear()<<endl;
    cout<<"No of Door: "<<getnoDoor()<<endl;
}
};
class Motorcycle : public Vehicle{
private:
string type;
public:
Motorcycle(string type,string make,string model,int year) : Vehicle(model,make,year){
settype(type);
}
void settype(string type){
    this->type=type;
}
string gettype(){
    return type;
}
void display(){
   cout<<"Make: "<<getmake()<<endl;
    cout<<"Model: "<<getmodel()<<endl;
    cout<<"Year: "<<getyear()<<endl;
    cout<<"Type: "<<gettype()<<endl;
}
};
class Truck: public Vehicle{
private:
int cargocapacity;
public:
Truck(int cargocapacity,string make,string model,int year) : Vehicle(model,make,year){
    setcargocapacity(cargocapacity);
}
void setcargocapacity(int cargocapacity){
    this->cargocapacity=cargocapacity;
}
int getcargocapacity(){
    return cargocapacity;
}
void display(){
    cout<<"Make: "<<getmake()<<endl;
    cout<<"Model: "<<getmodel()<<endl;
    cout<<"Year: "<<getyear()<<endl;
    cout<<"Cargo Capacity: "<<getcargocapacity()<<" Kg"<<endl;
    
}
};
int main(int argc, char const *argv[])
{
    Car c(4,"Corolla","Xli",2023);
    Motorcycle m("Sports","BMW","X9",2023);
    Truck t(50000,"Mercedes","Series 3",2023);
    c.display();
    cout<<endl;
    m.display();
    cout<<endl;
    t.display();
    return 0;
}
