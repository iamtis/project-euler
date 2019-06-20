let sum_of_multiples = 0;

for(let i = 1; i < 1000; i++){
    if(i % 3 == 0){
        sum_of_multiples += i;
    }
    else if(i % 5 == 0){
        sum_of_multiples += i;
    }
}

console.log(sum_of_multiples);
