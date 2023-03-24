/*
Write a program that plays a word game with the user. The program should ask the user to enter the following:
His or her name
The name of a city
His or her age
The name of a college
A profession
A type of animal
A pet’s name
After the user has entered these items, the program should display the following story, inserting the user’s input into the appropriate locations:
     There once was a person named name who lived in city.
     At the age of age, name went to college at college.
     name graduated and went to work as a profession.
     Then, name adopted a(n) animal named petname.
     They both lived happily ever after!
*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    string name, city, college, profession, animal, petName;

    // Ask user for name.
    cout << "Enter name: ";
    getline(cin, name);
    // Ask user for city.
    cout << "Enter  city: ";
    getline(cin, city);
    // Ask user for age.
    cout << "Enter age: ";
    cin >> age;
    // Ask user for college.
    cout << "Enter college: ";
    cin.ignore(100, '\n');
    getline(cin, college);
    // Ask user for profession.
    cout << "Enter profession: ";
    getline(cin, profession);
    // Ask user for animal.
    cout << "Enter animal: ";
    getline(cin, animal);
    // Ask user for pet's name.
    cout << "Enter pet name: ";
    getline(cin, petName);
    // Display story with the user's input.
    cout << "There once was a person named " << name << " who lived in " << city << ".\n" << "At the age of " << age << ", " << name << " went to college at " << college << ".\n" << name << " graduated and went to work as a " << profession << ".\n" << "Then, " << name << " adopted a(n) " << animal << " named " << petName << ".\n" << "They both lived happily ever after!" << endl;
}