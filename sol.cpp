using namespace std;
#include <iostream>

bool checker = false;
bool checker2 = false;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge < 0) {
            age = 0;
            if (checker) {
                cout << '\n';
            }
            cout << "Age is not valid, setting age to 0.";
            checker2 = true;
        } else {
            age = initialAge;
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (checker2) {
            cout << '\n';   
        }
        if (age < 13) {
            cout << "You are young.";
        } else if (age < 18) {
            cout << "You are a teenager.";
        } else {
            cout << "You are old.";
        }
        checker = checker2 = true;
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age += 1;
        checker = true;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
