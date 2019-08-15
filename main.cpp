#include <iostream>
#include <string>
#include "pasta.h"
#include "pasta.cpp"

using namespace std;

class classtutorial{
    public:
        classtutorial (string z){
            setname(z);
        }
        void setname(string x){
            name =x;
        }
        string getname(){
            return name;
        }

    private:
        string name;
};

int main()
{
    pasta boi;
    classtutorial bo("yoyo boy");
    cout << bo.getname();

   // bo.setname("boxiffice_1");
    //cout<< bo.getname()<<endl;
    return 0;
}
