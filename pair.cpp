#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main(){
    pair<string, int> test("�̿��", 187);
	
	cout<<test.first<<' '<<test.second<<"cm";
}
// first, second ù��°���� ���� �ι�°���� ����
// ù��°���ڰ��� ũ�� pair���� ��ū��, ù��°���ڰ��� ������ �ι�°���ڰ��� ū�� pair���� ��ū��. 


/*
priority_queue< pair<string, int> > test;

stack< pair<string, int> > test2;

���� �ѽ����� �����ؾ� �� ��� �̷� �뵵�� ����� �� �ִ�. 
*/
