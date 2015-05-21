/*Inspired by the development team at Vooza, write the function howManyLightsabersDoYouOwn that
accepts the name of a programmer, and
returns the number of lightsabers owned by that person.
The only person who owns lightsabers is Zach, by the way. He owns 18, which is an awesome number of lightsabers. Anyone else owns 0.
No starting help here -- you'll need to know how to write a function that accepts a parameter and
returns a value based on that parameter.
*/
#include <iostream>
#include <string>
using namespace std;
string findname(string name, string zach);
int main (){
    string name;
    string zach="zach";
    cout<<"please enter your name"<<endl;
    getline(cin, name);
    cout<<findname(name, zach);
}
string findname(string name, string zach){
           if(name==zach){
                return "Zach, has 18 lightsabers!!";
            }
            else {
                return name+" has 0 lightsabers";
            } 
            
}