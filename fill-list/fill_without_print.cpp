
#include <iostream> 
#include <list> 
using namespace std; 
  
int main() 
{ 
    unsigned long counter = 0;
    list <long> someList, gqlist2; 
    while(true) {
        someList.push_back(counter);
        counter++;
    }
  
    return 0; 
} 