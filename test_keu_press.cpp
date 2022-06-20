// test_keu_press.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "key_press.h"
#include "combo.h"

int main()
{
    while (true) {





        /*0x52	R key
        0x5A	Z keyxzzzzzz
            0x43	C key*/


        if (GetAsyncKeyState(0x58)) {     //  0x51	Q key    58  -x
			

            int x = -50;
            int y = 0;


            
            mouse_event(MOUSEEVENTF_MOVE, x, y, 0, 0);
            Sleep(1000);


          /*  for (int i = 0; i < 15; i++)
            {
                
                Press_mouse_and_two_key('s', 'd', 17);
                

                Press_any_two_key('s', 'd', 17);
                Press_mouse_and_two_key('s', 'd', 17);
            }

            for (int a = 0; a < 15; a++)
            {

                Press_mouse_and_two_key('s', 'd', 17);


                Press_any_two_key('s', 'd', 17);
                Press_mouse_and_two_key('s', 'd', 17);
            }*/
          
            /*Press_any_key(' ', 51);
            Sleep(200);
            Click_right(17);*/
            
                /*SetCursorPos(200, 200);*/
                
            
           
            //ShowDesktop();
        }
		

	

		

            








    }

    return 0;
}


