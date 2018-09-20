#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
	queue<int> test;
	queue<int> test2;
	
	for(int i=0;i<10;i++){
	    test.push(i);
	    test2.push(i);
	}
	
	for(;!test.empty();){
		printf("%d %d ",test.front(),test.back());
		test.pop();
		printf("%d\n",test.size());
	}
	
}

// stack�� �״��� �������ð��� top���� Ȯ�� (���Լ���) 
// queue�� front�� Ȯ�� (���Լ���)
// queue�� �Ա��� �������� �ΰ��̹Ƿ� ���� ���߿� �������ð� back���� Ȯ�� ����
// empty��� ���� clear ���Ұ� 
