//#include<stdio.h>
//#include <stdlib.h>
////����˷��ھ�
//int main(){
//    int i=1;
//	for (;i<=9;i++)
//	{
//		int j=1;
//		for (;j<=i;j++)
//		{
//			printf("%d*%d=%d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	system("pause");                                
//	return 0;
//}
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 4*2=8 4*3=12 4*4=16
//i*j

////�ж�1000��-200��֮�������
//int main(){
//	int leapYear=1000;
//	for (;leapYear<=2000;leapYear++)
//	{
//		/*if (leapYear%100==0)
//		{
//			if (leapYear%400==0)
//			{
//				printf("%d ",leapYear);
//			}
//		}else if (leapYear%4==0)
//		{
//			 printf("%d ",leapYear);
//		}*/
//
//		if (leapYear%4==0)
//		{
//			if (leapYear%100!=0)
//			{
//               printf("%d ",leapYear);
//			}
//		}
//		if (leapYear%400==0)
//		{
//			printf("%d ",leapYear);
//		}
//	}
//    system("pause");
//	return 0;
//}





//#include <math.h>
////�ҳ�100��200֮�������
//int main(){
//     int i=0;
//	 int count=0;
//	 for (i=100;i<=200;i++)
//	 {
//		 int j=0;
//		 for (j=2;j<=sqrt(i);j++)
//		 { 
//			 if (i%j==0)
//			 {
//				 break;//�����һ�����ܱ�i���������˳�����j��ѭ��
//			 }	
//			
//		 }
//		 if(j>sqrt(i))
//		 {   
//			 count++;
//			 printf("%d ",i);
//		 }
//		 
//	 }
//	printf("\n%d ",count);
//	system("pause");
//	return 0;
//
//}




//extern���������ⲿ����
//extern int g_val;
//extern int Add(int,int);
//int main(){
//     //printf("%d\n",g_val);
//
//
//	 int a=10;
//	 int b=20;
//	 int sum=Add(a,b);
//	 printf("sum=%d\n",sum);
//	return 0;
//}




//void test(){
//
//	static int i=1;//static���ξֲ��������ı��˾ֲ���������������
//	i++;
//	printf("%d ",i);
//}
//
//int main(){
//    int i=0;
//	for (i=0;i<5;i++)
//	{
//		 test();
//	}
//
//	return 0;
//}






//typedef unsigned int u_int;
//int main(){
//
//        u_int num1=2018;//�൱��unsigned int num1=2018;
//		return 0;
//}






      //register int a=10;//������ڼĴ����У�ֻ��һ������
	  //return 0;



	//{
    //  auto int a=10;//���еľֲ���������auto�ģ�һ��ʡ�ԣ��ֲ��������������Χ�Զ����������������Χ�Զ����٣����Խ�auto����
	//}
	// return 0;


     /* int a=0;
	  a=(int)3.14;//ǿ��ת������
	  printf("%d\n",a);*/
	  
     //int num=0;
	////00000000000000000000000000000000
	////��λȡ����Ϊ11111111111111111111111111111111���ڵ�������Ϊ���룩
	////����ԭ�룬����������ԭ�뷽��Ϊ���� 1������λ���䣬����λȡ��
	//printf("%d\n",~num);//���Ϊ-1
	//system("pause");   //һ������ռ�ĸ��ֽ�
	//return 0;
//}


//int main(){
//void print_arr(int arr[],int sz)//����һ���������ֵ�ĺ����������������
//{
//	int i=0;
//
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//   
//  system("pause");
//  return 0;
//}




//
//int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	print_arr(arr,10);
//
//   /* int line=0;
//	while (line<=30000)
//	{
//		line++;
//	}
//	if(line>3000)
//	{
//	   printf("�ҹ���\n");
//	}*/
//	system("pause");
//	return 0;
//}