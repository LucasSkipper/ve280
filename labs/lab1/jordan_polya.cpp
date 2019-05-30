#include <iostream>
#include <cassert>

using namespace std;

bool is_jordan_polya(int num) {
    int a[30],na=0,fac=1;
    while (sum<num){
        na++;
        fac=fac*na;
        a[na]=fac;
    }
    for (int i=na;i>=2;i--){
        while (num%a[i]==0) num=num/a[i];
    }
    return (num==1);
}


void test_jordan_polya() {
    assert(!is_jordan_polya(5));  // 5 is not a Jordan-Polya number
    // TODO: Add more test cases
    cout << "Jordan-Polya number tests passed!" << endl;
}
