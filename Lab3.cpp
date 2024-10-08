#include <bitset>
#include <iostream>
using namespace std;
int main() {
    while (true) {
        cout<<"Put 2 numbers"<<endl;
        int a;
        int b;
        int c;
        cin>>a>>b;
        int AND = a & b;
        int OR = a | b;
        int XOR = a ^ b;
        cout<<bitset<6>(a)<<endl<<bitset<6>(b)<<endl;
        cout<<"AND: "<<bitset<6>(AND)<<endl;
        cout<<"OR: "<<bitset<6>(OR)<<endl;
        cout<<"XOR: "<<bitset<6>(XOR)<<endl;
        cout<< "Put 1 to continue or 0 to break" <<endl;
        cin>>c;
        if (c == 0) {
            break;
            if(c==1) {
                continue;
            }
        }

    }
}
