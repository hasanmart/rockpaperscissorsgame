#include<stdio.h>
#include<stdlib.h>
#include<time.h>




void islemfon();

void hatafon();

void cıkısfon();



int main(){



islemfon();



    getch(0);
    return 0;
}


void hatafon(){


    printf("Hatali Giris Yaptiniz.\nLutfen Tekrar Deneyiniz.\n\n");



}


void cıkısfon(){
    
    
    
    system("CLS");
    system("COLOR 2");
    
    
    
    printf("CIKIS YAPILIYOR...\t3\n");
    sleep(1);
    printf("CIKIS YAPILIYOR...\t2\n");
    sleep(1);
    printf("CIKIS YAPILIYOR...\t1\n");
    sleep(1);
    printf("CIKIS YAPILIYOR...\t0\n");
            
            
            
    exit(0);
            
}
            
            
            
void islemfon(){
            
    int islem;
    int oyunbitis;
    int tkm;
    int superbabaanne;
    int i=0;
    int j=0;
    int oyunsayac=0;
    int tekraroyna;
            
    islemsec:
            
        system("COLOR 3");
            
        printf("TAS - KAGIT - MAKAS\n\n\n\n");
        printf("[1]OYNA\n\n[2]NASIL OYNANIR\n\n[3]YAPIMCI\n\n[4]CIKIS\n\n");
        scanf("%d",&islem);
            
        switch(islem){
            case 1:                                 //OYNA
            
            system("CLS");
            
            printf("OYUN KAC EL SURSUN ?\n\n");
            scanf("%d",&oyunbitis);
            
            system("CLS");
            
            printf("OYUN BASLIYOR...\t5\n");
            sleep(1);
            printf("OYUN BASLIYOR...\t4\n");
            sleep(1);
            printf("OYUN BASLIYOR...\t3\n");
            sleep(1);
            printf("OYUN BASLIYOR...\t2\n");
            sleep(1);
            printf("OYUN BASLIYOR...\t1\n");
            sleep(1);
            printf("OYUN BASLIYOR...\t0\n\n\n");
            
            
            
            system("CLS");
            
        taskagitmakas:
            
            printf("BIRINI SECINIZ:\n\n");
            printf("[1]TAS\n\n[2]KAGIT\n\n[3]MAKAS\n\n");
            scanf("%d",&tkm);
            
            srand(time(NULL));
            superbabaanne=rand()%2;
            
            
            if(tkm==1){
                
                
                printf("SENIN SECTIGIN = TAS\n");
                
                
            }
            
            else if(tkm==2){
                
                
                printf("SENIN SECTIGIN = KAGIT\n");
                
                
            }
            else if(tkm==3){
                
                
                printf("SENIN SECTIGIN = MAKAS\n");
                
                
            }
            else{
                
                
                system("CLS");
                hatafon();
                goto taskagitmakas;
                
                
            }
            
            
            if(superbabaanne==0){
                
                printf("SUPER BABAANNE'NIN SECTIGI = TAS\n\n\n");
                
            }
            else if(superbabaanne==1){
                
                printf("SUPER BABAANNE'NIN SECTIGI = KAGIT\n\n\n");
                
            }
            else{
                
                printf("SUPER BABAANNE'NIN SECTIGI = MAKAS\n\n\n");
                
            }
            if(tkm==1 && superbabaanne==0 ||tkm==2 && superbabaanne==1 ||tkm==3 && superbabaanne==2){
                
                
                
                i++;
                j++;
                printf("DURUM BERABERE==>\t%d - %d\n\n",i,j);
                
                sleep(2);
                system("CLS");
                
            }
            else if(tkm==1 && superbabaanne==2 ||tkm==2 && superbabaanne==0 ||tkm==3 && superbabaanne==1){
                
                
                
                i++;
                printf("*TEBRIKLER* KAZANDINIZ==>\t%d - %d\n\n",i,j);
                
                sleep(3);
                system("CLS");
                
            }
            else if(tkm==1 && superbabaanne==1 ||tkm==2 && superbabaanne==2 ||tkm==3 && superbabaanne==0){
                
                j++;
                
                
                printf("SUPER BABAANNE'YI ALT EDEMEDIN MALESEFF!!==>\t%d - %d\n\n",i,j);
                
                sleep(3);
                system("CLS");

            }
            
            
            
            oyunsayac++;
            
            if(oyunbitis>oyunsayac){
                
                goto taskagitmakas;
                
            }
            else if(oyunbitis<=oyunsayac){
                if(i>j){
                    islemsec2:
                    printf("TEBRIKLER SUPER BABAANNE'YI YENEREK OYUNU KAZANDINIZ.\n\n\n");
                    printf("[1]TEKRAR OYNA\n\n[2]CIKIS\n\n");
                    scanf("%d",&tekraroyna);
                    i=0;
                    j=0;
                switch(tekraroyna){
                    
                    
                    case 1:
                    
                    goto taskagitmakas;
                    
                    break;
                    
                    
                    case 2:
                    
                    
                    cıkısfon();
                    
                    break;
                    
                    default:
                    
                    hatafon();
                    system("CLS");
                    goto islemsec2;
                    
                }
            }
            else if(j>i){
                islemsec3:
                printf("MALESEF SUPER BABAANNE SIZI YENEREK OYUNU KAZANDI.\n\n\n");
                    printf("[1]TEKRAR OYNA\n\n[2]CIKIS\n\n");
                    scanf("%d",&tekraroyna);
                    i=0;
                    j=0;
                switch(tekraroyna){
                    
                    
                    case 1:
                    
                    goto taskagitmakas;
                    
                    break;
                    
                    
                    case 2:
                    
                    
                    cıkısfon();
                    
                    break;
                    
                    default:
                    
                    hatafon();
                    system("CLS");
                    goto islemsec3;
                    
                }
            }
            else{
                islemsec4:
                printf("SUPER BABAANNE ILE BERABERE KALDINIZ.\n\n\n");
                    printf("[1]TEKRAR OYNA\n\n[2]CIKIS\n\n");
                    scanf("%d",&tekraroyna);
                    i=0;
                    j=0;
                switch(tekraroyna){
                    
                    
                    case 1:
                    
                    goto taskagitmakas;
                    
                    break;
                    
                    
                    case 2:
                    
                    
                    cıkısfon();
                    
                    break;
                    
                    default:
                    
                    hatafon();
                    system("CLS");
                    goto islemsec4;
                    
                }
            }
        }
            break;
            
            case 2:                                 //NASIL OYNANIR
            system("CLS");
            system("COLOR 4");            
            
            printf("----------NASIL OYNANIR----------\n");
            printf("==>ONCELIKLE KAC EL SURECEGINI GIRIN.\n");
            printf("==>Daha sonra TAS - KAGIT - MAKAS'tan birini seciniz.\n");
            printf("UNUTMA!!\n");
            printf("==>TAS MAKASI YENER.\n");
            printf("==>MAKAS KAGIDI YENER.\n");
            printf("==>KAGIT TASI YENER.\n");
            printf("==>IYI OYUNLAR<==\n\n");
            sleep(10);
            system("CLS");
            
            goto islemsec;
            system("COLOR 3");
            
            case 3:                                  //YAPIMCI
            system("CLS");
            system("COLOR 1");
            printf("*TELIF HAKLARI SAHIBI*\n\n");
            printf("HASAN");
            
            
            
            sleep(5);
            system("CLS");
            goto islemsec;
            
        
        
        
            break;
        
        
        
        
            case 4:                         //ÇIKIŞ 
            
            
            
            
            cıkısfon();
            
            
        default:
            
            hatafon();
            
            
        goto islemsec;
        
        
        
        }


}

