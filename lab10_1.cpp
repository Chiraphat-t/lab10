#include<iostream>
using namespace std;

int main(){
	char grade;
	int i=1;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			count[0]++;
			i++;
		}else if(grade=='B'){ // if grade is B
			count[1]++;
			i++;
		//and so on ... for grade = C, D, F	
		}else if(grade=='C'){
			count[2]++;
			i++;
		}else if(grade=='D'){
			count[3]++;
			i++;
		}else if(grade=='F'){
			count[4]++;
			i++;
		}else if(grade!='0'){ // grade is wrong input
			cout << "Wrong input. Please input again.\n";
		} 
	}while(grade!='0');
	
	
	cout << "In total " << i-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
