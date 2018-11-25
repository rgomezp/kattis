function findPeak(mountainArray) {
  var left = 0;
  var right = mountainArray.length-1;

  var count = 0;
  while(count < 5){
    	var mid = Math.floor((left+right)/2);
	console.log(left, right, 'mid:', mid);

    	// check slope:
	// if slopes are different, we found it
	var slopeLeft = mountainArray[mid-1]-mountainArray[mid];
	var slopeRight = mountainArray[mid+1]-mountainArray[mid];
	
	if((slopeLeft < 0 && slopeRight < 0)) return mid;
	
	// if left == right & we didn't find it, peak doesn't exist
	if(left==right) break;

    	// if slope is to left, move to the right
	if(mountainArray[mid-1] < mountainArray[mid] && mountainArray[mid] < mountainArray[mid+1]){
		left = mid+1;
	}
    
    	// if slope is to right, move to the left
	if(mountainArray[mid-1] > mountainArray[mid] && mountainArray[mid] > mountainArray[mid+1]){
		right = mid-1;
	}
	count++;
  }
  return null;
    
}

console.log(findPeak([2,19,7,3,1,0]));
console.log(findPeak([2,4,5,6,8,10,14,19]));
