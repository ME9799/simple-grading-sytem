#include <iostream>
using namespace std;

int main () {
//adm,avg,
string name;
double avg;
cout<<"Enter name "<<endl;
cin>>name;
cout<<"Average Grade "<<endl;
cin>>avg;
cout<<"------------------------------------------------------------------------------"<<endl;

if(avg>=70&&avg<=100) {
	cout<<"Enter name: "<<name<<endl;
	cout<<"Grade: "<<"A"<<endl;
		
}
else if(avg>=60&&avg<=69) {
	cout<<"Enter name: "<<name<<endl;
	cout<<"Grade: "<<"B"<<endl;
	
}
else if(avg>=50&&avg<=59) {
	cout<<"Enter name: "<<name<<endl;
	cout<<"Grade: "<<"C"<<endl;
	
}
 else if(avg>=0&&avg<50) {
	cout<<"Enter name: "<<name<<endl;
	cout<<"Grade: "<<"D"<<endl;
		
}
else {
	cout<<"Enter value between 0 and 100";
}

return 0;
}

