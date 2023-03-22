//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <MPlayer.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Pole1;
        TImage *Pole2;
        TImage *Pole3;
        TImage *Pole4;
        TImage *Pole5;
        TImage *Pole6;
        TImage *Pole7;
        TImage *Pole8;
        TImage *Pole9;
        TLabel *Label1;
        TImage *tura;
        TButton *Button1;
        TImage *Image1;
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Nowagra1;
        TMenuItem *N1;
        TMenuItem *Wyjdzdowindows1;
        TMenuItem *Oautorze1;
        TMenuItem *WWWBLORGUFO1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Pole1Click(TObject *Sender);
        void __fastcall Pole2Click(TObject *Sender);
        void __fastcall Pole3Click(TObject *Sender);
        void __fastcall Pole4Click(TObject *Sender);
        void __fastcall Pole5Click(TObject *Sender);
        void __fastcall Pole6Click(TObject *Sender);
        void __fastcall Pole7Click(TObject *Sender);
        void __fastcall Pole8Click(TObject *Sender);
        void __fastcall Pole9Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall Wyjdzdowindows1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
