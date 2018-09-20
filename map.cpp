#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	map<string, int> test;
	
	test["김"] = 20;
	test["이"] = 40;
	 
	for(map<string, int>::iterator it=test.begin(); it!=test.end(); it++){
	    cout<<it->first<<' '<<it->second;
	    puts("");
	}
	
	printf("%d\n",test.size());
	test.clear();
	printf("%d\n",test.size());
	
}

// 오름차순으로 정렬됨. pair처럼 키값에 대해 정렬되어있다 < 키값, 연동값 >
// multimap도 존재함 
