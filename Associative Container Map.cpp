#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	typedef map <int, string> mapType;
	mapType SMap;
	
	SMap.insert(pair<int, string>(1111, "Ayush"));
    SMap.insert(pair<int, string>(1114, "Sahil"));
    SMap.insert(pair<int, string>(1115, "Shantanu"));
    SMap.insert(pair<int, string>(1119, "Jalaja"));
    
    mapType::iterator iter;
    
    cout<<"Student directory"<<endl;
    cout<<"\nSize of the map: "<<SMap.size()<<"\n";
    for( iter = SMap.begin();iter != SMap.end();iter++ ) 
    {
    cout<<iter-> first<<": "<<iter-> second<<"\n";
  }
  int PRN;
  cout<<"\nEnter PRN of the student: ";
  cin>>PRN;
  iter = SMap.find(PRN);
  if (iter !=SMap.end() )
  cout<<PRN<<"'s name is: "<<iter->second;
  else
  cout<<"key is not population map"<<"\n";
  SMap.clear();
}
 
