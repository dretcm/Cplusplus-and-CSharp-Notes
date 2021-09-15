#include <iostream>

int main (){
	int width = 5, op;
	char mark = 254, side= '#', turn, x='X', o='O';
	bool x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0,
	c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0, validate=false;
	turn = x;
	
	while (1){
		system("cls");
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
			std::cout << "==================================================\n";
			std::cout << "==================================================\n";
			std::cout << "==================== \"X\" WIN =====================\n";
			std::cout << "==================================================\n";
			std::cout << "==================================================\n\n";
			break;
		}
		if ((c1 && c2 && c3) || (c4 && c5 && c6) || (c7 && c8 && c9) || (c1 && c4 && c7) || (c2 && c5 && c8) || 
		(c3 && c6 && c9) || (c1 && c5 && c9) || (c7 && c5 && c3)){
			std::cout << "==================================================\n";
			std::cout << "==================================================\n";
			std::cout << "==================== \"O\" WIN =====================\n";
			std::cout << "==================================================\n";
			std::cout << "==================================================\n\n";
			break;
		}
		
		std::cout<<"turn \""<<turn<<"\" (";
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
		
		
		do{
			validate = false;
			if (op == 1 && !x1 && !c1){
				if (turn==x) x1=1;
				else c1=1;
			}
			else if (op == 2 && !x2 && !c2){
				if (turn==x) x2=1;
				else c2=1;
			}
			else if (op == 3 && !x3 && !c3){
				if (turn==x) x3=1;
				else c3=1;
			}
			else if (op == 4 && !x4 && !c4){
				if (turn==x) x4=1;
				else c4=1;
			}
			else if (op == 5 && !x5 && !c5){
				if (turn==x) x5=1;
				else c5=1;
			}
			else if (op == 6 && !x6 && !c6){
				if (turn==x) x6=1;
				else c6=1;
			}
			else if (op == 7 && !x7 && !c7){
				if (turn==x) x7=1;
				else c7=1;
			}
			else if (op == 8 && !x8 && !c8){
				if (turn==x) x8=1;
				else c8=1;
			}
			else if (op == 9 && !x9 && !c9){
				if (turn==x) x9=1;
				else c9=1;
			}
			else{
				std::cout<<"\n Error, pls try again.\n\n";
				std::cout<<"\a";
				std::cout<<"turn \" "<<turn<<" \" (";
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
				validate = true;
			}
		}while(validate);
		
		if (turn == x) turn = o;
		else turn = x;
		
		std::cout<<std::endl;

	}
	return 0;
}