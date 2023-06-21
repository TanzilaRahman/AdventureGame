// This a Text based fun Adventure game run on Command Line/Terminal where players gets to choose their own adventure and see if they survive in the wild or not!
#include <iostream>
#include <string>
using namespace std;

void welcome();
void invalid();

int main(){

    string name, q1, q2,q3, q6, q7, q8;
    int q4;
    char q5, key;  
    int score = 0; 

    cout<<"What's your name?\n";
    cin>>name;
    cout<<"\nWelcome to the adventure game "<<name<<"! Let's begin."<<endl<<endl;

    welcome();
    cin>>key;

    cout<<"\nYou are lost in the wild, and there's two paths ahead of you. Right and Left. Choose by typing (right/left) in lowercase."<<endl;
    cin>>q1;
    cout<<endl<<endl;

    if(q1 == "right"){
        //right begins
        score+=100; //level 1
        cout<<"You keep walking to the right, and now there's a river ahead of you. Do you swim across the river or walk around it? choose one by typing (walk/swim) lowercase."<<endl;
        cin>>q2;
        cout<<endl<<endl;
        if(q2 == "swim"){
            score+=200;//level 2
            cout<<"You start swimming across the river and get attacked by an alligator."<<endl;
        }
        else if(q2 == "walk"){
            score+=200;//level 2
            cout<<"You keep walking and now there's a house on your left. Do you go inside the house or keep walking? choose by typing (house/walk) in lowercase."<<endl;
            cin>>q3;
            cout<<endl<<endl;
            if(q3 == "house"){
                score+=1300; //level 3 + superior choice (1000)
                cout<<"You are now inside the house"<<endl;
                cout<<"There's two big box on a huge table labelled box 1 and box 2, you open one of them. Which one? type (1 or 2)."<<endl;
                cin>>q4;
                cout<<endl<<endl;
                if(q4 == 2){
                    score+=1400; //level 4  + superior choice (1000) 
                    score+=1000; //Win = 1000 points
                    cout<<"Congratulations! it's a treasure box with diamonds and gold coins! You also find a map that will lead you to your home."<<endl;
                }
                else if(q4 == 1){
                    score+=400; //level 4
                    cout<<"OH NO! The box contains poisonous gas and now it's into the atmosphere around you. Unfortunately you die."<<endl;
                }
                else {
                    invalid();
                }
            }
            else if(q3 == "walk"){
                score+=300; //level 3 
                cout<<"You ignore the house and keep walking"<<endl;
                cout<<"Suddenly there's a bear approaching your way! What do you do? climb up the tree next to you (c) or play dead (d)? choose by typing (c/d)."<<endl;
                cin>>q5;
                cout<<endl<<endl;
                if(q5 == 'c'){
                    score+=1400;//level 4 + superior choice (1000)
                    score +=1000;//win
                    cout<<"You climb up the tree to save youself from the bear's attack."<<endl;
                    cout<<"Good Job! You survive and complete the obstacles of the game."<<endl;
                }
                else if (q5 == 'd'){
                    score +=400; //level 4
                    cout<<"You try to play dead but the bear still attacks you and you die!"<<endl;
                }
                else {
                    invalid();
                }
            }
        }
        else {
            invalid();
        }
    //right ends
    }

    else if(q1 == "left"){
        //left begins
        score +=100; //level 1
        cout<<"You keep walking to the left and there's two doors ahead of you. You either open Door 1, Door 2 or keep walking. type(1/2/walk) in lowercase."<<endl;
        cin>>q6;
        cout<<endl<<endl;
        if(q6 == "1"){
            score +=1200; //level 2 + superior choice 
            cout<<"You decide to open door 1. There's a Red box and a Black box, which one do you open? type(red/black) in lowercase."<<endl;
            cin>>q7;
            cout<<endl<<endl;
            
            if(q7 == "red"){
                score+=300; //level 3; 
                cout<<"You decide to open the red box. You release a poisonous gas and end up dead."<<endl;
            }
            else if(q7 == "black"){
                score+=1300; //level 3 + superior choice;
                cout<<"You decide to open the black box. There's two items inside the box (a lighter and a key) and you decide to pick one. type(lighter/key) in lowercase."<<endl;
                cin>>q8;
                cout<<endl<<endl;
                cout<<"now you take the "<<q8<<", exit the door and keep walking..."<<endl;
                cout<<"You spot a road slightly on your left and there's a car!"<<endl;
                cout<<"type any alphabet on the keyboard and press ENTER to continue"<<endl;
                cin>>key;
                cout<<endl<<endl;

                if(q8 == "key"){
                    score+=1400; //level 4 + superior choice; 
                    score +=1000; //win
                    cout<<"You made a smart choice! You use the key to unlock and start the car and finally able to go home."<<endl;
                    cout<<"Congratualtions! You survived!"<<endl;
                }
                else if(q8 == "lighter"){
                    score +=400; //level 4;
                    cout<<"You are unable to unlock and use the car since you don't have the key and so you decide to keep walking."<<endl;
                    cout<<"Unfortunately you die of dehydration!"<<endl;
                }
                else {
                    invalid();
                }
            }
        }
        else if(q6 == "2"){
            score+=200; //level 2
            cout<<"You decide to open door 2. OH NO! you opened the door and now there's thousand of snakes attacking you! You die."<<endl;
        }
        else if(q6 == "walk"){
            score+=200; //level 2
            cout<<"You keep walking and see a road ahead and a car parked. You don't have the keys to use or unlock the car so you keep walking..."<<endl;
            cout<<"Unfortunately you die of dehydration!"<<endl;
        }
        else {
            invalid();
        }
        //left ends
    }
    else {
        invalid();
    }

    cout<<"Your Score is "<<score<<" points."<<endl;
    cout<<"Game over! Thank you for trying "<<name<<"!"<<endl;

    return 0;

}



void welcome(){
    cout<<"                                                                                                  "<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"^    Please read the following directions of the game:                                           ^"<<endl;
    cout<<"^    1.You will be asked to make choices througout the game thus, choosing your own adventure!   ^"<<endl;
    cout<<"^    2.Once you make a choice, type it in lowercase and hit ENTER to move on to the next parts   ^"<<endl;
    cout<<"^    Good Luck! type any alphabet on the Keyboard and press ENTER to continue...                 ^"<<endl; 
    cout<<"^                                                                                                ^"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"                                                                                                  "<<endl;

}
        
void invalid(){
    cout<<"Invalid Input"<<endl;
}
