//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mygame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int pairs[16] = {0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7};
int k=0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{   srand( time(0) );
}


//---------------------------------------------------------------------------
void __fastcall TForm1::newgame1Click(TObject *Sender)
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

//-----------------------------------------------------------


for(int i = 0; i < 15; i++) {
   int j = (rand() % 15) + 1;

   int temp = pairs[i];
   pairs[i] = pairs[j];
   pairs[j] = temp;
  }

  picts->GetBitmap(9,Image1->Picture->Bitmap);
  picts->GetBitmap(9,Image2->Picture->Bitmap);
  picts->GetBitmap(9,Image3->Picture->Bitmap);
  picts->GetBitmap(9,Image4->Picture->Bitmap);
  picts->GetBitmap(9,Image5->Picture->Bitmap);
  picts->GetBitmap(9,Image6->Picture->Bitmap);
  picts->GetBitmap(9,Image7->Picture->Bitmap);
  picts->GetBitmap(9,Image8->Picture->Bitmap);
  picts->GetBitmap(9,Image9->Picture->Bitmap);
  picts->GetBitmap(9,Image10->Picture->Bitmap);
  picts->GetBitmap(9,Image11->Picture->Bitmap);
  picts->GetBitmap(9,Image12->Picture->Bitmap);
  picts->GetBitmap(9,Image13->Picture->Bitmap);
  picts->GetBitmap(9,Image14->Picture->Bitmap);
  picts->GetBitmap(9,Image15->Picture->Bitmap);
  picts->GetBitmap(9,Image16->Picture->Bitmap);
 k=0;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------





void __fastcall TForm1::Image1Click(TObject *Sender)
{
  Image1->Picture->Bitmap->FreeImage();
  Image1->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[0],Image1->Picture->Bitmap);
  k++;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{
  Image2->Picture->Bitmap->FreeImage();
  Image2->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[1],Image2->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
  Image3->Picture->Bitmap->FreeImage();
  Image3->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[2],Image3->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
Image4->Picture->Bitmap->FreeImage();
  Image4->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[3],Image4->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
  Image5->Picture->Bitmap->FreeImage();
  Image5->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[4],Image5->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
  Image6->Picture->Bitmap->FreeImage();
  Image6->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[5],Image6->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
        Image7->Picture->Bitmap->FreeImage();
  Image7->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[6],Image7->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
      Image8->Picture->Bitmap->FreeImage();
  Image8->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[7],Image8->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
        Image9->Picture->Bitmap->FreeImage();
  Image9->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[8],Image9->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
        Image10->Picture->Bitmap->FreeImage();
  Image10->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[9],Image10->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11Click(TObject *Sender)
{
        Image11->Picture->Bitmap->FreeImage();
  Image11->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[10],Image11->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
        Image12->Picture->Bitmap->FreeImage();
  Image12->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[11],Image12->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
        Image13->Picture->Bitmap->FreeImage();
  Image13->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[12],Image13->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
        Image14->Picture->Bitmap->FreeImage();
  Image14->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[13],Image14->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
        Image15->Picture->Bitmap->FreeImage();
  Image15->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[14],Image15->Picture->Bitmap);
  k++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
        Image16->Picture->Bitmap->FreeImage();
  Image16->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[15],Image16->Picture->Bitmap);
  k++;

}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
 if (k>2) {

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

  picts->GetBitmap(9,Image1->Picture->Bitmap);
  picts->GetBitmap(9,Image2->Picture->Bitmap);
  picts->GetBitmap(9,Image3->Picture->Bitmap);
  picts->GetBitmap(9,Image4->Picture->Bitmap);
  picts->GetBitmap(9,Image5->Picture->Bitmap);
  picts->GetBitmap(9,Image6->Picture->Bitmap);
  picts->GetBitmap(9,Image7->Picture->Bitmap);
  picts->GetBitmap(9,Image8->Picture->Bitmap);
  picts->GetBitmap(9,Image9->Picture->Bitmap);
  picts->GetBitmap(9,Image10->Picture->Bitmap);
  picts->GetBitmap(9,Image11->Picture->Bitmap);
  picts->GetBitmap(9,Image12->Picture->Bitmap);
  picts->GetBitmap(9,Image13->Picture->Bitmap);
  picts->GetBitmap(9,Image14->Picture->Bitmap);
  picts->GetBitmap(9,Image15->Picture->Bitmap);
  picts->GetBitmap(9,Image16->Picture->Bitmap);  k=0;}
}
//---------------------------------------------------------------------------



