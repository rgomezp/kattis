function prefixSearch(strings, prefix){
	var left = 0;
	var right = strings.length-1;
	var returnArr = [];
	while(left <= right){
		var start;
		var mid = Math.floor((left+right)/2);
		// check if mid = prefix
		if(compareStrings(strings[mid], prefix)) return strings[mid];
		// if first letter less than target, move right
		if(strings[mid][0] < prefix[0]){
			left = mid+1;
		}
		// if first letter greater than target, move left
		if(strings[mid][0] > prefix[0]){
			right = mid-1;
		}
		// same first letters
		if(strings[mid][0] == prefix[0]){
			// find first word with that letter
			start = mid;
			while(strings[start][0] == prefix[0]){
				start--;
			}
			
			var iterator = start+1;
			while(strings[iterator][0] == prefix[0]){
				if(compareStrings(strings[iterator], prefix)){
					returnArr.push(strings[iterator]);
}
				iterator++;
			}
			break;
		}
	}
	console.log(returnArr);
}

function compareStrings(string, prefix){
	for(let i=0; i<string.length; i++){
		if(string[i] != prefix[i]) return false;
	}
	return true;
}

var sample = [
	'a string',
	'bad apples',
	'hohoho',
	'hulu',
	'huru',
	'hudu',
	'husu',
	'hutu',
	'lolla',
	'taciturn',
	'zebra'
]

prefixSearch(sample, 'hu');

