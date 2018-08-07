// Now we'd like to write swapEachWithNextLarger, which swaps each element with the next element which is larger than the element itself.

function swapEachWithNextLarger(arr) {
  for(let i=0; i<arr.length; i++){
    var current = arr[i];
    var swapIndex = i;
    for(let j=i+1; j<arr.length; j++){
      if(arr[j]>current){
        swapIndex = j;
        break;
      }
    }
    // swap
    if(swapIndex !== i){
      var temp = arr[i];
      arr[i] = arr[swapIndex];
      arr[swapIndex] = temp;
    }
  }  
  return arr;
}
