
#include "Window.h"
#include "GUI.h"
#define _AFXDLL

void TestOnLButtonDown(int x, int y)
{
    SCREEN->SET_DRAW_COLOR(RGB(0,0,200));
    SCREEN->CIRCLE(x,y,20);
    Print("Left Click");
}
void TestOnRButtonDown(int x, int y)
{
    Print("Right Click");
}
void TestOnLButtonUp(int x, int y)
{
    Print("Left up");
}

void TestOnRButtonUp(int x, int y)
{
    Print("Right up");
}


void TestOnKeyDown(Uint16 Keycode, Uint16 ScanCode, Uint16 Modifier , Uint8 rep)
{
    Print("Key Down Button");
}
void TestOnKeyUp(Uint16 Keycode, Uint16 ScanCode, Uint16 Modifier )      
{
    Print("Key Up Button");
}
void TestOnMButtonDown(int x, int y)
{
    Print("Middle Mouse");
}
void TestOnMButtonUp(int x, int y)                           
{
    Print("Middle Mouse");
}

void TestButtonCallBackClick(int x, int y)
{
    Print("Click Button");
}



void TestGUIButton(int x, int y)
{
    Print("Clicked A Button");
}
void TestGUIButton2(int x, int y)
{
    Print("Clicked B Button");
}

void main(){
    
    Window *MainWindow = new Window(0,0,640,460," GUI Test");


//-------------------------------------------- TEST WINDOW CALLBACKS------------------------------------------------------------
    MainWindow->CallBacks.SetOnLButtonDown(TestOnLButtonDown);
    MainWindow->CallBacks.SetOnLButtonUp(TestOnLButtonUp);
    MainWindow->CallBacks.SetOnRButtonDown(TestOnRButtonDown);
    MainWindow->CallBacks.SetOnRButtonUp(TestOnRButtonUp);
    MainWindow->CallBacks.SetOnKeyDown(TestOnKeyDown);
    MainWindow->CallBacks.SetOnKeyUp(TestOnKeyUp);

//-------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------- TEST GUI CREATION ---------------------------------------------------------------
//Widgit  Control = Widgit( MainWindow, "Button", "Mine" , Rect(100,100,100,100), NULL);
//Widgit *Button2 = Control.MakeButton(Rect(0,0, 100,120), "Button2", NULL);
//Control.CallBacks.SetOnLButtonDown(TestGUIButton);
//Button2->CallBacks.SetOnLButtonDown(TestGUIButton);

MainWindow->thisGUI = new GUI(MainWindow);
MainWindow->thisGUI->Begin();
    MainWindow->thisGUI->Button();
    MainWindow->thisGUI->Position(200, 200); 
    MainWindow->thisGUI->Size    (100, 50);  
    MainWindow->thisGUI->Text    ("Hello");
    MainWindow->thisGUI->LeftMouseDown(TestGUIButton);
    MainWindow->thisGUI->Push();

    MainWindow->thisGUI->RadioButton();
    MainWindow->thisGUI->Position(20, 20); 
    MainWindow->thisGUI->Size    (100, 50);  
    MainWindow->thisGUI->Text    ("GoodBye");
    MainWindow->thisGUI->LeftMouseDown(TestGUIButton2);
    MainWindow->thisGUI->Push();

    MainWindow->thisGUI->TextBox();
    MainWindow->thisGUI->Sunkin();
    MainWindow->thisGUI->HSCrollBar();
    MainWindow->thisGUI->VScrollBar();
    MainWindow->thisGUI->Style( ES_MULTILINE | ES_AUTOVSCROLL | ES_AUTOHSCROLL);
    MainWindow->thisGUI->Position(180, 20); 
    MainWindow->thisGUI->Size    (300, 350);  
    MainWindow->thisGUI->Text    ("GoodBye");
    MainWindow->thisGUI->LeftMouseDown(TestGUIButton2);
    MainWindow->thisGUI->Push();
MainWindow->thisGUI->End();




while(MainWindow->LOOP_GAME())
    {
        MainWindow->CLS();
        MainWindow->SYNC();
    }

    delete (MainWindow);
}
// This makes it so you define your own Callbacks like you would do with GLFW
// You just set it up and it handles the messages from there and the while loop is your code part nothing else need be done. 




