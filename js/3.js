function is_prime(n){
    if(n <= 3){ 
        return false; 
    }
    else if(n % 2 == 0 || n % 3 == 0){ 
        return false; 
    }
    var i = 5;
    while(i * i <= n){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
        i = i + 6;
    }
    return true;
};

let largest = 0;
let number = 600851475143;

for(let i = 2; i > number / 2; i++){
    if(is_prime(i)){
        largest = i;
    }
}

console.log(largest);
