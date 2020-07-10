//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mygame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
albom[4][4];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::newgame1Click(TObject *Sender)
{
albom[0][0]=0;
albom[0][1]=0;
albom[0][2]=1;
albom[0][3]=1;
albom[1][0]=2;
albom[1][1]=2;
albom[1][2]=3;
albom[1][3]=3;
albom[2][0]=4;
albom[2][1]=4;
albom[2][2]=5;
albom[2][3]=5;
albom[3][0]=6;
albom[3][1]=6;
albom[3][2]=7;
albom[3][3]=7;
  picts->GetBitmap(albom[0][0],Image1->Picture->Bitmap);
  picts->GetBitmap(albom[0][1],Image2->Picture->Bitmap);
  picts->GetBitmap(albom[0][2],Image3->Picture->Bitmap);
  picts->GetBitmap(albom[0][3],Image4->Picture->Bitmap);
  picts->GetBitmap(albom[1][0],Image5->Picture->Bitmap);
  picts->GetBitmap(albom[1][1],Image6->Picture->Bitmap);
  picts->GetBitmap(albom[1][2],Image7->Picture->Bitmap);
  picts->GetBitmap(albom[1][3],Image8->Picture->Bitmap);
  picts->GetBitmap(albom[2][0],Image9->Picture->Bitmap);
  picts->GetBitmap(albom[2][1],Image10->Picture->Bitmap);
  picts->GetBitmap(albom[2][2],Image11->Picture->Bitmap);
  picts->GetBitmap(albom[2][3],Image12->Picture->Bitmap);
  picts->GetBitmap(albom[3][0],Image13->Picture->Bitmap);
  picts->GetBitmap(albom[3][1],Image14->Picture->Bitmap);
  picts->GetBitmap(albom[3][2],Image15->Picture->Bitmap);
  picts->GetBitmap(albom[3][3],Image16->Picture->Bitmap);


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
  picts->GetBitmap(albom[0][0],Image1->Picture->Bitmap);
}
//---------------------------------------------------------------------------
