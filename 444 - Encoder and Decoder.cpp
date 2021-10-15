#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, j, a;
    string s;

    while (getline(cin, s)){
        for (i = 0; s[i]; ++i);
        for (j = i - 1; j >= 0;){
            if (s[0] >= '0' && s[0] <= '9'){
                if (s[j] != '1'){
                    a = (s[j-1] - '0') + (s[j] - '0') * 10;
                    j -= 2;
                }else{
                    a = s[j-2] - '0' + (s[j-1] - '0') * 10 + (s[j] - '0') * 100;
                    j-=3;
                }
                cout << (char)a;
            }

            else{
                a = s[j];

                while (a){
                    cout << a % 10;
                    a /= 10;
                }
                --j;
            }
        }
        cout << endl;
    }
    return 0;
}

