// Write a function that takes an array of numbers, and filters out any numbers which are exactly 2 times another number in the array

function filterDoubles(arr) {
  return arr.filter((num)=>{
    var hasDouble = false;
    for(let i=0; i<arr.length; i++){
      if(num/2 == arr[i]) hasDouble = true;
    }
    if(!hasDouble) return true;
    return false;
  }); 
}
