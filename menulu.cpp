
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h> 
#include<time.h>


char x;
int main() {

 HANDLE hComm;

 hComm = CreateFile( "COM7", 
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
char cevap;

printf("hangi LED'i yakmak istiyorsunuz??");
printf("\nA-Kirmizi \n B-Mavi \n C-Yesil \n D-Sari\n");
scanf("%c",&cevap);
if(cevap=='A'){

 while(1)
 {
   
 BOOL retVal = WriteFile(hComm, "A", sizeof(x), &bytesSend, NULL);
 		if (!retVal) {
 		printf("HATA");
 		} else {
 		printf("A Kirmizi YANDI\n");
 		}
 		
 }
}

else if(cevap=='B'){
 	while(1){
	 
    BOOL retVal1 = WriteFile(hComm, "B", sizeof(x), &bytesSend, NULL);
 		if (!retVal1) {
 		printf("HATA");
 		} else {
 		printf("B MAVI YANDI\n");
 		}
 	 
}
}

   else  if(cevap=='C'){
     	while(1){
		 
 	 BOOL retVal2 = WriteFile(hComm, "C", sizeof(x), &bytesSend, NULL);
 		if (!retVal2) {
 		printf("HATA");
 		} else {
 		printf("C YESIL YANDI\n");
 		}
 	 
 }
}

  else  if(cevap=='D'){
    	while(1)
    	{
		
 	 BOOL retVal3 = WriteFile(hComm, "D", sizeof(x), &bytesSend, NULL);
 		if (!retVal3) {
 		printf("HATA");
 		} else {
 		printf("D SARI YANDI\n");
 		}
}
}
CloseHandle(hComm);
}

