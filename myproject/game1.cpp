//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "game1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)



{
}
  void __fastcall TForm1::Image1Click(TObject *Sender)
  {
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image1->Picture->Bitmap);
   }



//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image2->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image3->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image4->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image5->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image6->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image7->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image8->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image9->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image10->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image11->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image12->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image13->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image14->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image15->Picture->Bitmap);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
        srand( time(0) );
        int i=rand() % 4;

        picts->GetBitmap(i,Image16->Picture->Bitmap);
}

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------






void __fastcall TForm1::Newgame1Click(TObject *Sender)
{
 picts->GetBitmap(4,Image1->Picture->Bitmap);
 picts->GetBitmap(4,Image2->Picture->Bitmap);
 picts->GetBitmap(4,Image3->Picture->Bitmap);
 picts->GetBitmap(4,Image4->Picture->Bitmap);
 picts->GetBitmap(4,Image5->Picture->Bitmap);
 picts->GetBitmap(4,Image6->Picture->Bitmap);
 picts->GetBitmap(4,Image7->Picture->Bitmap);
 picts->GetBitmap(4,Image8->Picture->Bitmap);
 picts->GetBitmap(4,Image9->Picture->Bitmap);
 picts->GetBitmap(4,Image10->Picture->Bitmap);
 picts->GetBitmap(4,Image11->Picture->Bitmap);
 picts->GetBitmap(4,Image12->Picture->Bitmap);
 picts->GetBitmap(4,Image13->Picture->Bitmap);
 picts->GetBitmap(4,Image14->Picture->Bitmap);
 picts->GetBitmap(4,Image15->Picture->Bitmap);
 picts->GetBitmap(4,Image16->Picture->Bitmap);


}
//---------------------------------------------------------------------------

