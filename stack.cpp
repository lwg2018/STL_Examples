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

// name.top() -> ������ �����Լ�. �״��� ���ð��� �������ʰ� ���� �����Ѵ�.
// empty, push, pop, size ��밡��
// iterator ���Ұ� 
