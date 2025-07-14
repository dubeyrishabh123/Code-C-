let c = "RISHABH";

// Convert string to array
let arr = c.split(''); // ['R', 'I', 'S', 'H', 'A', 'B', 'H']

let low = 0;
let high = arr.length - 1;

while (low < high) {
    let temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    low++;
    high--;
}

// Print reversed characters
arr.forEach(element => {
    console.log(element);
});

// If you want final reversed string
let reversed = arr.join('');
console.log("Reversed string:", reversed);
