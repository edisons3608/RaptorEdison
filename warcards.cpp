#include <iostream>
#include <string>

using namespace std;
int main()
{
   ?? index;
   ?? ysuit;
   ?? count;
   ?? playerxsuit;
   ?? total;
   ?? playerxpts;
   ?? playerx;
   ?? playery;
   ?? randomindex;
   ?? playerypts;
   ?? var;
   ?? counting;
   ??[] possiblesuits = new ??[??+1];

   clear_console;
   playerxpts =0;
   playerypts =0;
   counting =0;
   while (!(playerxpts>25 || playerypts>25))
   {
      counting =counting+1;
      if (counting % 4==0)
      {
         cout << "----------------------------"+((char) 13)+"PlayerX has "+playerxpts+" points."+((char) 13)+"PlayerY has "+playerypts+" points."+((char) 13)+"----------------------------" << endl;      }
      else
      {
      }
      possiblesuits[1] = "Diamonds";
      possiblesuits[2] = "Clubs";
      possiblesuits[3] = "Hearts";
      possiblesuits[4] = "Spades";
      playerx =ceiling(random_generator.NextDouble()*13);
      playery =ceiling(13*random_generator.NextDouble());
      randomindex =ceiling(random_generator.NextDouble()*4);
      playerxsuit =possiblesuits(randomindex);
      index =ceiling(random_generator.NextDouble()*4);
      ysuit =possiblesuits(index);
      cout << "PlayerX: "+playerx+" of "+playerxsuit+((char) 13)+"PlayerY: "+playery+" of "+ysuit << endl;      if (playery<playerx)
      {
         cout << "Player X wins this round!"+((char) 13) << endl;         playerxpts =playerxpts+2;
      }
      else
      {
         if (playerx<playery)
         {
            cout << "Player Y wins this round!"+((char) 13) << endl;            playerypts =playerypts+2;
         }
         else
         {
            var =true;
            cout << ((char) 32) << endl;            cout << "War" << endl;            total =0;
            while (!(var==false))
            {
               count =0;
               while (!(count==3))
               {
                  possiblesuits[1] = "Diamonds";
                  possiblesuits[2] = "Clubs";
                  possiblesuits[3] = "Hearts";
                  possiblesuits[4] = "Spades";
                  playerx =ceiling(random_generator.NextDouble()*13);
                  playery =ceiling(13*random_generator.NextDouble());
                  randomindex =ceiling(random_generator.NextDouble()*4);
                  playerxsuit =possiblesuits(randomindex);
                  index =ceiling(random_generator.NextDouble()*4);
                  ysuit =possiblesuits(index);
                  cout << "PlayerX: "+playerx+" of "+playerxsuit+((char) 13)+"PlayerY: "+playery+" of "+ysuit << endl;                  cout << ((char) 32) << endl;                  count =count+1;
               }
               possiblesuits[1] = "Diamonds";
               possiblesuits[2] = "Clubs";
               possiblesuits[3] = "Hearts";
               possiblesuits[4] = "Spades";
               playerx =ceiling(random_generator.NextDouble()*13);
               playery =ceiling(13*random_generator.NextDouble());
               randomindex =ceiling(random_generator.NextDouble()*4);
               playerxsuit =possiblesuits(randomindex);
               index =ceiling(random_generator.NextDouble()*4);
               ysuit =possiblesuits(index);
               cout << "PlayerX: "+playerx+" of "+playerxsuit+((char) 13)+"PlayerY: "+playery+" of "+ysuit << endl;               total =total+10;
               if (playerx>playery)
               {
                  cout << "Player X wins this round!"+((char) 13) << endl;                  playerxpts =playerxpts+total;
                  var =false;
               }
               else
               {
                  if (playery>playerx)
                  {
                     cout << "Player Y wins this round"+((char) 13) << endl;                     playerypts =playerypts+total;
                     var =false;
                  }
                  else
                  {
                     cout << "WAR" << endl;                  }
               }
            }
         }
      }
   }
   cout << "Game Over" << endl;   cout << "PlayerX has "+playerxpts+" points." << endl;   cout << "PlayerY has "+playerypts+" points." << endl;
   return 0;
}
