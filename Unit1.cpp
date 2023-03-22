//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        char p1,p2,p3,p4,p5,p6,p7,p8,p9;
        //p1..p9 pola w grze(ich zawartosc:p1=n
        char kto;

        void sprawdz()
        {
             if((p1==p2 && p2==p3 && p1!='n') ||
        (p4==p5 && p5==p6 && p4!='n') ||
        (p7==p8 && p8==p9 && p7!='n') ||
        (p1==p4 && p4==p7 && p7!='n') ||
        (p2==p5 && p5==p8 && p2!='n') ||
        (p3==p6 && p6==p9 && p3!='n') ||
        (p1==p5 && p5==p9 && p1!='n') ||
        (p3==p5 && p5==p7 && p3!='n'))
     {
        char * w;

        if (kto=='x') w="Wygrywa Pomidor!";
        else w="Wygrywa Czacha!";

        Application->MessageBox(w, "Koniec gry", MB_OK);

     }


        }
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Pole1->Picture->LoadFromFile("img/oczko.bmp");
Pole2->Picture->LoadFromFile("img/oczko.bmp");
Pole3->Picture->LoadFromFile("img/oczko.bmp");
Pole4->Picture->LoadFromFile("img/oczko.bmp");
Pole5->Picture->LoadFromFile("img/oczko.bmp");
Pole6->Picture->LoadFromFile("img/oczko.bmp");
Pole7->Picture->LoadFromFile("img/oczko.bmp");
Pole8->Picture->LoadFromFile("img/oczko.bmp");
Pole9->Picture->LoadFromFile("img/oczko.bmp");
tura->Picture->LoadFromFile("img/KK.bmp");

p1='n'; p4='n'; p7='n';
p2='n'; p5='n'; p8='n';
p3='n'; p6='n'; p9='n';

kto='o';
Pole1->Enabled = true;
    Pole2->Enabled = true;
    Pole3->Enabled = true;
    Pole4->Enabled = true;
    Pole5->Enabled = true;
    Pole6->Enabled = true;
    Pole7->Enabled = true;
    Pole8->Enabled = true;
    Pole9->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole1Click(TObject *Sender)
{
    if(p1=='n')
    {
      if(kto=='o')
      {
        Pole1->Picture->LoadFromFile("img/K.bmp");
        p1='o';
        kto='x';
        tura->Picture->LoadFromFile("img/CC.bmp");
      }


      else
      {
        Pole1->Picture->LoadFromFile("img/C.bmp");
        p1='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole1->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole2Click(TObject *Sender)
{
    if(p2=='n')
    {
      if(kto=='o')
      {
        Pole2->Picture->LoadFromFile("img/K.bmp");
        p2='o';
        kto='x';
        tura->Picture->LoadFromFile("img/CC.bmp");
      }


      else
      {
        Pole2->Picture->LoadFromFile("img/C.bmp");
        p2='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole2->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole3Click(TObject *Sender)
{
    if(p3=='n')
    {
      if(kto=='o')
      {
        Pole3->Picture->LoadFromFile("img/K.bmp");
        p3='o';
        kto='x';
        tura->Picture->LoadFromFile("img/CC.bmp");
      }


      else
      {
        Pole3->Picture->LoadFromFile("img/C.bmp");
        p3='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole3->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole4Click(TObject *Sender)
{
    if(p4=='n')
    {
      if(kto=='o')
      {
        Pole4->Picture->LoadFromFile("img/K.bmp");
        p4='o';
        kto='x';
        tura->Picture->LoadFromFile("img/cc.bmp");
      }


      else
      {
        Pole4->Picture->LoadFromFile("img/C.bmp");
        p4='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole4->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole5Click(TObject *Sender)
{
    if(p5=='n')
    {
      if(kto=='o')
      {
        Pole5->Picture->LoadFromFile("img/K.bmp");
        p5='o';
        kto='x';
        tura->Picture->LoadFromFile("img/CC.bmp");
      }


      else
      {
        Pole5->Picture->LoadFromFile("img/C.bmp");
        p5='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole5->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole6Click(TObject *Sender)
{
    if(p6=='n')
    {
      if(kto=='o')
      {
        Pole6->Picture->LoadFromFile("img/K.bmp");
        p6='o';
        kto='x';
        tura->Picture->LoadFromFile("img/CC.bmp");
      }


      else
      {
        Pole6->Picture->LoadFromFile("img/C.bmp");
        p6='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole6->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole7Click(TObject *Sender)
{
    if(p7=='n')
    {
      if(kto=='o')
      {
        Pole7->Picture->LoadFromFile("img/K.bmp");
        p7='o';
        kto='x';
        tura->Picture->LoadFromFile("img/CC.bmp");
      }


      else
      {
        Pole7->Picture->LoadFromFile("img/C.bmp");
        p7='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole7->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole8Click(TObject *Sender)
{
    if(p8=='n')
    {
      if(kto=='o')
      {
        Pole8->Picture->LoadFromFile("img/K.bmp");
        p8='o';
        kto='x';
        tura->Picture->LoadFromFile("img/cc.bmp");
      }


      else
      {
        Pole8->Picture->LoadFromFile("img/C.bmp");
        p8='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole8->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole9Click(TObject *Sender)
{
    if(p9=='n')
    {
      if(kto=='o')
      {
        Pole9->Picture->LoadFromFile("img/K.bmp");
        p9='o';
        kto='x';
        tura->Picture->LoadFromFile("img/CC.bmp");
      }


      else
      {
        Pole9->Picture->LoadFromFile("img/C.bmp");
        p9='x';
        kto='o';
        tura->Picture->LoadFromFile("img/kk.bmp");
      }
      Pole9->Enabled=false;
      sprawdz();
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{
Image1->Picture->LoadFromFile("img/skullz.bmp");
}


void __fastcall TForm1::Wyjdzdowindows1Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------


