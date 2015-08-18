int* bubbleSort(int* N, int len){
  int i,j;

  for(i=0; i<len; i++){
    for(j=len-1; j>i; j--){
      if(N[j] < N[j-1]){
        temp = N[j];
        N[j] = N[j-1];
        N[j-1] = temp;
      }
    }
  }

  return N;
}
