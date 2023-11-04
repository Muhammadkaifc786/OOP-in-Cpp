#include <iostream>
using namespace std;
class Employee{
private:
string name;
int employeeID;
double salary;
public:
Employee(string name="N/A",int employeeID=0,double salary=0.0){
    setname(name);
    setemployeeid(employeeID);
    setsalary(salary);
}
void setname(string name){
this->name=name;
}
void setemployeeid(int employeeID){
    this->employeeID=employeeID;
}
void setsalary(double salary){
    this->salary=salary;
}
    string getname(){
        return name;
    }
    int getemployeeID(){
        return employeeID;
    }
    double getsalary(){
        return salary;
    }
};
class Manager:public Employee{
private:
int numberOfReports;
public:
Manager(int numberOfReports,string name,int employeeID,double salary):Employee(name,employeeID,salary){
   setnumberOfReports(numberOfReports) ;
}
void setnumberOfReports(int numberOfReports)
{
    this->numberOfReports=numberOfReports;
}
int getnumberOfReports(){
    return numberOfReports;
}
   void display(){
        cout<<"Name: "<<getname()<<endl;
        cout<<"Employee ID: "<<getemployeeID()<<endl;
        cout<<"Salary: "<<getsalary()<<endl;
        cout<<"No Of Reports: "<<getnumberOfReports()<<endl;
    }

};
class Engineer:public Employee{
private:
string Specialization;
public:
    Engineer(string Specialization,string name,int employeeID,double salary):Employee(name,employeeID,salary){
   setSpecialization(Specialization) ;
}
void setSpecialization(string Specialization){
    this->Specialization=Specialization;
}
string getSpecialization(){
    return Specialization;
}
      void display(){
        cout<<"Name: "<<getname()<<endl;
        cout<<"Employee ID: "<<getemployeeID()<<endl;
        cout<<"Salary: "<<getsalary()<<endl;
        cout<<"Specialization "<<getSpecialization()<<endl;
    }

};
int main(int argc, char const *argv[])
{
    Manager m(10,"M.Adil",9301,125000);
    Engineer eng("Software","M.Kaif",9307,125000);
    m.display();
    cout<<endl;
    eng.display();

    return 0;
}
