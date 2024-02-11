//MASAUSTUNE TXT DOSYASI OLARAK NOT KAYDEDEN PROGRAM
//PROGRAMI YENIDEN CALISTIRMAYI DENEDIGINIZDE YENI NOTLARI ONCEKI NOTLARLA DEGISTIRMEKTEDIR
#include <stdio.h>
#include <string.h>

void createtext(char name[], char inside[]) //TXT DOSYASI OLUSTURUP YAZDIGINIZ NOTLARI KAYDETMEK ICIN FONKSIYON
{
	
	FILE *note = fopen(name, "w");
	fprintf(note, "%s", inside);
	
	fclose(note);
}


int main() 
{
	int notsayisi=1;
	int sayac=1;
	char exit[100];
	
	while(sayac==1)//KULLANICI (exit) IFADESINI GIRENE KADAR SONSUZ DONGUDE KAL.
	{
	
	printf("      ------------------\n");
	printf("  +++ ENTER YOUR %d.NOTE +++\n",notsayisi);
	printf("      ------------------\n");
	printf(" \n");
	
	char text[5000];
	char file[20];
	
	fgets(text, sizeof(text) , stdin);//NOTLARI ALMAK ICIN FGETS FONKSIYONU KULLANIYORUZ
	
	    printf(" \n");
		printf(" \n");
	
	sprintf(file, "%d.note.txt", notsayisi); //DOSYA ISMI VE KACINCI NOTE OLDUGUNU BELIRTIR
	
	createtext(file, text);//YENI TEXT DOYASI
	
	printf("     ---------------------------------------------------------------\n");
	printf("**** Your note has been saved  as a %d.note.txt file on your desktop ****\n",notsayisi);
	printf("     ---------------------------------------------------------------\n");
	printf("  \n");
	printf(" \n");
	printf(" \n");
	printf("     -------------------------------------------------\n");
	printf(" <<< Press any key to continue or type (exit) to leave >>>\n");
	printf("     -------------------------------------------------\n");
	
	scanf("%s",exit);
	fgets(text, sizeof(text) , stdin); //SCANF ILE VERI ALDIKTAN SONRA ALTA BOS NULL KAYDEDER VE BURAYI BOS GECER.
	//EGER FGETS ILE BURDA BOS GECMEZSE TEKRAR NOT YAZARKEN ILK KULLANDIGIMIZ FGETS'I ATLAR VE MASAUSTUNE BOS NOT KAYDEDER 
	printf(" \n");
	printf(" \n");
	
	notsayisi++;//SONRAKI NOTLARIN NUMARASINI BELIRTMEK ICIN SAYAC
	
	
	   if(strcmp(exit, "exit") == 0 )  //SCANF ILE ALINAN IFADE 'exit' ISE BITIR YOKSA DEVAM ET.
	    {
		break;
	    }
	
	    
	
    }

	
	return 0;
}
