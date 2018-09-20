#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<int> test1(10,100); // 10���� �迭 100���� �ʱ�ȭ
	vector<char> test2(10,'a'); // a�� �ʱ�ȭ 
	vector<string> test3(10,"�ȳ�"); // "�ȳ�"���� �ʱ�ȭ 
	
	for(int i=0;i<test1.size();i++)cout<<test1.at(i)<<' ';
	puts("");
	for(int i=0;i<test2.size();i++)cout<<test2.at(i)<<' ';
	puts("");
	for(int i=0;i<test3.size();i++)cout<<test3.at(i)<<' ';
	                                // =test1[i]
	
	printf("\n\ntest1's size and capacity!\n"); // �뷮�� ������ ��� 
	for(int i=0;i<20;i++){
		printf("size: %d  capacity: %d\n",test1.size(),test1.capacity());
		test1.push_back(100);
	}
	
	/* test1.shrink_to_fit();  // capacity = size 
	  printf("\nafter shrink_to_fit/ size: %d  capacity: %d",test1.size(),test1.capacity()); */
	 
	puts(""); 
	test1.resize(10); // ������ �����Ҵ� resize(30,100)���� �Ұ�� �þ�ºκ� 100���� �ʱ�ȭ 
	for(int i=0;i<test1.size();i++)printf("%d ",test1[i]);
	test1.reserve(20); // ����Ȯ�� 
	printf("\n%d",test1.size()); 
	
	test2.clear(); // vector ������ ���
	printf("\ntest2 clear!");
	  
	if(test2.empty())printf("\ntest2 is NULL");
	
	vector<string>::iterator it; // ���ͷ����� 
	for(it=test3.begin();it!=test3.end();it++){ // vecname.insert(��ġ, ��); �ڷ� �а� ���� 
		if(*it=="�ȳ�"){
		    test3.insert(it, "����");
			break;
		}
	}
	puts("");
	for(int i=0;i<test3.size();i++)cout<<test3[i]<<' ';
	test3.erase(test3.begin()+2);
	
	puts("");
	for(int i=0;i<test3.size();i++)cout<<test3[i]<<' '; // vecname.erase(��ġ); ������ ��� 
	
	
}

// vecname.front() -> ���� ���� �� ����
// vecname.back() -> ���� ���� �� ���� 
