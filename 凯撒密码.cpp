//�����ܣ���������
//���ߣ�������
//ѧ�ţ�1143220116
//ʱ�䣺2015/11/4

#include<stdio.h>
#include <string.h>
#include<stdlib.h>
char yuan[100];/*���ڴ�����ԭ�ģ��������ı���->ע�⣺ȫСд��ĸ*/
int k;//ת����Կ
int main()
{      //��һ��Ҫ��
	printf("������ԭ�ģ�");
	scanf("%s", yuan);
	int i;
	i = strlen(yuan);
	printf("��������ԿK��");
	scanf("%d", &k);
	k = k % 26;
	printf("���ܺ�����Ϊ��");
	for (int t = 0; t < i; t++) {
		yuan[t] = (yuan[t] - 'a' + k) % 26 + 'a';
	}
	printf("%s\n", yuan);
	getchar();
	getchar();
	    //�ڶ���Ҫ��
	printf("�ٴν��ܺ�����Ϊ��");
	for (int t = 0; t<i; t++) {
		if (yuan[t] - 'a' - k<0)  yuan[t] = yuan[t] - k + 26;
		else  yuan[t] = yuan[t] - k;
	}
	printf("%s\n", yuan);
	//������Ҫ��
	char xian[100];/*���ڴ�����ԭ�ģ��������ı���->ע�⣺ȫСд��ĸ*/
	printf("������������ƽ�����֣�");
	scanf("%s", xian);
	int ii = strlen(xian);
	printf("�����ƽ������Ϊ��\n");
	int iii = 0;
	for (int kk = 0; kk<26; kk++) {
		for (int t = 0; t<ii; t++) {
			xian[t] = (xian[t] - 'a' + kk % 26) % 26 + 'a';
		}
		iii++;
		printf("    ���ܵĵ�%2d�������%s\n", iii, xian);
	}
	getchar();
	getchar();
	//���ĸ�Ҫ��
	//��һ��СҪ��
	char nosi[100];/*���ڴ�����ԭ�ģ��������ı���->ע�⣺ȫСд��ĸ*/
	char keys[100];//���ڴ������ĸ��Կ��char�ͣ�
	printf("��������ƽ����֣�");
	scanf("%s", nosi);
	int no = strlen(nosi);
	printf("�����������ĸ����Կ��");
	scanf("%s", keys);
	printf("�ƽ������Ϊ��");
	for (int t = 0; t<no; t++) {
		nosi[t] = (nosi[t] - 'a' + keys[t] % 26) % 26 + 'a';
	}
	printf("%s\n", nosi);
	getchar();
	getchar();
	//�ڶ���СҪ��
	printf("�ٴν��ܺ�����Ϊ��");
	for (int t = 0; t<no; t++) {
		nosi[t] = (nosi[t] - 'a' + 26 - keys[t] % 26) % 26 + 'a';
	}
	printf("%s\n", nosi);
	//���ĸ�Ҫ�󣬷�����
	char nosi2[100];/*���ڴ�����ԭ�ģ��������ı���->ע�⣺ȫСд��ĸ*/
	int key[100];/*���ڴ�a-z��Ӧת����Կ��int�ͣ�*/
	char zhuan[100];/*������ת*/
	char  chr;/*���ڴ�a-z*/
	printf("���Զ�ת����\n");
	for (int t = 0; t <= 25; t++) {
		chr = t+ 'a';
		printf("    %c������ԿΪ��", chr);
		scanf("%d", &key[t]);
		key[t] = key[t] % 26;
	}
	printf("����������ܵ����֣�");
	scanf("%s", nosi2);
	printf("���ܺ�����Ϊ��");
	int no2 = strlen(nosi2);
	for (int t = 0; t <no2; t++) {
		zhuan[t] = key[nosi2[t] - 'a'];
		nosi2[t] = (nosi2[t] - 'a' + zhuan[t]) % 26 + 'a';
	}
	printf("%s", nosi2);
	getchar();
	getchar();
	printf("\n��һ�ν���Ϊ��");
	for (int t = 0; t < no2; t++) {
		if ((nosi2[t] - 'a' - zhuan[t]) < 0) nosi2[t] = (int(nosi2[t] - 'a' - zhuan[t] + 26)) % 26 + 'a';
		else nosi2[t] = (int(nosi2[t] - 'a' - zhuan[t])) % 26 + 'a';
	}
	printf("%s\n", nosi2);
	system("pause");
	return 0;
}
