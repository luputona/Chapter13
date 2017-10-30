#include<stdio.h>

void main6()
{
	char str1[] = "My String"; //변수 형태의 문자열
	char *str2 = "Your String"; //상수 형태의 문자열

	printf("%s %s \n", str1, str2);

	str2 = "Our String";
	printf("%s %s \n", str1, str2);

	str1[0] = 'X'; //문자열 성공
	//str2[0] = 'X'; // 실패 

	printf("%s %s \n",str1, str2);

}