#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main(){
    pair<string, int> test("이운기", 187);
	
	cout<<test.first<<' '<<test.second<<"cm";
}
// first, second 첫번째인자 접근 두번째인자 접근
// 첫번째인자값이 크면 pair값이 더큰것, 첫번째인자값이 같으면 두번째인자값이 큰게 pair값이 더큰것. 


/*
priority_queue< pair<string, int> > test;

stack< pair<string, int> > test2;

값을 한쌍으로 저장해야 할 경우 이런 용도로 사용할 수 있다. 
*/
