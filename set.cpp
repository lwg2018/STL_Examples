#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	set<int> test;
	
	test.insert(5);
	test.insert(7);
	test.insert(10);
	test.insert(2);
	test.insert(3);
	
	set<int>::iterator it; 
	for(it=test.begin();it!=test.end();it++){
		printf("%d ",*it);
	}
	printf("\n%d ",test.size());
	// test.empty(); test.clear(); ���� 
	
	puts("");
	test.erase(5);
	if(test.count(10))printf("10�� �����մϴ�.\n");  // ������ ��,������ ���� (test.find(10) != test.end();)
	for(it=test.begin();it!=test.end();it++){
		printf("%d ",*it);
	}
}

// dequeó�� ���������� ����Ǿ��ִٴ°��� ���� �Ұ����ϴ�.
// tree������ �����Ǿ��־� Ž��, ������ ������ ������������ ���ĵǾ� �Էµȴ�
// ���� �ߺ��� ������� �ʴ´�.
// for( auto current : test)


///////// multiset<int> test /////////


//multiset<int> test;
// set�� ���ǵǾ��ִ� ��Ƽ���� ���� �ߺ��� ����Ѵ�.
// erase(4)�� ������ ��� 4���� ��������
// erase(find(4))�� ������ �ּҰ� �Ѱ��� �Ѱ��ֱ⶧���� �Ѱ��� ��������.
// count(4)�� 4���� ��ִ��� �����Ѵ�
 
