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
          return (strncmp(name.c_str(),"김",2)==0);
     }
};

int main(){
	srand(time(NULL));
	
	int iarr[5] = {2,4,6,8,10};
	char carr[5] = "abcd";
	
	// 벡터 
	vector<int> vectest(5);
	printf("1. vector\n"); 
	
	for(int i=0;i<5;i++)vectest[i]=iarr[i];
	vectest.push_back(11);
	
	for(int i=0;i<vectest.size();i++)printf("%d ",vectest[i]); // 입력값 출력
	puts("");
	 
	reverse(vectest.begin(),vectest.end()); // 방향반대로 바꾸기
	for(int i=0;i<vectest.size();i++)printf("%d ",vectest[i]);
	puts("");
	
	random_shuffle(vectest.begin(),vectest.end()); // 랜덤으로 섞기 
	for(int i=0;i<vectest.size();i++)printf("%d ",vectest[i]);
	puts("");
	
	
	// 리스트
	list<int> litest;
	printf("2. list\n");
	
	for(int i=0;i<5;i++)litest.push_back(iarr[i]);
	
	list<int>::iterator it; // 반복자 선언
	litest.pop_front();
	litest.push_front(7);
	for(it=litest.begin();it!=litest.end();it++)printf("%d ",*it); 
	puts("");
	
	
	//
	string names[]={"김유신","이순신","성삼문","장보고","조광조",
          "신숙주","김홍도","정도전","이성계","정몽주"};
     vector<string> vs(&names[0],&names[10]); // 값 복사 
 
     vector<string>::iterator it2;
     it2=find_if(vs.begin(),vs.end(),IsKim());
     if (it2==vs.end()) {
          cout << "없다." << endl;
     } else {
          cout << *it2 << "이(가) 있다." << endl;
     }
	
	
}

/*
count
조건에 맞는 요소의 개수를 센다.

for_each
각 요소에 대해 지정한 작업을 한다.

equal
구간이 일치하는지 비교한다.

search
일치하는 부분 구간을 검색한다.

copy
구간끼리 복사한다.

fill
일정한 값으로 지정 구간을 채운다.

reverse
구간의 요소들을 반대로 뒤집는다.

random_shuffle
요소들을 무작위로 섞는다.

find(InIt first, InIt last, const T& val);
요소 검색
InIt find_if(InIt first, InIt last, UniPred F);
사용자 정의 요소 검색 

swap
컨테이너를 교환한다.

binary_search
이분 검색한다.

merge
구간을 병합하여 새로운 구간으로 복사한다.

accumulate
구간의 값을 모두 합한다.
*/


/*  함수객체

minus
두 인수의 차를 계산한다.

multiplies
두 인수의 곱을 계산한다.

divides
두 인수를 나눈 후 몫을 리턴한다.

modulus
두 인수를 나눈 후 나머지를 리턴한다.

negate
인수 하나를 전달받아 부호를 반대로 만든다.

equal_to
두 인수가 같은지 비교하여 결과를 bool타입으로 리턴한다.

not_equal_to
두 인수가 다른지 비교한다.

greater
첫 번째 인수가 두 번째 인수보다 큰지 조사한다.

less
첫 번째 인수가 두 번째 인수보다 작은지 조사한다.

greater_equal
첫 번째 인수가 두 번째 인수보다 크거나 같은지 조사한다.

less_equal
첫 번째 인수가 두 번째 인수보다 작거나 같은지 조사한다.

logical_and
두 인수의 논리곱(&&) 결과를 리턴한다.

logical_or
두 인수의 논리합(||) 결과를 리턴한다.

logical_not
인수 하나를 전달받아 논리부정(!)을 리턴한다.

*/ 
