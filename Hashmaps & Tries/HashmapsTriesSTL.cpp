#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map <string, int> m;

    //insertion
    //1st way
    pair<string ,int> p = make_pair("scorpio" , 9);
    m.insert(p);

    //2nd way
    pair<string , int>p2("alto" , 2);
    m.insert(p2); 

    //3rd way
    m["fortuner"] = 10;  //m of fortuner is equal to 10  //we will follow this syntax in insertion


    //Accessing
    cout << m.at("alto") << endl;
    // cout << m.at("Scorpio") << endl;  //this will error as key is not found
    cout << m["fortuner"] << endl;  //we will follow this syntax in access


    //Searching
    //Searching through count() function
    cout << m.count("scorpio") << endl;  //If exists output will be 1 
    cout << m.count("innova") << endl;   //If not exists output will be 0

    //Searching through find() function
    if(m.find("scorpio") != m.end()){    //search karte karte map ke end tak agye
      cout << "scorpio found" << endl;
    }
    else{
      cout << " scorpio not found" << endl;
    }

    //printing size of map
    cout << m.size() << endl;

    cout << m["hummer"] << endl;  //create entry corresponding to the unknown and set its value as 0
    cout << m.size() << endl;

    //iterate on map
   cout << "printing all the values of map" << endl;
    for(auto i :m){
      cout << i.first <<" -> " << i.second << endl;
    }
    return 0;
}