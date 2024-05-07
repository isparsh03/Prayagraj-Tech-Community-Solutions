function checkSum(arr, x) {
    let map = {};
    for (let i = 0; i < arr.length; i++) {
        if (map[arr[i]]) {
            return true;
        }
        map[x - arr[i]] = true;
    }
    return false;
}

let arr = [0, -1, 42, -3, 1];
let x = -2;
console.log(checkSum(arr, x));
