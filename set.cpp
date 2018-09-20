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
	// test.empty(); test.clear(); 가능 
	
	puts("");
	test.erase(5);
	if(test.count(10))printf("10이 존재합니다.\n");  // 있으면 참,없으면 거짓 (test.find(10) != test.end();)
	for(it=test.begin();it!=test.end();it++){
		printf("%d ",*it);
	}
}

// deque처럼 연속적으로 저장되어있다는것이 보장 불가능하다.
// tree형으로 구성되어있어 탐색, 저장이 빠르며 오름차순으로 정렬되어 입력된다
// 값의 중복을 허용하지 않는다.
// for( auto current : test)


///////// multiset<int> test /////////


//multiset<int> test;
// set에 정의되어있는 멀티셋은 값의 중복을 허용한다.
// erase(4)로 지울경우 모든 4값이 지워진다
// erase(find(4))로 지울경우 주소값 한개만 넘겨주기때문에 한개만 지워진다.
// count(4)는 4값이 몇개있는지 리턴한다
 
