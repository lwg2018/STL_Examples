#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<int> test;
	for(int i=0;i<10;i++)test.push_back(i);
	
	vector<int>::iterator it;                    // ������ ���ͷ�����(begin, end) 
	vector<int>::const_iterator cit;             // �������� �Ұ����� ������ ���ͷ����� 
	vector<int>::reverse_iterator rit;           // ������ ���ͷ�����(rbegin, rend)
	vector<int>::const_reverse_iterator crit;    // �������� �Ұ����� ������ ���ͷ�����
	
	printf("iterator print!\n");
	for(it=test.begin();it!=test.end();it++)printf("%d ",*it);
	
	printf("\nreverse_iterator print!\n");
	for(rit=test.rbegin();rit!=test.rend();rit++)printf("%d ",*rit);
	
	//cit = test.begin(); *cit = 10 -> �Ұ�! 
}
