// Binary To Deciaml Converter in JavaScript
let binary = "1010101010";
let decimal = 0;
let i = binary.length - 1;
while (i > - 1) {
    if("1" === binary[(binary.length-1) -i])decimal += Math.pow(2, i);
    i--;
}
console.log(decimal);