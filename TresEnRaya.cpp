#include <iostream>
#include <time.h>

int main (){
	int op, option;
	char mark = 254, side= '#';

	while (1){
		char turn, p1, p2, winer='N';
		bool x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0,
		c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0, validate=false;
		
		std::cout << "\n\n==================================================\n";
		std::cout << "================== Tres en raya ==================\n";
		std::cout << "==================================================\n\n";
		
		std::cout << "      1. ONE Vs ONE\n";
		std::cout << "      2. ONE Vs BOT\n";
		std::cout << "      3. Exit\n\n";
		std::cout << "  option:";
		std::cin>>option;
		
		//x1=0;x2=0;x3=0;x4=0;x5=0;x6=0;x7=0;x8=0;x9=0;c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
		
		if(option==1){
			std::string player_1, player_2;
			
			std::cout << "\n\n==================================================\n";
			std::cout << "================== Tres en raya ==================\n";
			std::cout << "==================================================\n\n";
			std::cout << "Enter name player 1:";
			std::cin>>player_1;
			
			do{
				std::cout << "Enter symbol player 1 (X,O):";
				std::cin>>p1;
			}while(p1!='X' && p1!='O');
			
			if (p1=='X') p2 = 'O';
			else p2 = 'X';
			
			std::cout << "Enter name player 2:";
			std::cin>>player_2;
			
			turn = p1;
			
			while (1){
				std::cout << "\n\n==================================================\n";
				std::cout << "================== Tres en raya ==================\n";
				std::cout << "==================================================\n\n";
				
				for (int i=1; i < 18; i++){
					for(int j=1; j < 18; j++){
						if (i%6==0){
							std::cout <<" "<< side <<" ";	
						}
						else if (j%6==0 && j!=0)
							std::cout <<side;
						
						else if (i==j && i < 6 && j < 6 && x1){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==6 && i < 6 && j < 6 && x1){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+6==j && i < 6 && j < 12 && x2){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==12 && i < 6 && j < 12 && x2){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+12==j && i < 6 && j < 18 && x3){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==18 && i < 6 && j < 18 && x3){
							std::cout <<" "<< mark <<" ";
						}
						else if (i-6==j && i < 12  && i > 6 && j < 6 && x4){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==12 && i < 12 && i > 6 && j < 6 && x4){
							std::cout <<" "<< mark <<" ";
						}
						else if (i==j && i < 12 && i>6 && j < 12 && x5){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==18 && i < 12 && i > 6 && j < 12 && x5){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+6==j && i < 12 && i > 6 && j < 18 && x6){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==24 && i < 12 && i > 6 && j < 18 && x6){
							std::cout <<" "<< mark <<" ";
						}
						else if (i-12==j && i < 18 && i > 12 && j < 6 && x7){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==18 && i < 18 && i > 12 && j < 6 && x7){
							std::cout <<" "<< mark <<" ";
						}
						else if (i-6==j && i < 18 && i > 12 && j < 12 && x8){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==24 && i < 18 && j < 12 && x8){
							std::cout <<" "<< mark <<" ";
						}
						else if (i==j && i < 18 && i>12 && j < 18 && x9){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==30 && i < 18 && i > 12 && j < 18 && x9){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==1 || j==1 || i==5 || j==5) && i < 6 && j < 6 && c1){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==1 || j==7 || i==5 || j==11) && i < 6 && j < 12 && j > 6 && c2){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==1 || j==13 || i==5 || j==17) && i < 6 && j < 18 && j > 12 && c3){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==7 || j==1 || i==11 || j==5) && i < 12 && i >6 && j < 6 && c4){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==7 || j==7 || i==11 || j==11) && i < 12 && i >6 && j < 12 && j > 6 && c5){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==7 || j==13 || i==11 || j==17) && i < 12 && i >6 && j > 12 && c6){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==13 || j==1 || i==17 || j==5) && i > 12 && j < 6 && c7){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==13 || j==7 || i==17 || j==11) && i > 12 && j < 12 && j > 6 && c8){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==13 || j==13 || i==17 || j==17) && i > 12 && j > 12 && c9){
							std::cout <<" "<< mark <<" ";
						}
						else
							std::cout << "   ";
					}
					std::cout<<std::endl;
				}
				
				std::cout<<std::endl;
				std::cout<<std::endl;
				
				if ((x1 || c1) && (x2 || c2) && (x3 || c3) && (x4 || c4) && (x5 || c5) && (x6 || c6) &&
				(x7 || c7) && (x8 || c8) && (x9 || c9)){
					std::cout << "==================================================\n";
					std::cout << "==================================================\n";
					std::cout << "===================== Empate =====================\n";
					std::cout << "==================================================\n";
					std::cout << "==================================================\n\n";
					break;
				}
				
				if ((x1 && x2 && x3) || (x4 && x5 && x6) || (x7 && x8 && x9) || (x1 && x4 && x7) || (x2 && x5 && x8) || 
				(x3 && x6 && x9) || (x1 && x5 && x9) || (x7 && x5 && x3)){
					winer = 'X';
				}
				
				if ((c1 && c2 && c3) || (c4 && c5 && c6) || (c7 && c8 && c9) || (c1 && c4 && c7) || (c2 && c5 && c8) || 
				(c3 && c6 && c9) || (c1 && c5 && c9) || (c7 && c5 && c3)){
					winer = 'O';
				}
				
				if (winer != 'N'){
					std::cout << "==================================================\n";
					std::cout << "==================================================\n";
					if (p1==winer)
						std::cout << "                  \""<<player_1 <<"\" WIN "<<"\n";
					else
						std::cout << "                  \""<<player_2 <<"\" WIN "<<"\n";
					std::cout << "==================================================\n";
					std::cout << "==================================================\n\n";
					break;
				}
				
				do{
					if (turn==p1)
						std::cout<<"Turn "<<player_1<<" with \""<<p1<<"\" (";
					else
						std::cout<<"Turn "<<player_2<<" with \""<<p2<<"\" (";
					
					if (!x1 && !c1) std::cout<<1<<",";
					if (!x2 && !c2) std::cout<<2<<",";
					if (!x3 && !c3) std::cout<<3<<",";
					if (!x4 && !c4) std::cout<<4<<",";
					if (!x5 && !c5) std::cout<<5<<",";
					if (!x6 && !c6) std::cout<<6<<",";
					if (!x7 && !c7) std::cout<<7<<",";
					if (!x8 && !c8) std::cout<<8<<",";
					if (!x9 && !c9) std::cout<<9;
					std::cout<<") :";
					std::cin>>op;
					
					validate = false;
					
					if (op == 1 && !x1 && !c1){
						if (turn=='X') x1=1;
						else c1=1;
					}
					else if (op == 2 && !x2 && !c2){
						if (turn=='X') x2=1;
						else c2=1;
					}
					else if (op == 3 && !x3 && !c3){
						if (turn=='X') x3=1;
						else c3=1;
					}
					else if (op == 4 && !x4 && !c4){
						if (turn=='X') x4=1;
						else c4=1;
					}
					else if (op == 5 && !x5 && !c5){
						if (turn=='X') x5=1;
						else c5=1;
					}
					else if (op == 6 && !x6 && !c6){
						if (turn=='X') x6=1;
						else c6=1;
					}
					else if (op == 7 && !x7 && !c7){
						if (turn=='X') x7=1;
						else c7=1;
					}
					else if (op == 8 && !x8 && !c8){
						if (turn=='X') x8=1;
						else c8=1;
					}
					else if (op == 9 && !x9 && !c9){
						if (turn=='X') x9=1;
						else c9=1;
					}
					else{
						validate = true;
					}
				}while(validate);
				
				if (turn == p1) turn = p2;
				else turn = p1;
				
				std::cout<<std::endl;

			}			
		}
		else if (option==2){

			std::cout << "\n\n==================================================\n";
			std::cout << "================== Tres en raya ==================\n";
			std::cout << "==================================================\n\n";
			
			do{
				std::cout << "Enter symbol player (X,O): ";
				std::cin>>p1;
			}while(p1!='X' && p1!='O');
			
			if (p1=='X') p2 = 'O';
			else p2 = 'X';
			
			turn = p1;
			
			while (1){
				std::cout << "\n\n==================================================\n";
				std::cout << "================== Tres en raya ==================\n";
				std::cout << "==================================================\n\n";
				
				for (int i=1; i < 18; i++){
					for(int j=1; j < 18; j++){
						if (i%6==0){
							std::cout <<" "<< side <<" ";	
						}
						else if (j%6==0 && j!=0)
							std::cout <<side;
						
						else if (i==j && i < 6 && j < 6 && x1){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==6 && i < 6 && j < 6 && x1){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+6==j && i < 6 && j < 12 && x2){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==12 && i < 6 && j < 12 && x2){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+12==j && i < 6 && j < 18 && x3){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==18 && i < 6 && j < 18 && x3){
							std::cout <<" "<< mark <<" ";
						}
						else if (i-6==j && i < 12  && i > 6 && j < 6 && x4){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==12 && i < 12 && i > 6 && j < 6 && x4){
							std::cout <<" "<< mark <<" ";
						}
						else if (i==j && i < 12 && i>6 && j < 12 && x5){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==18 && i < 12 && i > 6 && j < 12 && x5){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+6==j && i < 12 && i > 6 && j < 18 && x6){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==24 && i < 12 && i > 6 && j < 18 && x6){
							std::cout <<" "<< mark <<" ";
						}
						else if (i-12==j && i < 18 && i > 12 && j < 6 && x7){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==18 && i < 18 && i > 12 && j < 6 && x7){
							std::cout <<" "<< mark <<" ";
						}
						else if (i-6==j && i < 18 && i > 12 && j < 12 && x8){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==24 && i < 18 && j < 12 && x8){
							std::cout <<" "<< mark <<" ";
						}
						else if (i==j && i < 18 && i>12 && j < 18 && x9){
							std::cout <<" "<< mark <<" ";
						}
						else if (i+j==30 && i < 18 && i > 12 && j < 18 && x9){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==1 || j==1 || i==5 || j==5) && i < 6 && j < 6 && c1){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==1 || j==7 || i==5 || j==11) && i < 6 && j < 12 && j > 6 && c2){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==1 || j==13 || i==5 || j==17) && i < 6 && j < 18 && j > 12 && c3){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==7 || j==1 || i==11 || j==5) && i < 12 && i >6 && j < 6 && c4){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==7 || j==7 || i==11 || j==11) && i < 12 && i >6 && j < 12 && j > 6 && c5){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==7 || j==13 || i==11 || j==17) && i < 12 && i >6 && j > 12 && c6){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==13 || j==1 || i==17 || j==5) && i > 12 && j < 6 && c7){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==13 || j==7 || i==17 || j==11) && i > 12 && j < 12 && j > 6 && c8){
							std::cout <<" "<< mark <<" ";
						}
						else if ((i==13 || j==13 || i==17 || j==17) && i > 12 && j > 12 && c9){
							std::cout <<" "<< mark <<" ";
						}
						else
							std::cout << "   ";
					}
					std::cout<<std::endl;
				}
				
				std::cout<<std::endl;
				std::cout<<std::endl;
				
				if ((x1 || c1) && (x2 || c2) && (x3 || c3) && (x4 || c4) && (x5 || c5) && (x6 || c6) &&
				(x7 || c7) && (x8 || c8) && (x9 || c9)){
					std::cout << "==================================================\n";
					std::cout << "==================================================\n";
					std::cout << "===================== Empate =====================\n";
					std::cout << "==================================================\n";
					std::cout << "==================================================\n\n";
					break;
				}
				
				if ((x1 && x2 && x3) || (x4 && x5 && x6) || (x7 && x8 && x9) || (x1 && x4 && x7) || (x2 && x5 && x8) || 
				(x3 && x6 && x9) || (x1 && x5 && x9) || (x7 && x5 && x3)){
					winer = 'X';
				}
				
				if ((c1 && c2 && c3) || (c4 && c5 && c6) || (c7 && c8 && c9) || (c1 && c4 && c7) || (c2 && c5 && c8) || 
				(c3 && c6 && c9) || (c1 && c5 && c9) || (c7 && c5 && c3)){
					winer = 'O';
				}
				
				if (winer != 'N'){
					std::cout << "==================================================\n";
					std::cout << "==================================================\n";
					if (p1==winer)
						std::cout << "                 \"YOU WIN\" "<<"\n";
					else
						std::cout << "                 \"BOT WIN\" "<<"\n";
					std::cout << "==================================================\n";
					std::cout << "==================================================\n\n";
					break;
				}
				
				do{
					if (turn==p1){
						std::cout<<"You turn with \""<<p1<<"\" (";
					
						if (!x1 && !c1) std::cout<<1<<",";
						if (!x2 && !c2) std::cout<<2<<",";
						if (!x3 && !c3) std::cout<<3<<",";
						if (!x4 && !c4) std::cout<<4<<",";
						if (!x5 && !c5) std::cout<<5<<",";
						if (!x6 && !c6) std::cout<<6<<",";
						if (!x7 && !c7) std::cout<<7<<",";
						if (!x8 && !c8) std::cout<<8<<",";
						if (!x9 && !c9) std::cout<<9;
						std::cout<<") :";
						std::cin>>op;
					}
					else{
						srand(time(NULL));
						op = 1 + rand()%9;
					}
					
					validate = false;
					
					if (op == 1 && !x1 && !c1){
						if (turn=='X') x1=1;
						else c1=1;
					}
					else if (op == 2 && !x2 && !c2){
						if (turn=='X') x2=1;
						else c2=1;
					}
					else if (op == 3 && !x3 && !c3){
						if (turn=='X') x3=1;
						else c3=1;
					}
					else if (op == 4 && !x4 && !c4){
						if (turn=='X') x4=1;
						else c4=1;
					}
					else if (op == 5 && !x5 && !c5){
						if (turn=='X') x5=1;
						else c5=1;
					}
					else if (op == 6 && !x6 && !c6){
						if (turn=='X') x6=1;
						else c6=1;
					}
					else if (op == 7 && !x7 && !c7){
						if (turn=='X') x7=1;
						else c7=1;
					}
					else if (op == 8 && !x8 && !c8){
						if (turn=='X') x8=1;
						else c8=1;
					}
					else if (op == 9 && !x9 && !c9){
						if (turn=='X') x9=1;
						else c9=1;
					}
					else{
						validate = true;
						if (turn==p1){
							std::cout<<"\n Error, pls try again.\n\n";
							std::cout<<"\a";
						}
					}
				}while(validate);
				
				if (turn == p1) turn = p2;
				else turn = p1;
				
				std::cout<<std::endl;
			}	
			
		}
		else if (option==3){
			break;
		}
		else{
			std::cout << "\n\n  Doesnt exist this option.\n\n";
		}
	}

	return 0;
}