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
        TButton *Button1;
        void __fastcall newgame1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
