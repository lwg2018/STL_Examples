#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){
	stack<int> test;
	for(int i=0;i<10;i++)test.push(i);
	
	for(;!test.empty();){
	    printf("%d ",test.top());
	    test.pop();
	}
}

// name.top() -> 스택의 고유함수. 그다음 나올값을 꺼내지않고 값만 리턴한다.
// empty, push, pop, size 사용가능
// iterator 사용불가 
