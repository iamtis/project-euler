let first_number = 1;
let second_number = 2;
let sum_of_even_numbers = 0;

while(second_number < 4000000){
    let temp = second_number;
    
    second_number = first_number + second_number;
    first_number = temp;
    
    if(second_number % 2 == 0){
        sum_of_even_numbers += second_number;
    }
}

console.log(sum_of_even_numbers);
