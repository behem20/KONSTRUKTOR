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
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{

        Image1->Left=8;
        Image1->Top=8;
        Image1->Width=105;
        Image1->Height=105;
        Image1->Picture->LoadFromFile("C:/pictures/green.bmp");
        //Image1->Picture->SaveToFile("C:/pictures/savegreen.bmp");



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{
        Image2->Left=128;
        Image2->Top=8;
        Image2->Width=105;
        Image2->Height=105;
        Image2->Picture->LoadFromFile("C:/pictures/green.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
        Image3->Left=248;
        Image3->Top=8;
        Image3->Width=105;
        Image3->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
        Image4->Left=368;
        Image4->Top=8;
        Image4->Width=105;
        Image4->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
        Image5->Left=8;
        Image5->Top=120;
        Image5->Width=105;
        Image5->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
        Image6->Left=128;
        Image6->Top=120;
        Image6->Width=105;
        Image6->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
        Image7->Left=248;
        Image7->Top=120;
        Image7->Width=105;
        Image7->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
        Image8->Left=368;
        Image8->Top=120;
        Image8->Width=105;
        Image8->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
        Image9->Left=8;
        Image9->Top=240;
        Image9->Width=105;
        Image9->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
        Image10->Left=128;
        Image10->Top=240;
        Image10->Width=105;
        Image10->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11Click(TObject *Sender)
{
        Image11->Left=248;
        Image11->Top=240;
        Image11->Width=105;
        Image11->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
        Image12->Left=368;
        Image12->Top=240;
        Image12->Width=105;
        Image12->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
        Image13->Left=8;
        Image13->Top=352;
        Image13->Width=105;
        Image13->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
        Image14->Left=128;
        Image14->Top=352;
        Image14->Width=105;
        Image14->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
        Image15->Left=248;
        Image15->Top=352;
        Image15->Width=105;
        Image15->Height=105;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
        Image16->Left=368;
        Image16->Top=352;
        Image16->Width=105;
        Image16->Height=105;
}
//---------------------------------------------------------------------------

