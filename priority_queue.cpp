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
	
	test2.push("안녕");
	test2.push("김");
	test2.push("굴밥");
	test2.push("던파");
	test2.push("게임");
	
	while(!test.empty()){ // 내림차순으로 출력됨 
		printf("%d ",test.top());
		test.pop();
	}
	
	puts("");
	while(!test2.empty()){ // 사전반대순으로 출력됨 
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
	
	test4.push("안녕");
	test4.push("김");
	test4.push("굴밥");
	test4.push("던파");
	test4.push("게임");
	
	puts("");
	while(!test3.empty()){ // 오름차순으로 출력됨 
		printf("%d ",test3.top());
		test3.pop();
	}
	
	puts("");
	while(!test4.empty()){ // 사전순으로 출력됨 
		cout<<test4.top()<<' ';
		test4.pop();
	}
}
// stack과 같이 top으로 확인.
// 이름은 큐이지만 힙정렬을 사용하므로 back은 불가. 가장 우선순위가 높은값부터 차근차근 빠져나온다.
// clear불가능 empty,size 가능 
