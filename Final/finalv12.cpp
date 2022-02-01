#include <iostream>
#include <string>

using namespace std;
 void validMove (
       ?? placedArray;
       ??_Variable *valid;
       ??_Variable column)
{
   ?? indexy;
   ??[,] placedarray = new ??[??+1,??+1];

   indexY =0;
   valid =0;
   while (!(indexY==6))
   {
      if (placedArray(column,indexY+1)==1 || placedArray(column,indexY+1)==2)
      {
         valid =valid+1;
      }
      else
      {
      }
      indexY =indexY+1;
   }
}
 void gameOver (
       ?? placed;
       ??_Variable *over;
       ?? previousx;
       ?? previousy)
{
   ?? tieoutput;
   ?? vertoutput;
   ?? testingvalue;
   ?? diagse;
   ?? horzoutput;
   ?? diagne;

   testingValue =placed(previousx,previousy);
   horizontalCheck(placed,previousx,previousy,horzOutput);
   tieOutput =false;
   if (horzOutput==true)
   {
      over =true;
   }
   else
   {
      verticalCheck(placed,previousx,previousy,vertOutput);
      if (vertOutput==true)
      {
         over =true;
      }
      else
      {
         diagonalNE(placed,previousx,previousy,diagNE);
         if (diagNE==true)
         {
            over =true;
         }
         else
         {
            diagonalSE(placed,previousx,previousy,diagSE);
            if (diagSE==true)
            {
               over =true;
            }
            else
            {
               tie(placed,previousx,previousy,tieOutput);
               if (tieOutput==true)
               {
                  over =true;
               }
               else
               {
                  over =false;
               }
            }
         }
      }
   }
   if (over==true)
   {
      if (tieOutput==true)
      {
         draw_bitmap(load_bitmap("tie.bmp"),0,300,280,300);
      }
      else
      {
         if (testingValue==1)
         {
            draw_bitmap(load_bitmap("won.bmp"),0,300,280,300);
         }
         else
         {
            draw_bitmap(load_bitmap("lost.bmp"),0,300,280,300);
         }
      }
   }
   else
   {
   }
}
 void verticalCheck (
       ?? placed;
       ??_Variable x;
       ??_Variable y;
       ??_Variable *result)
{
   ?? inarow;
   ?? countingdown;
   ?? currentvalue;
   ?? countingup;
   ??[,] placed = new ??[??+1,??+1];

   currentValue =placed(x,y);
   countingUp =0;
   inARow =0;
   while (!(y+countingUp>6))
   {
      if (placed(x,y+countingUp)==currentValue)
      {
         inARow =inARow+1;
      }
      else
      {
         countingUp =10;
      }
      countingUp =countingUp+1;
   }
   if (inARow>=4)
   {
      result =true;
   }
   else
   {
      countingDown =1;
      while (!(y-countingDown<1))
      {
         if (placed(x,y-countingDown)==currentValue)
         {
            inARow =inARow+1;
         }
         else
         {
            countingDown =10;
         }
         countingDown =countingDown+1;
      }
      if (inARow>=4)
      {
         result =true;
      }
      else
      {
         result =false;
      }
   }
}
 void horizontalCheck (
       ?? placed;
       ??_Variable x;
       ??_Variable y;
       ??_Variable *result)
{
   ?? inarow;
   ?? countingright;
   ?? currentvalue;
   ?? countingleft;
   ??[,] placed = new ??[??+1,??+1];

   currentValue =placed(x,y);
   countingLeft =0;
   inARow =0;
   while (!(x-countingLeft<1))
   {
      if (placed(x-countingLeft,y)==currentValue)
      {
         inARow =inARow+1;
      }
      else
      {
         countingLeft =10;
      }
      countingLeft =countingLeft+1;
   }
   if (inARow>=4)
   {
      result =true;
   }
   else
   {
      countingRight =1;
      while (!(x+countingRight>7))
      {
         if (placed(x+countingRight,y)==currentValue)
         {
            inARow =inARow+1;
         }
         else
         {
            countingRight =10;
         }
         countingRight =countingRight+1;
      }
      if (inARow>=4)
      {
         result =true;
      }
      else
      {
         result =false;
      }
   }
}
 void diagonalNE (
       ?? placed;
       ??_Variable x;
       ??_Variable y;
       ??_Variable *result)
{
   ?? countingne;
   ?? inarow;
   ?? currentvalue;
   ?? countingsw;
   ??[,] placed = new ??[??+1,??+1];

   inARow =0;
   countingNE =0;
   currentValue =placed(x,y);
   while (!(x+countingNE>7 || y+countingNE>6))
   {
      if (placed(x+countingNE,y+countingNE)==currentValue)
      {
         inARow =inARow+1;
      }
      else
      {
         countingNE =10;
      }
      countingNE =countingNE+1;
   }
   if (inARow>=4)
   {
      result =true;
   }
   else
   {
      countingSW =1;
      while (!(x-countingSW<1 || y-countingSW<1))
      {
         if (placed(x-countingSW,y-countingSW)==currentValue)
         {
            inARow =inARow+1;
         }
         else
         {
            countingSW =10;
         }
         countingSW =countingSW+1;
      }
      if (inARow>=4)
      {
         result =true;
      }
      else
      {
         result =false;
      }
   }
}
 void diagonalSE (
       ?? placed;
       ??_Variable x;
       ??_Variable y;
       ??_Variable *result)
{
   ?? inarow;
   ?? currentvalue;
   ?? countingnw;
   ?? countingse;
   ??[,] placed = new ??[??+1,??+1];

   inARow =0;
   countingSE =0;
   currentValue =placed(x,y);
   while (!(x+countingSE>7 || y-countingSE<1))
   {
      if (placed(x+countingSE,y-countingSE)==currentValue)
      {
         inARow =inARow+1;
      }
      else
      {
         countingSE =10;
      }
      countingSE =countingSE+1;
   }
   if (inARow>=4)
   {
      result =true;
   }
   else
   {
      countingNW =1;
      while (!(x-countingNW<1 || y+countingNW>6))
      {
         if (placed(x-countingNW,y+countingNW)==currentValue)
         {
            inARow =inARow+1;
         }
         else
         {
            countingNW =10;
         }
         countingNW =countingNW+1;
      }
      if (inARow>=4)
      {
         result =true;
      }
      else
      {
         result =false;
      }
   }
}
 void tie (
       ?? placed;
       ?? x;
       ?? y;
       ??_Variable *result)
{
   ?? xloop;
   ?? yloop;
   ?? numopenspaces;
   ??[,] placed = new ??[??+1,??+1];

   numOpenSpaces =0;
   xloop =0;
   while (!(xloop==7))
   {
      yloop =0;
      while (!(yloop==6))
      {
         if (placed(xloop+1,yloop+1)==0)
         {
            numOpenSpaces =numOpenSpaces+1;
         }
         else
         {
         }
         yloop =yloop+1;
      }
      xloop =xloop+1;
   }
   if (numOpenSpaces==0)
   {
      result =true;
   }
   else
   {
      result =false;
   }
}
int main()
{
   ?? yindex;
   ?? choice;
   ?? turn;
   ?? xindex;
   ?? xloop;
   ?? valid;
   ?? x;
   ?? y;
   ?? xrand;
   ?? game;
   ??[,] placed = new ??[??+1,??+1];

   open_graph_window(280,300);
   draw_bitmap(load_bitmap("instruct.bmp"),0,300,280,300);
   wait_for_key(;
   clear_window(light_gray);
   xloop =0;
   while (!(xloop==7))
   {
      draw_line(0,xloop*40,280,xloop*40,black);
      if (xloop<7)
      {
         draw_line(xloop*40,0,xloop*40,240,black);
      }
      else
      {
      }
      xloop =xloop+1;
   }
   xIndex =0;
   while (!(xIndex==7))
   {
      yIndex =0;
      while (!(yIndex==6))
      {
         placed[xIndex+1,yIndex+1] = 0;
         yIndex =yIndex+1;
      }
      xIndex =xIndex+1;
   }
   game =false;
   turn =floor(random_generator.NextDouble()*2);
   while (!(game==true))
   {
      if (turn==1)
      {
         while (1)
         {
            wait_for_mouse_button(left_button);
            x =Get_Click_X;
            y =Get_Click_Y;
            if (x<40)
            {
               choice =1;
            }
            else
            {
               if (x<80)
               {
                  choice =2;
               }
               else
               {
                  if (x<120)
                  {
                     choice =3;
                  }
                  else
                  {
                     if (x<160)
                     {
                        choice =4;
                     }
                     else
                     {
                        if (x<200)
                        {
                           choice =5;
                        }
                        else
                        {
                           if (x<240)
                           {
                              choice =6;
                           }
                           else
                           {
                              if (x<280)
                              {
                                 choice =7;
                              }
                              else
                              {
                              }
                           }
                        }
                     }
                  }
               }
            }
            validMove(placed,valid,choice);
            if (valid!=6)) break;
            wait_for_mouse_button(left_button);
            x =Get_Click_X;
            y =Get_Click_Y;
            if (x<40)
            {
               choice =1;
            }
            else
            {
               if (x<80)
               {
                  choice =2;
               }
               else
               {
                  if (x<120)
                  {
                     choice =3;
                  }
                  else
                  {
                     if (x<160)
                     {
                        choice =4;
                     }
                     else
                     {
                        if (x<200)
                        {
                           choice =5;
                        }
                        else
                        {
                           if (x<240)
                           {
                              choice =6;
                           }
                           else
                           {
                              if (x<280)
                              {
                                 choice =7;
                              }
                              else
                              {
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
         draw_circle(choice*40-20,valid*40+20.2,18,yellow,yes);
         placed[choice,valid+1] = 1;
         gameOver(placed,game,choice,valid+1);
         turn =0;
      }
      else
      {
         xrand =floor(random_generator.NextDouble()*7);
         while (1)
         {
            validMove(placed,valid,xrand+1);
            if (valid!=6)) break;
            xrand =floor(random_generator.NextDouble()*7);
         }
         draw_circle(xrand*40+20,valid*40+20,18,red,yes);
         placed[xrand+1,valid+1] = 2;
         gameOver(placed,game,xrand+1,valid+1);
         turn =1;
      }
   }

   return 0;
}
