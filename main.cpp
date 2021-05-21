#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string perna;
    while (getline(cin, perna)){
        if (perna[0] == 'e'){
            cout << "ingles" <<endl;
        }else{
            if (perna[0] == 'd'){
                cout << "frances" <<endl;
            }else{
                if (perna[0] == 'n'){
                    cout << "portugues" <<endl;
                }else{
                    cout << "caiu" <<endl;
                }
            }
        }
    }
    return 0;
}
