#include <iostream>
#include <queue>
#include <string>
#include <functional>

using namespace std;

int main(){
	priority_queue<int> test;
	priority_queue<string> test2;
	
	test.push(7);
	test.push(1);
	test.push(70);
	test.push(800);
	test.push(5);
	test.push(900);
	
	test2.push("�ȳ�");
	test2.push("��");
	test2.push("����");
	test2.push("����");
	test2.push("����");
	
	while(!test.empty()){ // ������������ ��µ� 
		printf("%d ",test.top());
		test.pop();
	}
	
	puts("");
	while(!test2.empty()){ // �����ݴ������ ��µ� 
		cout<<test2.top()<<' ';
		test2.pop();
	}
	
	priority_queue< int, vector<int>, greater<int> > test3;
	priority_queue< string, vector<string>, greater<string> > test4;
	
	test3.push(7);
	test3.push(1);
	test3.push(70);
	test3.push(800);
	test3.push(5);
	test3.push(900);
	
	test4.push("�ȳ�");
	test4.push("��");
	test4.push("����");
	test4.push("����");
	test4.push("����");
	
	puts("");
	while(!test3.empty()){ // ������������ ��µ� 
		printf("%d ",test3.top());
		test3.pop();
	}
	
	puts("");
	while(!test4.empty()){ // ���������� ��µ� 
		cout<<test4.top()<<' ';
		test4.pop();
	}
}
// stack�� ���� top���� Ȯ��.
// �̸��� ť������ �������� ����ϹǷ� back�� �Ұ�. ���� �켱������ ���������� �������� �������´�.
// clear�Ұ��� empty,size ���� 
