#include <stdio.h>

main() 
{
	int a[30] = {0};
	int c, n, i = 0;
	
	for(i=0; i<28; i++) { //28���� �´µ�, 2���� �ȳ� -��- ȥ�������) 
		scanf("%d", &c); //�������� 1 ��  
		a[c-1] = 1;
	}
	
	for(i=0; i<30; i++) 
		if(a[i] == 0) 
			printf("%d\n", i+1);	
	
	return 0;
}
