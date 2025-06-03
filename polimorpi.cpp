#include<iostream>
using namespace std;

class seseorang{
    public:
        //virutal void pesam() = 0;
        virtual void pesan(){
            cout << "Pesan Dari Seseorang" << endl;
        }
};

class joko: public seseorang{
    public:
        void pesan(){
            cout << "Pesan Dari Joko" << endl;
        }
};

class lia: public seseorang{
    public:
        void pesan(){
            cout << "Pesan Dari Lia" << endl;
        }
};

int main (){
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    //a.seseorang::pesan();
    //b.seseorang::pesan();
}