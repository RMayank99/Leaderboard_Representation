#include<iostream>
#include<vector>
#include<list>
#include<stdlib.h>
#include<conio.h>
#include<algorithm>
#include<queue>
using namespace std;
list<pair<int,pair<string,pair<int,int>>>> l;
vector<pair<int,string>>v1,v2;
priority_queue<int> pq;
int points,matches_played,matches_won,player_runs,player_wickets;
string team_name,player_name;

void input_data_teams(){
    system("cls");
    system("COLOR F5");
    cout<<endl<<endl<<"                                         ENTER TEAMS AND THEIR STATS"<<endl;
    cout<<"**************************************************************************************************************"<<endl<<endl;
     for(int i=0;i<8;i++){
    cout<<"              Enter name for TEAM "<<i+1<<"  :->  ";cin>>team_name;
    cout<<endl<<"              Enter matches played and matches won by "<<team_name<<"  :->  ";cin>>matches_played>>matches_won;
    cout<<endl<<"**************************************************************************************************************"<<endl<<endl;
    points = matches_won*2;

    l.push_back(make_pair(points,make_pair(team_name,make_pair(matches_played,matches_won))));

   }

}

void input_data_batsmens(){
         system("cls");
         system("COLOR F5");
         cout<<endl<<endl<<"                                         ENTER BATSMEN AND THEIR STATS"<<endl;
         cout<<"**************************************************************************************************************"<<endl<<endl;
         for(int i=0;i<5;i++){
           cout<<"              Enter BATSMAN "<<i+1<<" name  :->  ";cin>>player_name;
           cout<<"              Enter RUNS scored by "<<player_name<<"  :->  ";cin>>player_runs;
           cout<<endl<<"**************************************************************************************************************"<<endl<<endl;
           v1.push_back(make_pair(player_runs,player_name));
         }


                /*sort(v1.begin(),v1.end());
                reverse(v1.begin(),v1.end());

         for(auto p:v1){
                cout<<p.second<<"    "<<p.first<<endl;
         }*/
}

void input_data_bowlers(){
          system("cls");
          system("COLOR F5");
          cout<<"                                         ENTER BOWLERS AND THEIR STATS"<<endl;
          cout<<"**************************************************************************************************************"<<endl<<endl;
          for(int i=0;i<5;i++){
             cout<<"               Enter BOWLER name ";cin>>player_name;
             cout<<"               Enter WICKETS taken by "<<player_name<<"  :->  ";cin>>player_wickets;
             cout<<endl<<"**************************************************************************************************************"<<endl<<endl;
             v2.push_back(make_pair(player_wickets,player_name));
         }


               /*sort(v2.begin(),v2.end());
               reverse(v2.begin(),v2.end());

          for(auto p:v2){
               cout<<p.second<<"    "<<p.first<<endl;
         }*/
}

void input_data_sixes(){

           system("cls");
           system("COLOR F5");
           cout<<"                                         ENTER SIXES' DISTANCES "<<endl;
           cout<<"**************************************************************************************************************"<<endl<<endl;
           int x;
           cout<<"-----------------------------------------Enter data for 5 longest sixes-------------------------------------- "<<endl<<endl;
               for(int i=0;i<5;i++){
                   cout<<"           For six number "<<i+1<<" :->  ";cin>>x;
                   cout<<endl<<"**************************************************************************************************************"<<endl<<endl;
                   pq.push(x);
               }
}

void view_table(){

        system("cls");
        system("COLOR F0");
        l.sort();
        l.reverse();

        int i=1;

       cout<<endl<<"**************************************************************************************************************"<<endl;
       cout<<"                                            POINTS  TABLE "<<endl;
       cout<<"**************************************************************************************************************"<<endl<<endl;
       cout<<"       TEAM NAME    |    MATCHES PLAYED    |    MATCHES WON    |    MATCHES LOST    |    POINTS "<<endl;
       cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
        for(auto k : l){
                cout<<"     "<<i<<" . "<<k.second.first<<"                 "<<k.second.second.first<<"                     "<<k.second.second.second<<"                  "<<k.second.second.first - k.second.second.second<<"                  "<<k.first<<endl;
                cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
              i++;
        }
}

void view_orange_cap(){

        system("cls");
        system("COLOR F0");

           sort(v1.begin(),v1.end());
                reverse(v1.begin(),v1.end());

        cout<<endl<<"**************************************************************************************************************"<<endl;
        cout<<"                                         HIGHEST RUNS SCORERS  "<<endl;
        cout<<"**************************************************************************************************************"<<endl<<endl;
        cout<<endl<<"                 Batsman's Name                    |                         RUNS SCORED"<<endl;
        int i=1;

          for(auto p:v1){
               cout<<endl<<"                 "<<i<<" . "<<p.second<<"                                                         "<<p.first<<endl;
               i++;
         }

}

void view_purple_cap(){

        system("cls");
        system("COLOR F0");

          sort(v2.begin(),v2.end());
               reverse(v2.begin(),v2.end());

        cout<<endl<<"**************************************************************************************************************"<<endl;
        cout<<"                                         HIGHEST WICKET TAKERS  "<<endl;
        cout<<"**************************************************************************************************************"<<endl<<endl;
        cout<<endl<<"                 Bowlers's Name                    |                         Wickets Taken"<<endl;
        int i=1;

          for(auto p:v2){
               cout<<endl<<"                 "<<i<<" . "<<p.second<<"                                                         "<<p.first<<endl;
               i++;
         }

}

void view_sixes_dist(){

        system("cls");
        system("COLOR F0");

        cout<<endl<<"**************************************************************************************************************"<<endl;
        cout<<"                                         MONSTROUS SIX DISTANCES  "<<endl;
        cout<<"**************************************************************************************************************"<<endl<<endl;
        int i=1;
        while(!pq.empty()){

           cout<<"                                            "<<i<<" . "<<pq.top()<<" meters"<<endl;
           cout<<"                                           ---------------"<<endl;
           pq.pop();
           i++;
       }


}

int main()
{
    /*cout<<"-----------------------------------------------------------------------------------------------"<<endl;
    cout<<"                           WELCOME TO MENU OF DREAM 11 IPL 2020   "<<endl;
    cout<<"-----------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<" 1. ADMIN "<<endl;
    cout<<" 2. VIEWER "<<endl;*/
    int choice1,choice2,choice3;
    char ans;
    do{
            system("cls");
            system("COLOR 87");
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<"                           WELCOME TO MAIN MENU OF DREAM 11 IPL 2020   "<<endl;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<"                                        1. ADMIN "<<endl<<endl;
            cout<<"                                        2. VIEWER "<<endl<<endl;
            cout<<"                                        3. EXIT "<<endl<<endl;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            cout<<endl<<"      Enter your choice for MAIN MENU : ";
            cin>>choice1;

            switch(choice1){

            case 1 : {

                       do{
                            system("cls");
                            system("COLOR F2");
                       cout<<"-----------------------------------------------------------------------------------------------"<<endl;
                       cout<<"                           WELCOME TO ADMINISTRATOR BLOCK OF DREAM 11 IPL 2020   "<<endl;
                       cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
                       cout<<"                                       1. ENTER TEAMS AND THEIR STATS "<<endl<<endl;
                       cout<<"                                       2. ENTER BATSMENS STATS "<<endl<<endl;
                       cout<<"                                       3. ENTER BOWLERS STATS "<<endl<<endl;
                       cout<<"                                       4. ENTER LONGEST DISTANCES FOR SIXES "<<endl<<endl;
                       cout<<"                                       5. GO BACK TO MAIN MENU "<<endl<<endl;
                       cout<<"-----------------------------------------------------------------------------------------------"<<endl;
                       cout<<endl<<endl<<"        Enter your choice for ADMIN BLOCK : ";
                       cin>>choice2;
                       switch(choice2){
                          case 1 : { input_data_teams();break;  }
                          case 2 : { input_data_batsmens();break;}
                          case 3 : { input_data_bowlers();break;}
                          case 4 : { input_data_sixes();break;}
                        }
                     }while(choice2!=5);
                     break;

                   }
            case 2 : {

                       do{
                            system("cls");
                            system("COLOR B0");
                        cout<<"-----------------------------------------------------------------------------------------------"<<endl;
                        cout<<"                           WELCOME TO VIEWER BLOCK OF DREAM 11 IPL 2020   "<<endl;
                        cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
                        cout<<"                                     1. VIEW POINTS TABLE "<<endl;
                        cout<<"                                     2. VIEW ORANGE CAP HOLDER RACE "<<endl;
                        cout<<"                                     3. VIEW PURPLE CAP HOLDER RACE "<<endl;
                        cout<<"                                     4. VIEW HUMONGOUS SIXES DISTANCES "<<endl;
                        cout<<"                                     5. GO BACK TO MAIN MENU "<<endl;
                        cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
                        cout<<" Enter your choice for VIEWER BLOCK : ";
                        cin>>choice3;
                        switch(choice3){
                        case 1 : {view_table();getch();break;}
                        case 2 : {view_orange_cap();getch();break;}
                        case 3 : {view_purple_cap();getch();break;}
                        case 4 : {view_sixes_dist();getch();break;}
                        }
                       }while(choice3!=5);
                       break;

                     }

            }

    }while(choice1!=3);

     return 0;
}

