#include<iostream>
using namespace std;

class seseorang{
    public:
        //virutal void pesam() = 0;
        virtual void pesan(){
            cout << "PEsan Dari Seseorang" << endl;
        }
};

class joko: public seseorang{
    public:
        void pesan(){
            cout << "Pesan Dari Joko";
        }
};