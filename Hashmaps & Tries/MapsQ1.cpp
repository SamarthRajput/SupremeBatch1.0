#include <iostream>
#include<unordered_map>
#include<map>
using namespace std;

// bool CheckCircular(Node* head){
//   unordered_map<Node* , bool>visited;
//   Node* temp = head;

//   while(temp != NULL){
//     if(visited.find(temp) != visited.end()){
//       visited[temp] = true;
//     }
//     else{
//       return true;
//     }
//     temp = temp->next;
//   }
//   return false;
// }

int main() {
  string str = "thiruvananthapuram";
  // unordered_map<char , int>freq;  //ans comes in an unsorted way
  map<char , int>freq;  //ans comes in a sorted way

  for(int i =0 ; i < str.length() ; i++){
    char ch = str[i];
    freq[ch]++;
  }

  for(auto i:freq){
    cout << i.first << " -> " << i.second << endl;
  }
  return 0;
}