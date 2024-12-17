//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    double num,mean,sd,sum=0,s=0;
    string textline;
    ifstream source;
    source.open("score.txt");
    while (getline(source,textline))
    {
        num++;
        sum += atof(textline.c_str());
        s += pow(atof(textline.c_str()),2);

    }
        mean = sum/num;
        sd = pow(((s/num)-pow(mean,2)),0.5);
    source.close();




    cout << "Number of data = "<< num << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean<< endl;
    cout << "Standard deviation = "<< sd;
}