#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	deque<int> test;
	
	for(int i=0;i<10;i++)test.push_front(i);
	for(int i=0;i<test.size();i++)printf("%d ",test[i]);
}

// list�������� vector�� ������ �� �������ִ�.
// push_front�� pop_front�� �����ϸ� []�� at���� ������ �����ϰ� +, - ������ �����ϴ�
// �������δ� capacity�� reserve�� �Ұ����ϸ� ���� ���������� ����Ǿ��ִٴ°��� ���� �Ұ����ϴ�. 
