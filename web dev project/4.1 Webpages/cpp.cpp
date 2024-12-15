#include<iostream>
using namespace std;
int main(int argc,char**argv){

    cout<<argc;
    for (int i = 0; i <argc; i++)
    {
        cout<<argv[i];
        return 0;
        /* code */
    }
    
}
// class person{
//     int age;
//     string name;

//     person(int a,string n){
//         name=n;
//         age=a;
//     }
// }
// ostream& operator<<(ostream & out,const person & p)
// {
//     out<<"age"<<p.age<<"name"<<p.name<<endl;
//     return out;
// }
// int main(){
//     person p1("bulu",69);
//     cout<<p1;
// }