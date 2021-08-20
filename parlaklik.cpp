
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h> 
#include<time.h>

char x;
int main() {

 HANDLE hComm;

 hComm = CreateFile( "COM6", 
 GENERIC_READ | GENERIC_WRITE, 
 0, 
 0, 
 OPEN_EXISTING,
 FILE_ATTRIBUTE_NORMAL,
 0);
 
 if (hComm == INVALID_HANDLE_VALUE) {
 if (GetLastError() == ERROR_FILE_NOT_FOUND) {
 printf("COM7'e erisim yok") ;
 }
 }
 printf("M??????? ");
 DCB dcbSerialParams = {0};

 dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

 if (!GetCommState(hComm, &dcbSerialParams)) {
 printf("Baglanti hatasi"); 
 _getch();
 return EXIT_FAILURE;
 }

 dcbSerialParams.BaudRate = CBR_9600; 
 dcbSerialParams.ByteSize = 8; 
 dcbSerialParams.Parity = NOPARITY;  
 dcbSerialParams.StopBits = ONESTOPBIT;  


 if (!SetCommState(hComm, &dcbSerialParams)) {
 printf("Baglanti hatasi");
 _getch();
 return EXIT_FAILURE;
 }
 
 char szBuff[1 + 1] = {0};
DWORD bytesSend ;
printf("PARLAKLIGI ARTIRIN(+) YA DA AZALTIN(-)");
char cevap;
scanf("%c",&cevap);
 while(1)
 {
   scanf("%c",&cevap);
   if(cevap=='+')
   {
 BOOL retVal = WriteFile(hComm, "+", sizeof(x), &bytesSend, NULL);
 		if (!retVal) {
 		printf("HATA");
 		} else {
 		printf("artýyor\n");
 		}
   }
   else if(cevap=='-'){
   	BOOL retVal1 = WriteFile(hComm, "-", sizeof(x), &bytesSend, NULL);
 		if (!retVal1) {
 		printf("HATA");
 		} else {
 		printf("azalýyor\n");
 		}
   }

}
CloseHandle(hComm);
}

