#include <iostream>
using namespace std;
class Animal{
protected:
  string name;
  int age;
  string species;
public:
  Animal(string name="N/A",int age=0,string species="N/A"){
    setname(name);
    setage(age);
    setspecies(species);
  }
  void setname(string name){
    this->name=name;
  }
  void setage(int age){
    this->age=age;
  }
  void setspecies(string species){
    this->species=species;
  }
  string getname(){
    return name;
  }
  int getage(){
    return age;
  }
  string getspecies(){
    return species;
  }
};
class Mammal :public Animal{
protected:
  string furcolor;
  int hungerlevel;
  string gromed;
public:
  Mammal(string furcolor,int hungerlevel,string gromed,string name,int age,string species):Animal(name,age,species){
    setfur(furcolor);
    sethunger(hungerlevel);
    setgromed(gromed);
  }
  void setfur(string furcolor){
    this->furcolor=furcolor;
  }
  void sethunger(int hungerlevel){
    this->hungerlevel=hungerlevel;
  }
  void setgromed(string gromed){
    this->gromed=gromed;
  }
  string getfur(){
    return furcolor;
  }
  int gethunger(){
    return hungerlevel;
  }
  string getgromed(){
    return gromed;
  }
  void display(){
    cout<<"Name:"<<getname()<<endl;
    cout<<"Age:"<<getage()<<endl;
    cout<<"Specie:"<<getspecies()<<endl;
    cout<<"Fur Color:"<<getfur()<<endl;
    cout<<"Hunger Level /10:"<<gethunger()<<endl;
    cout<<"Gormed Yes or Not:"<<getgromed()<<endl;

  }
};
class Bird:public Animal{
protected:
  string feathercolor;
  string nestlocation;
  string foodpreference;
public:
  Bird(string feathercolor,string nestlocation,string foodpreference,string name,int age,string species):Animal(name,age,species){
    setfeather(feathercolor);
    setnestloc(nestlocation);
    setfoodpref(foodpreference);
  }
  void setfeather(string feathercolor){
    this->feathercolor=feathercolor;
  }
  void setnestloc(string nestlocation){
    this->nestlocation=nestlocation;
  }
  void setfoodpref(string foodpreference){
    this->foodpreference=foodpreference;
  }
  string getfeather(){
    return feathercolor;
  }
  string getnestloca(){
    return nestlocation;
  }
  string getfoodpref(){
    return foodpreference;
  }
  void display(){
    cout<<"Name:"<<getname()<<endl;
    cout<<"Age:"<<getage()<<endl;
    cout<<"Specie:"<<getspecies()<<endl;
    cout<<"Feather Color:"<<getfeather()<<endl;
    cout<<"Nest Location:"<<getnestloca()<<endl;
    cout<<"Food Prefernce:"<<getfoodpref()<<endl;

  }
};
class Reptile:public Animal{
protected:
  string scalepattern;
  int sunbathing;
  string preferredhabitat;
public:
  Reptile(string scalepattern,int sunbathing,string preferredhabitat,string name,int age,string species):Animal(name,age,species){
    setscale(scalepattern);
    setsunbathing(sunbathing);
    setprefer(preferredhabitat);
  }
  void setscale(string scalepattern){
    this->scalepattern=scalepattern;
  }
  void setsunbathing(int sunbathing){
    this->sunbathing=sunbathing;
  }
  void setprefer(string preferredhabitat){
    this->preferredhabitat=preferredhabitat;
  }
  string getscale(){
    return scalepattern;
  }
  int getsunbath(){
    return sunbathing;
  }
  string getpreferdhab(){
    return preferredhabitat;
  }
  void display(){
    cout<<"Name:"<<getname()<<endl;
    cout<<"Age:"<<getage()<<endl;
    cout<<"Specie:"<<getspecies()<<endl;
    cout<<"Scale Pattern:"<<getscale()<<endl;
    cout<<"Sun Bath Duration:"<<getsunbath()<<endl;
    cout<<"Prefered Habitat:"<<getpreferdhab()<<endl;

  }
};

int main(int argc, char const *argv[]) {
  Mammal Cat("Black",9,"Yes","Cato",2,"Cat");
  Mammal Dog("White",8,"NO","Husky",5,"Dog");
  Bird Parrot("Green","Mango Tree","Rice","Rio",4,"Parrot");
  Bird Macaw("Blue","ALmond Tree","WallNuts","Macy",10,"Macaw");
  Reptile snake("Dotted",4,"Desert","snaky",15,"Snake");
  Reptile turtle("Scutes",10,"Forest","Turt",25,"Turtle");
  int choice;
  do{
    cout<<"------ZOO SIMULATION------"<<endl;
  cout<<"Press [1] for "<<Cat.getspecies()<<"..."<<endl;
  cout<<"Press [2] for "<<Dog.getspecies()<<"..."<<endl;
  cout<<"Press [3] for "<<Parrot.getspecies()<<"..."<<endl;
  cout<<"Press [4] for "<<Macaw.getspecies()<<"..."<<endl;
  cout<<"Press [5] for "<<snake.getspecies()<<"..."<<endl;
  cout<<"Press [6] for "<<turtle.getspecies()<<"..."<<endl;
  cout<<"Press [0] to Exit"<<"..."<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"Your Choice:";
  cin>>choice;
  if (choice==1) {
    int choi;
    do{
      cout<<endl;
    cout<<"Press 1 To Chk Hunger Level"<<endl;
    cout<<"Press 2 For Fur Color"<<endl;
    cout<<"Press 3 for Grommed"<<endl;
    cout<<"Press 4 to View Detail Information"<<endl;
    cout<<"Press 5 to Update Hunger Level ?"<<endl;
    cout<<"Press 6 to Update Grommed Status"<<endl;
    cout<<"Press 0 to Exit"<<endl;
    cout<<"Your Choice:";
    cin>>choi;
      if (choi==1) {
        int ch;
        cout<<endl;
        cout<<"Hunger Level /10:   "<<Cat.gethunger()<<endl;
      }

      else if (choi==2) {
        cout<<"Fur Color"<<Cat.getfur()<<endl;
      }
      else if (choi==3) {
        cout<<"Grommed Statue: "<<Cat.getgromed()<<endl;
      }
      else if (choi==4) {
        cout<<endl;
        cout<<"Cat Detail----->"<<endl;
        cout<<endl;
        Cat.display();

      }
      else if (choi==5) {
              int hng;
                cout<<"Enter Hunger Level:";
                cin>>hng;
                Cat.sethunger(hng);
                cout<<"Updated!!"<<endl;

            }
        else if (choi==6) {
              string status;
              cout<<"Enter New Status [YES/NO]:";
              cin>>status;
              Cat.setgromed(status);
            }

    }while(choi!=0);

  }
  else if (choice==2) {
    int choce;
    do{
    cout<<endl;
    cout<<"Press 1 To Chk Hunger Level"<<endl;
    cout<<"Press 2 TO Chk Fur Color"<<endl;
    cout<<"Press 3 To chk Grommed"<<endl;
    cout<<"Press 4 to View Detail Information"<<endl;
    cout<<"Press 5 to Update Hunger Level ?"<<endl;
    cout<<"Press 6 to Update Grommed Status"<<endl;
    cout<<"Press 0 to Exit"<<endl;
    cout<<"Your Choice:";
    cin>>choce;
      if (choce==1) {
        cout<<endl;
        cout<<"Hunger Level /10:   "<<Dog.gethunger()<<endl;
      }
      else if (choce==5) {
        int hng;
        cout<<"Enter Hunger Level:";
        cin>>hng;
        Dog.sethunger(hng);
        cout<<"Updated!!"<<endl;

            }

      else if (choce==2) {
        cout<<"Fur Color"<<Dog.getfur()<<endl;
      }
      else if (choce==3) {
        cout<<"Grommed Statue: "<<Dog.getgromed()<<endl;
      }

      else if (choce==6) {
            string status;
            cout<<"Enter Status:";
            cin>>status;
            Dog.setgromed(status);
            cout<<"Updated!!"<<endl;
          }

      else if (choce==4) {
        cout<<"Dog Detail----->"<<endl;
        cout<<endl;
        Dog.display();

      }

    }while(choce!=0);
  }
  else if (choice==3) {
    int ch;
    do{
      cout<<"Press 1 to View Food Preference:"<<endl;
      cout<<"Press 2 to View Nest Location"<<endl;
      cout<<"Press 3 to Update Nest Location"<<endl;
      cout<<"Press 4 to View Details"<<endl;
      cout<<"Press 0 to Exit"<<endl;
      cout<<"Your Choice:";
      cin>>ch;
      if (ch==1) {
        string food;
        cout<<"Food Prefernce: "<<Parrot.getfoodpref()<<endl;
        cout<<"Press 1 to Update Food Preference:"<<endl;
        cout<<"Press 0 to Exit"<<endl;
        cout<<"Your Choice:";
        int c;
        cin>>c;
        if (c==1) {
          cout<<"Enter Food:"<<endl;
          cin>>food;
          Parrot.setfoodpref(food);
        }
        else if(c==0){
          break;
        }
      }
      else if (ch==2) {
      cout<<"Nest Location: "<<Parrot.getnestloca()<<endl;
      }
      else if (ch==3) {
        string loc;
        cout<<"Enter New Nest Location"<<endl;
        cin>>loc;
        Parrot.setnestloc(loc);
      }
      else if (ch==4) {
        cout<<endl;
        cout<<"Parrot Details----------->"<<endl;
        Parrot.display();
        cout<<endl;
      }
    }while(ch!=0);
  }
  else if (choice==4) {
    int ch;
    do{
      cout<<"Press 1 to View Food Preference:"<<endl;
      cout<<"Press 2 to View Nest Location"<<endl;
      cout<<"Press 3 to Update Nest Location"<<endl;
      cout<<"Press 4 to View Details"<<endl;
      cout<<"Press 0 to Exit"<<endl;
      cout<<"Your Choice:";
      cin>>ch;
      if (ch==1) {
        string food;
        cout<<"Food Prefernce: "<<Macaw.getfoodpref()<<endl;
        cout<<"Press 1 to Update Food Preference:"<<endl;
        cout<<"Press 0 to Exit"<<endl;
        cout<<"Your Choice:";
        int c;
        cin>>c;
        if (c==1) {
          cout<<"Enter Food:"<<endl;
          cin>>food;
          Macaw.setfoodpref(food);
        }
        else if(c==0){
          break;
        }
      }
      else if (ch==2) {
      cout<<"Nest Location: "<<Macaw.getnestloca()<<endl;
      }
      else if (ch==3) {
        string loc;
        cout<<"Enter New Nest Location"<<endl;
        cin>>loc;
        Macaw.setnestloc(loc);
      }
      else if (ch==4) {
        cout<<endl;
        cout<<"Macaw Details----------->"<<endl;
        Macaw.display();
        cout<<endl;
      }
    }while(ch!=0);
  }
  else if (choice ==5) {
      int ch;
  do{
        cout<<endl;
    cout<<"Press 1 To View Sun Bathing Duration"<<endl;
    cout<<"Press 2 TO Update Sun bathing Duration"<<endl;
    cout<<"Press 3 TO View Preferred habitat"<<endl;
    cout<<"Press 4 TO Update Habitat"<<endl;
    cout<<"Press 5 TO View Detail"<<endl;
    cout<<"Press 0 to Exit"<<endl;
    cout<<"Your Choice:";
    cin>>ch;
        if (ch==1) {
          cout<<"Sun Bathing Duration: "<<snake.getsunbath()<<" hr"<<endl;
        }
        else if (ch==2) {
          int dura;
          cout<<"Enter New Sun Bathing Duration: ";
          cin>>dura;
          snake.setsunbathing(dura);
            cout<<"Sun Bathing Time Updated!!"<<endl;
        }
          else if (ch==3) {
            cout<<"Preferred Habitat: "<<snake.getpreferdhab()<<endl;
          }
          else if (ch==4) {
            string hab;
            cout<<"Enter New Habitat: ";
            cin>>hab;
            snake.setprefer(hab);
            cout<<"Habitat Updated!!"<<endl;
          }
          else if (ch==5) {
            cout<<endl;
            cout<<"Snake Details-----"<<endl;
            snake.display();
            cout<<endl;
          }
  }while(ch!=0);
  }
  else if (choice==6) {
    int ch;
do{
      cout<<endl;
  cout<<"Press 1 To View Sun Bathing Duration"<<endl;
  cout<<"Press 2 TO Update Sun bathing Duration"<<endl;
  cout<<"Press 3 TO View Preferred habitat"<<endl;
  cout<<"Press 4 TO Update Habitat"<<endl;
  cout<<"Press 5 TO View Detail"<<endl;
  cout<<"Press 0 to Exit"<<endl;
  cout<<"Your Choice:";
  cin>>ch;
      if (ch==1) {
        cout<<"Sun Bathing Duration: "<<turtle.getsunbath()<<" hr"<<endl;
      }
      else if (ch==2) {
        int dura;
        cout<<"Enter New Sun Bathing Duration: ";
        cin>>dura;
        turtle.setsunbathing(dura);
          cout<<"Sun Bathing Time Updated!!"<<endl;
      }
        else if (ch==3) {
          cout<<"Preferred Habitat: "<<turtle.getpreferdhab()<<endl;
        }
        else if (ch==4) {
          string hab;
          cout<<"Enter New Habitat: ";
          cin>>hab;
          turtle.setprefer(hab);
          cout<<"Habitat Updated!!"<<endl;
        }
        else if (ch==5) {
          cout<<endl;
          cout<<"Snake Details-----"<<endl;
          turtle.display();
          cout<<endl;
        }
}while(ch!=0);
  }
}while(choice!=0);
cout<<endl;
cout<<"Exiting Zoo Simulation........"<<endl;
  return 0;
}
