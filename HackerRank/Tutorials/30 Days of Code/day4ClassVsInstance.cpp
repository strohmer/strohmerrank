/*
 * http://www.github.com/Strohmer
 * https://www.hackerrank.com/Strohmer
 * Wenn du durch die Hölle gehst, geh weiter!
 */

/*
Write a Person class with an instance variable, age, and a constructor that
takes an integer, initialAge, as a parameter. The constructor must assign
initialAge to age after confirming the argument passed as initialAge is not
negative; if a negative argument is passed as initialAge, the constructor should
set age to 0 and print Age is not valid, setting age to 0.. In addition, you
must write the following instance methods:

  1. yearPasses() should increase the instance variable by 1.
  2. amIOld() should perform the following conditional actions:
    * If age < 13, print "You are young."
    * If age >= 13 and age < 18, print "You are a teenager."
    * Otherwise, print "You are old."
*/

using namespace std;
#include <iostream>

Class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console

    }

    void Person::yearPasses(){
        // Increment the age of the person in here

    }

int main() {
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
