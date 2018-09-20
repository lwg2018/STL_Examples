#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include <map> 
#include <algorithm>
#include <cstring>
#include <time.h>

using namespace std;

struct IsKim {
     bool operator()(string name) const {
          return (strncmp(name.c_str(),"��",2)==0);
     }
};

int main(){
	srand(time(NULL));
	
	int iarr[5] = {2,4,6,8,10};
	char carr[5] = "abcd";
	
	// ���� 
	vector<int> vectest(5);
	printf("1. vector\n"); 
	
	for(int i=0;i<5;i++)vectest[i]=iarr[i];
	vectest.push_back(11);
	
	for(int i=0;i<vectest.size();i++)printf("%d ",vectest[i]); // �Է°� ���
	puts("");
	 
	reverse(vectest.begin(),vectest.end()); // ����ݴ�� �ٲٱ�
	for(int i=0;i<vectest.size();i++)printf("%d ",vectest[i]);
	puts("");
	
	random_shuffle(vectest.begin(),vectest.end()); // �������� ���� 
	for(int i=0;i<vectest.size();i++)printf("%d ",vectest[i]);
	puts("");
	
	
	// ����Ʈ
	list<int> litest;
	printf("2. list\n");
	
	for(int i=0;i<5;i++)litest.push_back(iarr[i]);
	
	list<int>::iterator it; // �ݺ��� ����
	litest.pop_front();
	litest.push_front(7);
	for(it=litest.begin();it!=litest.end();it++)printf("%d ",*it); 
	puts("");
	
	
	//
	string names[]={"������","�̼���","���﹮","�庸��","������",
          "�ż���","��ȫ��","������","�̼���","������"};
     vector<string> vs(&names[0],&names[10]); // �� ���� 
 
     vector<string>::iterator it2;
     it2=find_if(vs.begin(),vs.end(),IsKim());
     if (it2==vs.end()) {
          cout << "����." << endl;
     } else {
          cout << *it2 << "��(��) �ִ�." << endl;
     }
	
	
}

/*
count
���ǿ� �´� ����� ������ ����.

for_each
�� ��ҿ� ���� ������ �۾��� �Ѵ�.

equal
������ ��ġ�ϴ��� ���Ѵ�.

search
��ġ�ϴ� �κ� ������ �˻��Ѵ�.

copy
�������� �����Ѵ�.

fill
������ ������ ���� ������ ä���.

reverse
������ ��ҵ��� �ݴ�� �����´�.

random_shuffle
��ҵ��� �������� ���´�.

find(InIt first, InIt last, const T& val);
��� �˻�
InIt find_if(InIt first, InIt last, UniPred F);
����� ���� ��� �˻� 

swap
�����̳ʸ� ��ȯ�Ѵ�.

binary_search
�̺� �˻��Ѵ�.

merge
������ �����Ͽ� ���ο� �������� �����Ѵ�.

accumulate
������ ���� ��� ���Ѵ�.
*/


/*  �Լ���ü

minus
�� �μ��� ���� ����Ѵ�.

multiplies
�� �μ��� ���� ����Ѵ�.

divides
�� �μ��� ���� �� ���� �����Ѵ�.

modulus
�� �μ��� ���� �� �������� �����Ѵ�.

negate
�μ� �ϳ��� ���޹޾� ��ȣ�� �ݴ�� �����.

equal_to
�� �μ��� ������ ���Ͽ� ����� boolŸ������ �����Ѵ�.

not_equal_to
�� �μ��� �ٸ��� ���Ѵ�.

greater
ù ��° �μ��� �� ��° �μ����� ū�� �����Ѵ�.

less
ù ��° �μ��� �� ��° �μ����� ������ �����Ѵ�.

greater_equal
ù ��° �μ��� �� ��° �μ����� ũ�ų� ������ �����Ѵ�.

less_equal
ù ��° �μ��� �� ��° �μ����� �۰ų� ������ �����Ѵ�.

logical_and
�� �μ��� ����(&&) ����� �����Ѵ�.

logical_or
�� �μ��� ����(||) ����� �����Ѵ�.

logical_not
�μ� �ϳ��� ���޹޾� ������(!)�� �����Ѵ�.

*/ 
