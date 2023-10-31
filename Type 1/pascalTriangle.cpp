
/*sample input
4

sample output
       1  
      1  1
     1  2  1
    1  3  3  1
   1  4  6  4  1

*/
#include<iostream>
using namespace std;
int main(){
    int num ;
    int rem =1 ;
    cin>>num ;
   
    for(int i= 0;i<num;i++){
        for(int firstRow = i ; firstRow<=num;++firstRow){
               cout<<" "; 
        }
         for(int j =  0 ; j<=i;++j){

           if(j==0 || i==0){ 

           rem = 1;
           }
           else{
            rem = rem*(i-j+1)/j;
           }
           cout<<rem<<"  ";
        
         }
          /*for(int thirdRow = 2 ; thirdRow<=i;++thirdRow){
            
            cout<<i;
         }*/
        
        
        cout<<endl;
       
        
    }
}
