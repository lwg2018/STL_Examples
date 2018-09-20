#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
	list<int> test;
	list<char> test2;
	list<string> test3;
	
	list<int>::iterator iit;
	list<char>::iterator cit;
	list<string>::iterator sit;
	
	for(int i=0;i<5;i++)test.push_back(1);
	for(int i=0;i<5;i++)test2.push_back('a');
	for(int i=0;i<5;i++)test3.push_back("abc");
	
	printf("int Llist print!\n");
	for(iit=test.begin();iit!=test.end();iit++)printf("%d ",*iit);
		
	printf("\nchar Llist print!\n");
	for(cit=test2.begin();cit!=test2.end();cit++)printf("%c ",*cit);
	
	printf("\nstring Llist print!\n");
	for(sit=test3.begin();sit!=test3.end();sit++)cout<<*sit<<' ';
	
	printf("\nstring Llist erase!\n");
	test3.erase(test3.begin());
	for(sit=test3.begin();sit!=test3.end();sit++)cout<<*sit<<' ';
	
	printf("\nstring Llist insert!\n");
	test3.insert(test3.begin(),"삽입");
	for(sit=test3.begin();sit!=test3.end();sit++)cout<<*sit<<' '; 
	
	//insert, erase가능 vector와 다르게 listname.pop_front(), listname.push_front(T value) 가능
	//vector는 + -연산이 가능하지만 list는 불가능함(++, --)가능
	
	printf("\n\n");
	printf("%d %d %d",test.size(),test2.size(),test3.size());
	
	test3.clear();
	printf("\n%d",test3.size());
}
