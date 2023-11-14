#include<stdio.h>
	int ucln(int a,int b){ 
    if (b == 0) 
	return a;
    return ucln(b, a % b);
}
    int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}
int main(){
	int a,b,choice,reult;

	printf("nhap vao 2 so nguyen:  ");
	scanf("%d %d",&a,&b);
	do{
		printf("caculator\n");
		printf("1.tong 2 so\n");
		printf("2.hieu 2 so\n");
		printf("3.tich 2 so\n");
		printf("4.thuong 2 so\n");
		printf("5.so du trong phep chia 2 so\n");
		printf("6.uoc chung lon nhat\n");
		printf("7.boi chung nho nhat\n");
		printf("8.thoat\n");
		printf("nhap lua chon cua ban\n");
		scanf("%d",&choice,&reult);
		switch(choice){
			case 1:
				reult = a+b;
				printf("tong 2 so %d + %d = %d\n",a,b,a+b);
				break;
			case 2:
				reult = a-b;
				printf("hieu 2 so %d - %d = %d\n",a,b,a-b);
				break;
			case 3:
				reult = a*b;
				printf("tich 2 so %d * %d = %d\n",a,b,a*b);
				break;
			case 4:
				reult = a/b;
				printf("thuong 2 so %d/%d=%d\n",a,b,a/b);
				break;
			case 5:
				reult = a%b;
				printf("so du trong phep chia 2 so %d % %d = %d\n",a,b,a%b);
			case 6:
                 printf("uoc chung lon nhat %d\n",ucln(a,b));
                 break;
            case 7:
            	printf("boi chung nho nhat %d\n",bcnn(a,b));
            	break;
            case 8:
            	printf("thoat \n");
            	break;
            default:
            	printf("lua chon khong hop le\n");
		}
	}while(choice!=8);	
	
}
