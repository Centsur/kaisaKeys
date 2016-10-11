//程序功能：凯撒加密
//作者：匡盟盟
//学号：1143220116
//时间：2015/11/4

#include<stdio.h>
#include <string.h>
#include<stdlib.h>
char yuan[100];/*用于存输入原文（待加密文本）->注意：全小写字母*/
int k;//转换秘钥
int main()
{      //第一个要求
	printf("请输入原文：");
	scanf("%s", yuan);
	int i;
	i = strlen(yuan);
	printf("请输入秘钥K：");
	scanf("%d", &k);
	k = k % 26;
	printf("加密后文字为：");
	for (int t = 0; t < i; t++) {
		yuan[t] = (yuan[t] - 'a' + k) % 26 + 'a';
	}
	printf("%s\n", yuan);
	getchar();
	getchar();
	    //第二个要求
	printf("再次解密后文字为：");
	for (int t = 0; t<i; t++) {
		if (yuan[t] - 'a' - k<0)  yuan[t] = yuan[t] - k + 26;
		else  yuan[t] = yuan[t] - k;
	}
	printf("%s\n", yuan);
	//第三个要求
	char xian[100];/*用于存输入原文（待加密文本）->注意：全小写字母*/
	printf("请输入待暴力破解的文字：");
	scanf("%s", xian);
	int ii = strlen(xian);
	printf("暴力破解后文字为：\n");
	int iii = 0;
	for (int kk = 0; kk<26; kk++) {
		for (int t = 0; t<ii; t++) {
			xian[t] = (xian[t] - 'a' + kk % 26) % 26 + 'a';
		}
		iii++;
		printf("    可能的第%2d个结果：%s\n", iii, xian);
	}
	getchar();
	getchar();
	//第四个要求
	//第一个小要求
	char nosi[100];/*用于存输入原文（待加密文本）->注意：全小写字母*/
	char keys[100];//用于存各个字母秘钥（char型）
	printf("请输入待破解文字：");
	scanf("%s", nosi);
	int no = strlen(nosi);
	printf("请输入各个字母的秘钥：");
	scanf("%s", keys);
	printf("破解后文字为：");
	for (int t = 0; t<no; t++) {
		nosi[t] = (nosi[t] - 'a' + keys[t] % 26) % 26 + 'a';
	}
	printf("%s\n", nosi);
	getchar();
	getchar();
	//第二个小要求
	printf("再次解密后文字为：");
	for (int t = 0; t<no; t++) {
		nosi[t] = (nosi[t] - 'a' + 26 - keys[t] % 26) % 26 + 'a';
	}
	printf("%s\n", nosi);
	//第四个要求，方法二
	char nosi2[100];/*用于存输入原文（待加密文本）->注意：全小写字母*/
	int key[100];/*用于存a-z对应转换秘钥（int型）*/
	char zhuan[100];/*用于中转*/
	char  chr;/*用于存a-z*/
	printf("请自定转换表：\n");
	for (int t = 0; t <= 25; t++) {
		chr = t+ 'a';
		printf("    %c定义秘钥为：", chr);
		scanf("%d", &key[t]);
		key[t] = key[t] % 26;
	}
	printf("请输入待加密的文字：");
	scanf("%s", nosi2);
	printf("加密后文字为：");
	int no2 = strlen(nosi2);
	for (int t = 0; t <no2; t++) {
		zhuan[t] = key[nosi2[t] - 'a'];
		nosi2[t] = (nosi2[t] - 'a' + zhuan[t]) % 26 + 'a';
	}
	printf("%s", nosi2);
	getchar();
	getchar();
	printf("\n再一次解密为：");
	for (int t = 0; t < no2; t++) {
		if ((nosi2[t] - 'a' - zhuan[t]) < 0) nosi2[t] = (int(nosi2[t] - 'a' - zhuan[t] + 26)) % 26 + 'a';
		else nosi2[t] = (int(nosi2[t] - 'a' - zhuan[t])) % 26 + 'a';
	}
	printf("%s\n", nosi2);
	system("pause");
	return 0;
}
