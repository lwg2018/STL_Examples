#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
	queue<int> test;
	queue<int> test2;
	
	for(int i=0;i<10;i++){
	    test.push(i);
	    test2.push(i);
	}
	
	for(;!test.empty();){
		printf("%d %d ",test.front(),test.back());
		test.pop();
		printf("%d\n",test.size());
	}
	
}

// stack은 그다음 빠져나올값을 top으로 확인 (후입선출) 
// queue는 front로 확인 (선입선출)
// queue는 입구가 양쪽으로 두개이므로 가장 나중에 빠져나올값 back으로 확인 가능
// empty사용 가능 clear 사용불가 
