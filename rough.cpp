#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person{
    protected:
        int age;
        string name;

    public:
        Person(){} // constructor
        virtual void getdata(){
        }
        virtual void putdata(){
        }
        ~Person(){} //destructor to destruct the allocations made when the object is dead
};

class Professor: public Person{
private:
    int publications,cur_id;
    static int id;// by default the value stored here is zero
public:
    Professor(){
        id++;
         cur_id=id;
    }
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }
};

class Student : public Person{
    private:
        const static int MAX = 6;
        int marks[MAX];
        int cur_id;
        static int id;

public:
    Student(){
        id++;
        cur_id =id;
    }
    void getdata(){
        cin>>name>>age;
        for(int i = 0; i< MAX;i++){
            cin>>marks[i];
        }
    }
    void putdata(){
        cout<<name<<" "<<age<<" ";
        int sum;
        for(int i = 0 ; i<MAX;i++){
            sum= sum+marks[i];
        }
        cout<<sum<<" "<<cur_id<<endl;
    }
};


int Professor :: id =0;
int Student::id=0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
