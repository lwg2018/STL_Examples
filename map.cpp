#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	map<string, int> test;
	
	test["��"] = 20;
	test["��"] = 40;
	 
	for(map<string, int>::iterator it=test.begin(); it!=test.end(); it++){
	    cout<<it->first<<' '<<it->second;
	    puts("");
	}
	
	printf("%d\n",test.size());
	test.clear();
	printf("%d\n",test.size());
	
}

// ������������ ���ĵ�. pairó�� Ű���� ���� ���ĵǾ��ִ� < Ű��, ������ >
// multimap�� ������ 
