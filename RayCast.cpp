//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USEFORM("..\..\Documents\- Facultad\4� A�o (2011)\Segundo Cuatrimestre\Procesamiento Digital de Im�genes\Final\Main.cpp", Form1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "PLSI";
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
