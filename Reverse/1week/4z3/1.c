#include<stdio.h>
#include<string.h>
//0xgame{z3_ls_v3r7_ve_awful!}
int check[] = {20933, 41536, 33625, 38288, 27097, 40649, 18710, 18617, 
41846, 36080, 35205, 28888, 36346, 18809, 20789, 39340, 31803, 33629, 24418, 34136, 16504, 19638, 
40515, 36396, 37839, 28986, 41711, 18605,};
int main()
{
	unsigned char a[42] = {0,0,0,0,0,0};
	
	puts("plz input your flag:");
	scanf("%28s",a);
	//printf("%d\n",strlen(a)); 
	int b[28] = {0,0,0,0,0,0};
	b[0] = 34 * a[3] + 12 * a[0] + 53 * a[1] + 6 * a[2] + 58 * a[4] + 36 * a[5] + a[6];
  b[1] = 27 * a[4] + 73 * a[3] + 12 * a[2] + 83 * a[0] + 85 * a[1] + 96 * a[5] + 52 * a[6];
  b[2] = 24 * a[2] + 78 * a[0] + 53 * a[1] + 36 * a[3] + 86 * a[4] + 25 * a[5] + 46 * a[6];
  b[3] = 78 * a[1] + 39 * a[0] + 52 * a[2] + 9 * a[3] + 62 * a[4] + 37 * a[5] + 84 * a[6];
  b[4] = 48 * a[4] + 14 * a[2] + 23 * a[0] + 6 * a[1] + 74 * a[3] + 12 * a[5] + 83 * a[6];
  b[5] = 15 * a[5] + 48 * a[4] + 92 * a[2] + 85 * a[1] + 27 * a[0] + 42 * a[3] + 72 * a[6];
  b[6] = 26 * a[5] + 67 * a[3] + 6 * a[1] + 4 * a[0] + 3 * a[2] + 68 * a[6];
  b[7] = 34 * a[10] + 12 * a[7] + 53 * a[8] + 6 * a[9] + 58 * a[11] + 36 * a[12] + a[13];
  b[8] = 27 * a[11] + 73 * a[10] + 12 * a[9] + 83 * a[7] + 85 * a[8] + 96 * a[12] + 52 * a[13];
  b[9] = 24 * a[9] + 78 * a[7] + 53 * a[8] + 36 * a[10] + 86 * a[11] + 25 * a[12] + 46 * a[13];
  b[10] = 78 * a[8] + 39 * a[7] + 52 * a[9] + 9 * a[10] + 62 * a[11] + 37 * a[12] + 84 * a[13];
  b[11] = 48 * a[11] + 14 * a[9] + 23 * a[7] + 6 * a[8] + 74 * a[10] + 12 * a[12] + 83 * a[13];
  b[12] = 15 * a[12] + 48 * a[11] + 92 * a[9] + 85 * a[8] + 27 * a[7] + 42 * a[10] + 72 * a[13];
  b[13] = 26 * a[12] + 67 * a[10] + 6 * a[8] + 4 * a[7] + 3 * a[9] + 68 * a[13];
  b[14] = 34 * a[17] + 12 * a[14] + 53 * a[15] + 6 * a[16] + 58 * a[18] + 36 * a[19] + a[20];
  b[15] = 27 * a[18] + 73 * a[17] + 12 * a[16] + 83 * a[14] + 85 * a[15] + 96 * a[19] + 52 * a[20];
  b[16] = 24 * a[16] + 78 * a[14] + 53 * a[15] + 36 * a[17] + 86 * a[18] + 25 * a[19] + 46 * a[20];
  b[17] = 78 * a[15] + 39 * a[14] + 52 * a[16] + 9 * a[17] + 62 * a[18] + 37 * a[19] + 84 * a[20];
  b[18] = 48 * a[18] + 14 * a[16] + 23 * a[14] + 6 * a[15] + 74 * a[17] + 12 * a[19] + 83 * a[20];
  b[19] = 15 * a[19] + 48 * a[18] + 92 * a[16] + 85 * a[15] + 27 * a[14] + 42 * a[17] + 72 * a[20];
  b[20] = 26 * a[19] + 67 * a[17] + 6 * a[15] + 4 * a[14] + 3 * a[16] + 68 * a[20];
  b[21] = 34 * a[24] + 12 * a[21] + 53 * a[22] + 6 * a[23] + 58 * a[25] + 36 * a[26] + a[27];
  b[22] = 27 * a[25] + 73 * a[24] + 12 * a[23] + 83 * a[21] + 85 * a[22] + 96 * a[26] + 52 * a[27];
  b[23] = 24 * a[23] + 78 * a[21] + 53 * a[22] + 36 * a[24] + 86 * a[25] + 25 * a[26] + 46 * a[27];
  b[24] = 78 * a[22] + 39 * a[21] + 52 * a[23] + 9 * a[24] + 62 * a[25] + 37 * a[26] + 84 * a[27];
  b[25] = 48 * a[25] + 14 * a[23] + 23 * a[21] + 6 * a[22] + 74 * a[24] + 12 * a[26] + 83 * a[27];
  b[26] = 15 * a[26] + 48 * a[25] + 92 * a[23] + 85 * a[22] + 27 * a[21] + 42 * a[24] + 72 * a[27];
  b[27] = 26 * a[26] + 67 * a[24] + 6 * a[22] + 4 * a[21] + 3 * a[23] + 68 * a[27];
  int i ;
  for(i = 0 ; i < 28 ; ++i)
  {
  	if( b[i] != check[i])
  	{
  		printf("wrong\n");
  		exit(0);
	}
  }
  
   printf("right\n"); 
  
  
 

	
}
