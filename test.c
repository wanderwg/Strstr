#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* Strstr(const char* str1,const char* str2) {
	assert(str1 != NULL);
	assert(str2 != NULL);
	if (*str2 == '\0') {
		return NULL;
	}
	char* ptr1 = (char*)str1;//��¼���ĸ�λ�����ַ����Ӵ�
	while (*ptr1 != '\0') {
		char* red_ptr1 = ptr1;//������ɾ������str2���ַ����ıȽ�
		char* ptr2 = (char*)str2;//��ɾ����str2���ַ��ȽϹ���
		while (*red_ptr1 != '\0'&&*ptr2 != '\0'&&*red_ptr1 == *ptr2) {
			++ptr2;
			++red_ptr1;
		}
		if (*ptr2 == '\0') {
			return ptr1;
		}
		if (*ptr2 != *red_ptr1) {
			++ptr1;
		}
	}
	//if (*ptr1 == '\0') {
	//	return NULL;
	//}
}
int main() {
	char str1[] = "ababcd";
	char str2[] = "bcd";
	//retָ����str1�е�һ��str2�Ӵ���λ��
	char* ret = Strstr(str1, str2);
	printf("%p\n", ret);
	printf("%p\n", str1);
	printf("%d\n", ret - str1);
	system("pause");
	return 0;
}
