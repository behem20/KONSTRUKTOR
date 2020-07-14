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


 int pairs[16] = {0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7};

for(int i = 0; i < 15; i++) {
   int j = (rand() % 15) + 1;

   int temp = pairs[i];
   pairs[i] = pairs[j];
   pairs[j] = temp;
  }

  picts->GetBitmap(pairs[0],Image1->Picture->Bitmap);
  picts->GetBitmap(pairs[1],Image2->Picture->Bitmap);
  picts->GetBitmap(pairs[2],Image3->Picture->Bitmap);
  picts->GetBitmap(pairs[3],Image4->Picture->Bitmap);
  picts->GetBitmap(pairs[4],Image5->Picture->Bitmap);
  picts->GetBitmap(pairs[5],Image6->Picture->Bitmap);
  picts->GetBitmap(pairs[6],Image7->Picture->Bitmap);
  picts->GetBitmap(pairs[7],Image8->Picture->Bitmap);
  picts->GetBitmap(pairs[8],Image9->Picture->Bitmap);
  picts->GetBitmap(pairs[9],Image10->Picture->Bitmap);
  picts->GetBitmap(pairs[10],Image11->Picture->Bitmap);
  picts->GetBitmap(pairs[11],Image12->Picture->Bitmap);
  picts->GetBitmap(pairs[12],Image13->Picture->Bitmap);
  picts->GetBitmap(pairs[13],Image14->Picture->Bitmap);
  picts->GetBitmap(pairs[14],Image15->Picture->Bitmap);
  picts->GetBitmap(pairs[15],Image16->Picture->Bitmap);

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
  Image1->Picture->Bitmap->FreeImage();
  Image1->Picture->Bitmap = NULL;

  Image2->Picture->Bitmap->FreeImage();
  Image2->Picture->Bitmap = NULL;

  Image3->Picture->Bitmap->FreeImage();
  Image3->Picture->Bitmap = NULL;

  Image4->Picture->Bitmap->FreeImage();
  Image4->Picture->Bitmap = NULL;

  Image5->Picture->Bitmap->FreeImage();
  Image5->Picture->Bitmap = NULL;

  Image6->Picture->Bitmap->FreeImage();
  Image6->Picture->Bitmap = NULL;

  Image7->Picture->Bitmap->FreeImage();
  Image7->Picture->Bitmap = NULL;

  Image8->Picture->Bitmap->FreeImage();
  Image8->Picture->Bitmap = NULL;

  Image9->Picture->Bitmap->FreeImage();
  Image9->Picture->Bitmap = NULL;

  Image10->Picture->Bitmap->FreeImage();
  Image10->Picture->Bitmap = NULL;

  Image11->Picture->Bitmap->FreeImage();
  Image11->Picture->Bitmap = NULL;

  Image12->Picture->Bitmap->FreeImage();
  Image12->Picture->Bitmap = NULL;

  Image13->Picture->Bitmap->FreeImage();
  Image13->Picture->Bitmap = NULL;

  Image14->Picture->Bitmap->FreeImage();
  Image14->Picture->Bitmap = NULL;

  Image15->Picture->Bitmap->FreeImage();
  Image15->Picture->Bitmap = NULL;

  Image16->Picture->Bitmap->FreeImage();
  Image16->Picture->Bitmap = NULL;

  }
//---------------------------------------------------------------------------

