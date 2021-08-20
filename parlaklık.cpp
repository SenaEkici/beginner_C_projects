

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
DWORD bytesRead ;
  while(1)
   {
 BOOL retVal = ReadFile(hComm,szBuff,sizeof(x), &bytesRead, NULL);
 		if (!retVal) {
 		printf("HATA");
 		} else {
 		printf("%s",szBuff);
 		}
   }
 

CloseHandle(hComm);
}

