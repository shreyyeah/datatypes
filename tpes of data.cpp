#include<iostream>
int main()
{
using namespace std;

int myintvar; float myfloatvar; double mydoublevar; char mycharvar;bool myboolvar; 
string mystrvar;

cout<<"Enter a integer no.:"; //input integer
cin>>myintvar;
cout<<"Enter a float no.:"; //input float
cin>>myfloatvar;
cout<<"Enter a double no.:"; //input double
cin>>mydoublevar;
cout<<"Enter a char no.:"; //input char
cin>>mycharvar;
cout<<"Enter a bool no.:"; //input boolean
cin>>myboolvar;
cout<<"Enter a string:"; //input string 
cin>>mystrvar;
cout<<"Integer no.:"<<myintvar<<endl;
cout<<"Float no.:"<<myfloatvar<<endl;
cout<<"double no.:"<<mydoublevar<<endl;
cout<<"char :"<<mycharvar<<endl;
cout<<"bool:"<<myboolvar<<endl;
cout<<"string:"<<mystrvar<<endl;

/*To check the size of each data type*/
cout<<"Size of intvar:"<<sizeof (myintvar)<<"bytes"<<endl;
cout<<"Size of floatvar:"<<sizeof (myfloatvar)<<"bytes"<<endl;
cout<<"Size of doublevar:"<<sizeof (mydoublevar)<<"bytes"<<endl;
cout<<"Size of charvar:"<<sizeof (mycharvar)<<"bytes"<<endl;
cout<<"Size of boolvar:"<<sizeof (myboolvar)<<"bytes"<<endl;
}