#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<int> test1(10,100); // 10개의 배열 100으로 초기화
	vector<char> test2(10,'a'); // a로 초기화 
	vector<string> test3(10,"안녕"); // "안녕"으로 초기화 
	
	for(int i=0;i<test1.size();i++)cout<<test1.at(i)<<' ';
	puts("");
	for(int i=0;i<test2.size();i++)cout<<test2.at(i)<<' ';
	puts("");
	for(int i=0;i<test3.size();i++)cout<<test3.at(i)<<' ';
	                                // =test1[i]
	
	printf("\n\ntest1's size and capacity!\n"); // 용량과 사이즈 출력 
	for(int i=0;i<20;i++){
		printf("size: %d  capacity: %d\n",test1.size(),test1.capacity());
		test1.push_back(100);
	}
	
	/* test1.shrink_to_fit();  // capacity = size 
	  printf("\nafter shrink_to_fit/ size: %d  capacity: %d",test1.size(),test1.capacity()); */
	 
	puts(""); 
	test1.resize(10); // 사이즈 강제할당 resize(30,100)으로 할경우 늘어나는부분 100으로 초기화 
	for(int i=0;i<test1.size();i++)printf("%d ",test1[i]);
	test1.reserve(20); // 공간확보 
	printf("\n%d",test1.size()); 
	
	test2.clear(); // vector 데이터 비움
	printf("\ntest2 clear!");
	  
	if(test2.empty())printf("\ntest2 is NULL");
	
	vector<string>::iterator it; // 이터레이터 
	for(it=test3.begin();it!=test3.end();it++){ // vecname.insert(위치, 값); 뒤로 밀고 삽입 
		if(*it=="안녕"){
		    test3.insert(it, "삽입");
			break;
		}
	}
	puts("");
	for(int i=0;i<test3.size();i++)cout<<test3[i]<<' ';
	test3.erase(test3.begin()+2);
	
	puts("");
	for(int i=0;i<test3.size();i++)cout<<test3[i]<<' '; // vecname.erase(위치); 삭제후 당김 
	
	
}

// vecname.front() -> 가장 앞의 값 리턴
// vecname.back() -> 가장 뒤의 값 리턴 
