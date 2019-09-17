# include <iostream>
# include <time.h> 
# include <stdlib.h> 
#include <stdbool.h>
using namespace std;

struct Total{
  int num;
  bool isuse = false;
};


bool alltrue ( Total one[10] ){
  bool ans = false;
  bool temp = false;
  int count = 0;
  // cout << one[0].isuse;
  while ( count < 10 ){
  	temp = one[count].isuse;
  	if ( temp == true )
  	  ;
  	else
  	  ans = true;
  	  
  	count = count+1;
  	
  }
  
  return ans;
  
}

int findfalse( Total one[10] ) {
  int temp = 0;
  while ( temp < 10 ){
  	if ( one[temp].isuse == false )
  	  return temp;
  	else
  	  ;
  	  
  	temp = temp+1;
  }
  
  return 10;

}


void order ( Total one[10], int nowstac, int totalstac ) {
  int temp = 0;
  while ( alltrue ( one ) ) {
  	temp = findfalse( one );
  	one[temp].isuse = true;
	// printf("%d", one[temp].num );
    // cout << "shit2";
	cout << one[temp].num;
	if( nowstac < totalstac ) {
      order ( one, nowstac+1, totalstac ) ;
    }
    else if( nowstac == totalstac )
       cout << endl; // printf( "\n" ); 
    else
	  ; 
  }
}


int main() {
  int totalstac = 0;
  struct Total one[10];
  one[0].num = 0;
  one[1].num = 1;
  one[2].num = 2;
  one[3].num = 3;
  one[4].num = 4;
  one[5].num = 5;
  one[6].num = 6;
  one[7].num = 7;
  one[8].num = 8;
  one[9].num = 9;
  one[10].num = 99999;
  // scanf( "%d", &totalstac );
  cin >> totalstac;
  order ( one, 1, totalstac );
  
  
  
}
