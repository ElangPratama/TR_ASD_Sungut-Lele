#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
#include<string.h>

void delay(void){
int delay;
delay=1;
while(delay<100){
    delay++;
}
}


COORD coord = {X:0,Y:0};
void gotoxy(int x,int y){
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}


//KODE PANAH_________________________________________________________________________________________________________________________________
void panah(int posisiMenu, int posisiPanah){
    if(posisiPanah==posisiMenu)
    printf("==>");
    else printf("   ");
}

void login_(){

    //LOGIN-------------------------------------------------------------
system("color 07");
char username[50];
char pass[50];
login:

printf("-----------------------------------\n");

printf("[Username]:");

printf("                        |");
printf("\n-----------------------------------");
gotoxy(12,1);
scanf("%[^\n]s",&username);
system("cls");

printf("-----------------------------------\n");
printf("[CODE]:");
printf("                            |");
printf("\n-----------------------------------");
fflush(stdin);

char ch;
int l=0;
int x=10;
while ((ch=(char)_getch())!='\r'){


    if(ch==8){
    pass[l]='\0';
    gotoxy(x-1,1);
    printf(" ");
    x--;
    l--;
    }
    else{
pass[l]=ch;
gotoxy(x,1);
printf("*");
   x++;
   l++;}

}
if(strcmp(username,"farhan")==0){
if(strcmp(pass,"icikiwir")==0){
    printf("\n\n\nLOGIN SUKSES !!");
}
else{

printf("\n\n SALAH, MOHON CEK KEMBALI\n\n");
system("pause");
system("cls");
goto login;
}
}
else{
    printf("\n\n SALAH,MOHON CEK KEMBALI\n\n");
    system("pause");
    system("cls");
    goto login;
}
int i;
int j;
//LOADING_--------------------------------------------------------------------------------------------------------------------
load:
for(i=1;i<=100;i++){
    for(int j=85;j<=120;j++){

gotoxy(j,24);
    printf("-");
    gotoxy(j,22);
    printf("-");}
        gotoxy(95,23);
        system("color A");
        printf("L O A D I N G %i%% ",i);
        delay();}
        system("cls");



        gotoxy(95,23);
        system("color F");
        printf("MEMUAT TAMPILAN");


    for(i=1;i<=208;i++){
        system("color F");
        gotoxy(i,1);
        printf("#");
         gotoxy(i,45);
        printf("#");
        delay();}

//garis samping saat animasi---------------------------------------------------------------------------------


 for(i=1;i<=45;i++){
    system("color F");
    gotoxy(1,i);
    printf("#");
    gotoxy(208,i);
    printf("#");
    delay();


}
 }


 //BAGIAN MENU 2 PILIH MATKUL____________________________________________________________________________________________________
char name[50];
    int qty_ddp, qty_pti, qty_matdis, qty_kwh, qty_kritis, qty_ing, qty_ind, qty_psi, qty_psm, qty_dsn;
    int ttl_ddp, ttl_pti, ttl_matdis, ttl_kwh, ttl_kritis, ttl_ing, ttl_ind, ttl_psi, ttl_psm, ttl_dsn;
    int grand_total;


//Isi bahan case 3______________________________________________________________________________________________________________________________________________
struct grades{
};
struct person{
char name[200];
char nimkamu[200];
char harisenin[200];
char hariselasa[200];
char harirabu[200];
char harikamis[200];
char harijumat[200];
char harisabtu[200];
};

struct info{
     struct person nim;
    struct person senin;
    struct person selasa;
    struct person rabu;
    struct person kamis;
    struct person jumat;
    struct person sabtu;
struct person mahasiswa;
struct grades;
};

struct info infoMahasiswa[100];
int banyakMahasiswa=0;

struct info tambahMahasiswa(){
char name[200];
char nimkamu[200];
char harisenin[200];
char hariselasa[200];
char harirabu[200];
char harikamis[200];
char harijumat[200];
char harisabtu[200];

int jdwl,mtkl;



printf("MASUKKAN JADWALMU\n\n");
fflush(stdin);
printf("\nNAMA MAHASISWA:");
gets(name);
printf("\nNIM MAHASISWA:");
gets(nimkamu);
printf("\nSENIN:");
gets(harisenin);

printf("\nSELASA:");
gets(hariselasa);

printf("\nRABU:");
gets(harirabu);

printf("\nKAMIS:");
gets(harikamis);

printf("\nJUMAT:");
gets(harijumat);

printf("\nSABTU:");
gets(harisabtu);

struct info infoBaru={"",{jdwl,mtkl}};
strcpy(infoBaru.mahasiswa.name,name);
strcpy(infoBaru.nim.nimkamu,nimkamu);
strcpy(infoBaru.senin.harisenin,harisenin);
strcpy(infoBaru.selasa.hariselasa,hariselasa);
strcpy(infoBaru.rabu.harirabu,harirabu);
strcpy(infoBaru.kamis.harikamis,harikamis);
strcpy(infoBaru.jumat.harijumat,harijumat);
strcpy(infoBaru.sabtu.harisabtu,harisabtu);
return infoBaru;

};

void lihatMahasiswa(){

for(int i=0;i<banyakMahasiswa;i++){
    struct info siswa = infoMahasiswa[i];

gotoxy(100,12);
    printf("DAFTAR JADWAL SISWA");
           gotoxy(90,14);
        printf("nama mahasiswa:%s",infoMahasiswa[i].mahasiswa.name);
         gotoxy(90,16);
        printf("NIM:%s",infoMahasiswa[i].nim.nimkamu);
         gotoxy(90,21);
         printf("SENIN:%s",infoMahasiswa[i].senin.harisenin);
          gotoxy(90,24);
        printf("SELASA:%s",siswa.selasa.hariselasa);
         gotoxy(90,27);
        printf("RABU:%s",siswa.rabu.harirabu );
         gotoxy(90,30);
        printf("KAMIS:%s",siswa.kamis.harikamis);
         gotoxy(90,33);
         printf("JUMAT:%s",siswa.jumat.harijumat);
          gotoxy(90,36);
         printf("SABTU:%s",siswa.sabtu.harisabtu);
    }
}


int main(){
    //BAGIAN MENU 2 PILIH MATKUL____________________________________________________________________________________________________
char name[50];
    int qty_ddp, qty_pti, qty_matdis, qty_kwh, qty_kritis, qty_ing, qty_ind, qty_psi, qty_psm, qty_dsn;
    int ttl_ddp, ttl_pti, ttl_matdis, ttl_kwh, ttl_kritis, ttl_ing, ttl_ind, ttl_psi, ttl_psm, ttl_dsn;
    int grand_total;


     login_();
    int keyPressed=0;
    int posisi=1;
    int menu1;
    int i;
    int pilih;
    char lanjut;
    int bilangan[2];
    system("COLOR 3F");
     while(keyPressed!=13){
            system("cls");

            for(i=1;i<=208;i++){
        gotoxy(i,1);
        printf("#");
         gotoxy(i,45);
        printf("#");}
//garis samping menu---------------------------------------------------------------------------------

 for(i=1;i<=45;i++){
    gotoxy(1,i);
    printf("#");
    gotoxy(208,i);
    printf("#");
 }

         menu:
         gotoxy(70,8);
         printf("************************************************************\n");
         gotoxy(70,10);
        printf("*************** M E N U  S I A S A T  U H U Y **************");
        gotoxy(70,12);
         printf("************************************************************\n");

        gotoxy(75,15);
        panah(1, posisi); printf("1. DAFTAR JADWAL MATAKULIAH\n");
        gotoxy(75,17);
        panah(2, posisi); printf("2. AMBIL MATAKULIAHMU SEKARANG\n");
        gotoxy(75,19);
        panah(3, posisi); printf("3. AYO BUAT JADWAL KEGIATANMU\n");
        gotoxy(75,21);
        panah(4, posisi); printf("4. LIHAT JADWAL YANG TELAH DIBUAT\n");
        gotoxy(75,23);
        panah(5, posisi); printf("5. PESAN KESAN\n");
        gotoxy(75,25);
        panah(6, posisi); printf("6. EXIT\n");



        keyPressed=getch();
        if(keyPressed==72)posisi--;
        else if(keyPressed==80)posisi++;
        else posisi=posisi;
        if(posisi>6)posisi=1;
        if(posisi<1)posisi=6;


}



    switch(posisi){

//Case1_____________________________________________________________________________________________________________

            case 1:

system("cls");
 system("COLOR 3F");
//garis atas------------------------------------------------------------------------------------------
for(i=1;i<=208;i++){
        gotoxy(i,1);
        printf("#");
         gotoxy(i,45);
        printf("#");}
//garis samping ---------------------------------------------------------------------------------

 for(i=1;i<=45;i++){
    gotoxy(1,i);
    printf("#");
    gotoxy(208,i);
    printf("#");
 }
        gotoxy(50,5);
        printf(" DAFTAR MATA KULIAH              |   JUMLAH SKS    |          HARI    |           NAMA DOSEN       |");
        gotoxy(50,6);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,7);
        printf("1.DASAR-DASAR PEMROGRAMAN        |            3 sks|         SELASA   |   REZA KECAP               |");
        gotoxy(50,8);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,9);
        printf("2.PENGANTAR TEKNOLOGI INFORMASI  |            3 sks|         SENIN    |   FARHAN KEBAB             |");
        gotoxy(50,10);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,11);
        printf("3.MATEMATIKA DISKRIT             |            3 sks|         KAMIS    |   RIZKI JAGOAN NEON        |");
        gotoxy(50,12);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,13);
        printf("4.LAYOUT DESIGN                  |            2 sks|         SELASA   |   RIAN BATAGOR             |");
        gotoxy(50,14);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,15);
        printf("5.BERPIKIR KRITIS                |            2 sks|         KAMIS    |   REHAN VENOM              |");
        gotoxy(50,16);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,17);
        printf("6.DASAR KEWIRAUSAHAAN            |            2 sks|         JUMAT    |   ZAKI INDOMIE             |");
        gotoxy(50,18);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,19);
        printf("7.PSIKOLOGI                      |            2 sks|         RABU     |   UDIN PENTOL              |");
        gotoxy(50,20);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,21);
        printf("8.PENGANTAR SENI MUSIK           |            2 sks|         RABU     |   BAGAS ICIKIWIR           |");
        gotoxy(50,22);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,23);
        printf("9.BAHASA INDONESIA               |            2 sks|         KAMIS    |   SUMBUL                   |");
        gotoxy(50,24);
        printf("***************************************************|******************|****************************|");
        gotoxy(50,25);
        printf("10.BAHASA INGGRIS                |            2 sks|         SENIN    |   KHALID KHASIMIRI         |");
        gotoxy(50,26);
        printf("***************************************************|******************|****************************|");

        getch();
        system("cls");
        goto menu;



//case2_____________________________________________________________________________________________________________________________
            case 2:
system("cls");
 system("COLOR 3F");

    printf("-------------------------------- \n");
    printf("== PILIH JADWALMU == \n");
    printf("-------------------------------- \n");

    printf("Masukkan Nama Anda : ");
    fgets(name, 50, stdin);

    printf("\nHai %s\n", name);
    printf("AMBIL MATAKULIAHMU SEKARANG\n");
    printf("tekan 0 jika tidak ingin mengambil\n");
    printf("*Rp.500.000 per SKS \n\n");

    printf("Dasar Dasar Pemrograman \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_ddp);

    printf("Pengantar Teknologi Informasi\t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_pti);

    printf("Matematika Diskrit      \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_matdis);

    printf("Berpikir Kritis         \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_kritis);

    printf("Kewirausahaan           \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_kwh);

    printf("Bahasa Inggris          \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_ing);

    printf("Bahasa Indonesia        \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_ind);

    printf("Psikologi               \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_psi);

    printf("PengantarSeniMusik      \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_psi);

    printf("LayoutDesign            \t\t Rp. 500.000 \t\t: ");
    scanf("%d", &qty_dsn);
    getch();
    system("cls");


    printf("\n\n ----------  Rincian Biaya ---------------\n");

    ttl_ddp = 500000 * qty_ddp;
    ttl_pti = 500000 * qty_pti;
    ttl_matdis= 500000 * qty_matdis;
    ttl_kritis = 500000;qty_kritis;
    ttl_kwh = 500000 * qty_kwh;
    ttl_ing=5000000*qty_ing;
    ttl_ind=5000000*qty_ind;
    ttl_psi=5000000*qty_psi;
    ttl_psm=5000000*qty_psm;
    ttl_dsn=5000000*qty_dsn;

    grand_total = ttl_ddp + ttl_pti + ttl_matdis + ttl_kwh + ttl_kritis+ttl_ing+ttl_ind+ttl_psi+ttl_psm+ttl_dsn;

    printf("Dasar Dasar Pemrograman      \t\t: %d = Rp. %d \n", qty_ddp, ttl_ddp);
    printf("Pengantar Teknologi Informasi\t\t: %d = Rp. %d \n" , qty_pti, ttl_pti);
    printf("Matematika Diskrit           \t\t: %d = Rp. %d \n" , qty_matdis, ttl_matdis);
    printf("Kewirausahaan                \t\t: %d = Rp. %d \n" , qty_kwh, ttl_kwh);
    printf("Bahasa inggris               \t\t: %d = Rp. %d \n" , qty_ing, ttl_ing);
    printf("Bahasa Indonesia             \t\t: %d = Rp. %d \n" , qty_ind, ttl_ind);
    printf("Psikologi                    \t\t: %d = Rp. %d \n" , qty_psi, ttl_psi);
    printf("Pengantar Seni Musik         \t\t: %d = Rp. %d \n" , qty_psm, ttl_psm);
    printf("Layout Design                \t\t: %d = Rp. %d \n" , qty_dsn, ttl_dsn);

    printf("\nTotal                         \t\t: Rp. %d\n\n", grand_total);
    printf("Selamat memulai semester baru.....\n");

getch();
system("cls");
goto menu;

//case 3_______________________________________________________________________________________________________________________________________
case 3:
system("cls");
    system("COLOR 3F");

    infoMahasiswa[banyakMahasiswa++]=tambahMahasiswa();
    printf("\nlanjutkeun");
    getch();
    system("cls");
    goto menu;


    //case 4____________________________________________________________

case 4:
    system("COLOR 3F");
//garis atas------------------------------------------------------------------------------------------
for(i=1;i<=208;i++){
        gotoxy(i,1);
        printf("#");
         gotoxy(i,45);
        printf("#");}
//garis samping ---------------------------------------------------------------------------------

 for(i=1;i<=45;i++){
    gotoxy(1,i);
    printf("#");
    gotoxy(208,i);
    printf("#");
 }

    system("cls");
    lihatMahasiswa();
    getch();
    system("cls");
    goto menu;


case 5:
    system("cls");
     system("COLOR 3F");
    menu1:
      printf("\n1.Pesan dari Amsal");
    printf("\n2.Pesan dari Joshua");
    printf("\n3.Pesan dari Elang");
    printf("\n4.Balik ke Menu");


printf("\npilih pesan:");
scanf("%d",&pilih);

switch(pilih){

case 1:
     system("cls");
      system("COLOR 3F");
     //garis atas------------------------------------------------------------------------------------------
for(i=1;i<=208;i++){
        gotoxy(i,1);
        printf("#");
         gotoxy(i,45);
        printf("#");}
//garis samping ---------------------------------------------------------------------------------

 for(i=1;i<=45;i++){
    gotoxy(1,i);
    printf("#");
    gotoxy(208,i);
    printf("#");
 }
    gotoxy(10,15);
    printf("T e t a p   T e r a p k a n   p e m b e l a j a r a n   y a n g   s a n t a i..");
    gotoxy(10,16);
    printf("s u p a y a   s u a s a n a  g a k   t e g a n g  d a n  s e m u a  y a n g   d i j e l a s k a n   b i s a   d i p a h a m i  d e n g a n   b e t u l");
    gotoxy(10,17);
    printf("t a p i  s a n t a i   n y a   a d a   b a t a s a n   j u g a  y a  k a k");
    gotoxy(10,20);
    printf("S e n a n g   d a p a t   a s i s t e n   d o s e n   s e p e r t i  k a k   N a t a n i a  d a n   K a k  A r y o");
    gotoxy(10,21);
    printf("B e l a j a r n y a  d i b a w a  s a n t a i  a j a,  t a p i   s e m u a   y a n g   d i j e l a s k a n   b i s a   d i p a h a m i");
    gotoxy(50,25);
    printf("-amsal-");
    getch();
    system("cls");
    goto menu1;


case 2:
    system("cls");
     system("COLOR 3F");
    //garis atas------------------------------------------------------------------------------------------
for(i=1;i<=208;i++){
        gotoxy(i,1);
        printf("#");
         gotoxy(i,45);
        printf("#");}
//garis samping ---------------------------------------------------------------------------------

 for(i=1;i<=45;i++){
    gotoxy(1,i);
    printf("#");
    gotoxy(208,i);
    printf("#");
 }
    gotoxy(5,17);
    printf("S e n a n g   b i s a   b e r k e n a l a n   d e n g a n   k a k   A r y o  d a n   k a k   N a t a n i a  d a n   b i s a   m e n d a p  a t k a n   i l m u   d a r i  k a k a k  b e r d u a");
    gotoxy(10,19);
    printf("S e n a n g   d a p a t   A s i s t e n   d o s e n   s e p e r t i   k a k  n a t a  n i a   d a n   k a k   a r y o.");
    gotoxy(10,20);
    printf("B e l a j a r n y a   d i b a w a   s a n t a i   a j a   t a p i   s e m u a   y a n g   d i j e l a s k a n   d a p a t   d i p a h a m i");
    gotoxy(50,25);
    printf("-joshua-");
    getch();
    system("cls");
    goto menu1;



case 3:
    system("cls");
     system("COLOR 3F");
    //garis atas------------------------------------------------------------------------------------------
for(i=1;i<=208;i++){
        gotoxy(i,1);
        printf("#");
         gotoxy(i,45);
        printf("#");}
//garis samping ---------------------------------------------------------------------------------

 for(i=1;i<=45;i++){
    gotoxy(1,i);
    printf("#");
    gotoxy(208,i);
    printf("#");
 }
    gotoxy(50,15);
    printf("n g e l u h   b o l e h h ,");
     gotoxy(50,16);
    printf("c a p e k   j u g a   b o l e h");
     gotoxy(50,17);
    printf("b o s e n ? ?  b o l e h...");
     gotoxy(50,18);
    printf("n y e r a h ? ?");
     gotoxy(50,19);
    printf("j a n g a n....");
     gotoxy(50,20);
    printf("j a l a n i   k e h i d u p a n   s e b a i k   m u n g k i n");
     gotoxy(50,21);
    printf("s t a y   s t r o n g ..");
     gotoxy(50,22);
    printf("L o v e   u   a l l..");
     gotoxy(50,23);
    printf("rrawrr...");

    gotoxy(50,28);
    printf("-Lang-");
    getch();
    system("cls");
    goto menu1;

case 4:
    system("cls");
    goto menu;

}


//case 5---------------------------------------------------------------------------------------------------
case 6:
    system("cls");
gotoxy(60,15);
printf("T E R I M A K  A S I H   G A E S");
gotoxy(60,18);
printf("Amsal Suryanda pakpahan_6720222100");
gotoxy(60,20);
printf("Joshua Israel Ohee_672022235");
gotoxy(60,22);
printf("Elang Pratama_672022247\n");
system("pause\n");
exit(0);

}

}

