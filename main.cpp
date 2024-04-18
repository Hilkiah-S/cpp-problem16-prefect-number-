#include <iostream>

using namespace std;
int henry (int i, int j);
int main()
{
    cout << henry (1, 3)<< endl;
    return 0;
}
int henry (int i, int j) {
    int initial=6;
    int sum=0;
    int  indexPerfectNum=0;
    int perfectCout=0;
    int totalReturn=0;
  while(true){
    for(int f=1;f<initial;f++){
        if(initial%f==0){
            sum+=f;
        }
    }
    if(sum==initial){
      indexPerfectNum++;
      if(indexPerfectNum==i||indexPerfectNum==j){
            totalReturn+=sum;
      sum=0;
       perfectCout++;
      }else{
      sum=0;
      }
      if(perfectCout==2){
        return totalReturn;
      }
    }else{
    sum=0;
    }

 initial++;
  }

}


  /* int sum =0;
    int baseCase=6;
    int initializer=6;
    int matchesFound=0;
    int interation=1;
    int trackingNumber=0;
    while(baseCase!=-1){

    while(interation<baseCase){
            if(interation!=baseCase-1){
        if(baseCase%interation==0){
               sum+=interation;
        }}else{
        if(sum==baseCase){
            trackingNumber++;
        }
        }
    }
    if(trackingNumber==i||trackingNumber==j){
        matchesFound++;
    }
    if(matchesFound==2){
            baseCase==-1;
      return sum;
    }
    interation++;
   baseCase++;
}*/
