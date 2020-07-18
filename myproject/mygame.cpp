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
int sum1 = 0;
int sum2 = 0;
int sum3 = 0;
int sum4 = 0;
int sum5 = 0;
int sum6 = 0;
int sum7 = 0;
int sum8 = 0;
int sum9 = 0;
int sum10 = 0;
int sum11 = 0;
int sum12 = 0;
int sum13 = 0;
int sum14 = 0;
int sum15 = 0;
int sum16 = 0;
int pairs1[16];
int test[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int test1[16];
int test2[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

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


for(int i = 0; i < 16; i++) {
   int j = (rand() % 15) + 1;

   int temp = pairs[i];
   pairs[i] = pairs[j];
   pairs[j] = temp;
  }




for (int i = 0; i < 16; i++)
{
 if (pairs[i]==0)
 test1[i]=46;
}

for (int i = 0; i < 16; i++)
{
 if (pairs[i]==1)
 test1[i]=47;
}

for (int i = 0; i < 16; i++)
{
 if (pairs[i]==2)
 test1[i]=48;
}

for (int i = 0; i < 16; i++)
{
 if (pairs[i]==3)
 test1[i]=49;
}

for (int i = 0; i < 16; i++)
{
 if (pairs[i]==4)
 test1[i]=50;
}

for (int i = 0; i < 16; i++)
{
 if (pairs[i]==5)
 test1[i]=51;
}

for (int i = 0; i < 16; i++)
{
 if (pairs[i]==6)
 test1[i]=52;
}

for (int i = 0; i < 16; i++)
{
 if (pairs[i]==7)
 test1[i]=53;
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
  test2[0]=test1[0];
  test[0]=1;

  for (int i=0; i < 16; i++)
   { if (test[i]==1)
    k=i; }

  for (int i=0; i < 16; i++)
    sum1 += test[i];

    if (
    sum1==2
    )
        if (test1[0]==test1[k]


        )
                { Image1->Picture->Bitmap->FreeImage();
                  Image1->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image1->Picture->Bitmap);


                  if(k==1){
                  Image2->Picture->Bitmap->FreeImage();
                  Image2->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image2->Picture->Bitmap);}

                  if(k==2){
                  Image1->Picture->Bitmap->FreeImage();
                  Image1->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image3->Picture->Bitmap);}

                  if(k==3) {
                  Image4->Picture->Bitmap->FreeImage();
                  Image4->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image4->Picture->Bitmap);}

                  if(k==4)  {
                  Image5->Picture->Bitmap->FreeImage();
                  Image5->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image5->Picture->Bitmap); }

                  if(k==5) {
                  Image6->Picture->Bitmap->FreeImage();
                  Image6->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image6->Picture->Bitmap); }

                  if(k==6)   {
                  Image7->Picture->Bitmap->FreeImage();
                  Image7->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image7->Picture->Bitmap);  }

                  if(k==7) {
                  Image8->Picture->Bitmap->FreeImage();
                  Image8->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image8->Picture->Bitmap); }

                  if(k==8) {
                  Image9->Picture->Bitmap->FreeImage();
                  Image9->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image9->Picture->Bitmap); }

                  if(k==9)  {
                  Image10->Picture->Bitmap->FreeImage();
                  Image10->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image10->Picture->Bitmap); }

                  if(k==10) {
                  Image11->Picture->Bitmap->FreeImage();
                  Image11->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image11->Picture->Bitmap);  }

                  if(k==11)  {
                  Image12->Picture->Bitmap->FreeImage();
                  Image12->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image12->Picture->Bitmap); }

                  if(k==12)  {
                  Image13->Picture->Bitmap->FreeImage();
                  Image13->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image13->Picture->Bitmap); }

                  if(k==13)  {
                  Image14->Picture->Bitmap->FreeImage();
                  Image14->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image14->Picture->Bitmap); }

                  if(k==14)  {
                  Image15->Picture->Bitmap->FreeImage();
                  Image15->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image15->Picture->Bitmap); }

                  if(k==15)  {
                  Image16->Picture->Bitmap->FreeImage();
                  Image16->Picture->Bitmap = NULL;
                  picts->GetBitmap(10,Image16->Picture->Bitmap); } }


            else {

                  Image1->Picture->Bitmap->FreeImage();
                  Image1->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image1->Picture->Bitmap) ;

                  if(k==1)
                  {Image2->Picture->Bitmap->FreeImage();
                  Image2->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image2->Picture->Bitmap);}

                  if(k==2)
                  {Image3->Picture->Bitmap->FreeImage();
                  Image3->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image3->Picture->Bitmap);}

                  if(k==3)
                  {Image4->Picture->Bitmap->FreeImage();
                  Image4->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image4->Picture->Bitmap);}

                  if(k==4)
                  {Image5->Picture->Bitmap->FreeImage();
                  Image5->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image5->Picture->Bitmap);}

                  if(k==5)
                  {Image6->Picture->Bitmap->FreeImage();
                  Image6->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image6->Picture->Bitmap);}

                  if(k==6)
                  {Image7->Picture->Bitmap->FreeImage();
                  Image7->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image7->Picture->Bitmap);}

                  if(k==7)
                  {Image8->Picture->Bitmap->FreeImage();
                  Image8->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image8->Picture->Bitmap);}

                  if(k==8)
                  {Image9->Picture->Bitmap->FreeImage();
                  Image9->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image9->Picture->Bitmap);}

                  if(k==9)
                  {Image10->Picture->Bitmap->FreeImage();
                  Image10->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image10->Picture->Bitmap);}

                  if(k==10)
                  {Image11->Picture->Bitmap->FreeImage();
                  Image11->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image11->Picture->Bitmap);}

                  if(k==11)
                  {Image12->Picture->Bitmap->FreeImage();
                  Image12->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image12->Picture->Bitmap);}

                  if(k==12)
                  {Image13->Picture->Bitmap->FreeImage();
                  Image13->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image13->Picture->Bitmap);}

                  if(k==13)
                  {Image14->Picture->Bitmap->FreeImage();
                  Image14->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image14->Picture->Bitmap);}

                  if(k==14)
                  {Image15->Picture->Bitmap->FreeImage();
                  Image15->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image15->Picture->Bitmap);}

                  if(k==15)
                  {Image16->Picture->Bitmap->FreeImage();
                  Image16->Picture->Bitmap = NULL;
                  picts->GetBitmap(9,Image16->Picture->Bitmap);}
               }




}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{
  Image2->Picture->Bitmap->FreeImage();
  Image2->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[1],Image2->Picture->Bitmap);
  test2[1]=test1[1];
  test[1]=1;
  for (int i=0; i < 15; i++)
    sum2 += test[i];
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
  Image3->Picture->Bitmap->FreeImage();
  Image3->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[2],Image3->Picture->Bitmap);
   test2[2]=test1[2];
  test[2]=1;
  for (int i=0; i < 15; i++)
    sum3 += test[i];

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
Image4->Picture->Bitmap->FreeImage();
  Image4->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[3],Image4->Picture->Bitmap);
     test2[3]=test1[3];
  test[3]=1;

   for (int i=0; i < 15; i++)
    sum4 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
  Image5->Picture->Bitmap->FreeImage();
  Image5->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[4],Image5->Picture->Bitmap);
   test2[4]=test1[4];
  test[4]=1;
   for (int i=0; i < 15; i++)
    sum5 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
  Image6->Picture->Bitmap->FreeImage();
  Image6->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[5],Image6->Picture->Bitmap);
  test2[5]=test1[5];
  test[5]=1;
  for (int i=0; i < 15; i++)
    sum6 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
        Image7->Picture->Bitmap->FreeImage();
  Image7->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[6],Image7->Picture->Bitmap);
   test2[6]=test1[6];
  test[6]=1;
  for (int i=0; i < 15; i++)
    sum7 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
      Image8->Picture->Bitmap->FreeImage();
  Image8->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[7],Image8->Picture->Bitmap);
  test[7]=1;
  test2[7]=test1[7];
  for (int i=0; i < 15; i++)
    sum8 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
        Image9->Picture->Bitmap->FreeImage();
  Image9->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[8],Image9->Picture->Bitmap);
  test[8]=1;
  test2[8]=test1[8];
  for (int i=0; i < 15; i++)
    sum9 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
        Image10->Picture->Bitmap->FreeImage();
  Image10->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[9],Image10->Picture->Bitmap);
  test[9]=1;
  test2[9]=test1[9];
  for (int i=0; i < 15; i++)
    sum10 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11Click(TObject *Sender)
{
        Image11->Picture->Bitmap->FreeImage();
  Image11->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[10],Image11->Picture->Bitmap);
  test[10]=1;
  test2[10]=test1[10];
  for (int i=0; i < 15; i++)
    sum11 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
        Image12->Picture->Bitmap->FreeImage();
  Image12->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[11],Image12->Picture->Bitmap);
  test[11]=1;
  test2[11]=test1[11];
  for (int i=0; i < 15; i++)
    sum12 += test[i];

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
        Image13->Picture->Bitmap->FreeImage();
  Image13->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[12],Image13->Picture->Bitmap);
  test[12]=1;
  test2[12]=test1[12];
  for (int i=0; i < 15; i++)
    sum13 += test[i];

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
        Image14->Picture->Bitmap->FreeImage();
  Image14->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[13],Image14->Picture->Bitmap);
  test[13]=1;
  test2[13]=test1[13];
  for (int i=0; i < 15; i++)
    sum14 += test[i];

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
        Image15->Picture->Bitmap->FreeImage();
  Image15->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[14],Image15->Picture->Bitmap);
  test[14]=1;
  test2[14]=test1[14];
  for (int i=0; i < 15; i++)
    sum15 += test[i];


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
        Image16->Picture->Bitmap->FreeImage();
  Image16->Picture->Bitmap = NULL;
  picts->GetBitmap(pairs[15],Image16->Picture->Bitmap);
  test2[15]=test1[15];
  test[15]=1;
  for (int i=0; i < 15; i++)
    sum16 += test[i];


}
//---------------------------------------------------------------------------



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


void __fastcall TForm1::Button3Click(TObject *Sender)
{
Form1->Close();

}
//---------------------------------------------------------------------------

