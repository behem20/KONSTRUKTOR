//---------------------------------------------------------------------------

#ifndef mygameH
#define mygameH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include <ActnList.hpp>
#include <ActnMan.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TImageList *picts;
        TMenuItem *game1;
        TMenuItem *newgame1;
        TOpenPictureDialog *OpenPictureDialog1;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TImage *Image13;
        TImage *Image14;
        TImage *Image15;
        TImage *Image16;
        TTimer *Timer1;
        TActionManager *ActionManager1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        void __fastcall newgame1Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall Image2Click(TObject *Sender);
        void __fastcall Image3Click(TObject *Sender);
        void __fastcall Image4Click(TObject *Sender);
        void __fastcall Image5Click(TObject *Sender);
        void __fastcall Image6Click(TObject *Sender);
        void __fastcall Image7Click(TObject *Sender);
        void __fastcall Image8Click(TObject *Sender);
        void __fastcall Image9Click(TObject *Sender);
        void __fastcall Image10Click(TObject *Sender);
        void __fastcall Image11Click(TObject *Sender);
        void __fastcall Image12Click(TObject *Sender);
        void __fastcall Image13Click(TObject *Sender);
        void __fastcall Image14Click(TObject *Sender);
        void __fastcall Image15Click(TObject *Sender);
        void __fastcall Image16Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
