#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<int> test;
	for(int i=0;i<10;i++)test.push_back(i);
	
	vector<int>::iterator it;                    // 정방향 이터레이터(begin, end) 
	vector<int>::const_iterator cit;             // 값수정이 불가능한 정방향 이터레이터 
	vector<int>::reverse_iterator rit;           // 역방향 이터레이터(rbegin, rend)
	vector<int>::const_reverse_iterator crit;    // 값수정이 불가능한 역방향 이터레이터
	
	printf("iterator print!\n");
	for(it=test.begin();it!=test.end();it++)printf("%d ",*it);
	
	printf("\nreverse_iterator print!\n");
	for(rit=test.rbegin();rit!=test.rend();rit++)printf("%d ",*rit);
	
	//cit = test.begin(); *cit = 10 -> 불가! 
}
