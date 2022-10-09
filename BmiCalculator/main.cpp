#include <iostream> // This is a file

using namespace std; // This is a library
 int main(){	// This is a main funtion
		int weight,height, BMI;
		cout<<"Enter your name ";
		string name;
		cin>>name;
		cout<<"Enter your Weight ";
		cin>>weight;
		cout<<"Enter your Height ";
		cin>>height;



		BMI = weight/(height+height);
		cout<<"Your Name is "<< name<<" Your BMI is "<<BMI<< endl;
		if(BMI>25){
                /*if(BMI>30){
                   cout>>"Your weight is very High";
                }
                else{
                   cout>>"Your weight is over";
                }*/

		}
		else if(BMI<18){
            cout>> "Your weight is low";
		}
		else{
            out>> "Your BMI is Normal Level";
		}
		return 0;



}
