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

// list의장점과 vector의 장점을 다 가지고있다.
// push_front와 pop_front가 가능하며 []나 at으로 참조가 가능하고 +, - 연산이 가능하다
// 단점으로는 capacity와 reserve가 불가능하며 값이 연속적으로 저장되어있다는것이 보장 불가능하다. 
