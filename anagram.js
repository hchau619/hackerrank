/* Sid is obsessed with reading short stories. Being a CS student, he is doing some interesting frequency analysis with the books. He chooses strings S1S1 and S2S2 in such a way that |len(S1)−len(S2)|≤1|len(S1)−len(S2)|≤1.

Your task is to help him find the minimum number of characters of the first string he needs to change to enable him to make it an anagram of the second string.

Note: A word x is an anagram of another word y if we can produce y by rearranging the letters of x.

Input Format
The first line will contain an integer, TT, representing the number of test cases. Each test case will contain a string having length len(S1)+len(S2)len(S1)+len(S2), which will be concatenation of both the strings described above in the problem.The given string will contain only characters from aa to zz.

Output Format
An integer corresponding to each test case is printed in a different line, i.e. the number of changes required for each test case. Print −1−1 if it is not possible.

Constraints

    1≤T≤1001≤T≤100
    1≤len(S1)+len(S2)≤104
*/


process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});

function processData(input) {
    var data = input.split('\n');
    data.shift(); 
    for(var i = 0; i < data.length; i++){
        console.log(anagram(data[i]));
    }
} 

function anagram(str){
    var len = str.length;
    var odds = 0;
    if(len % 2 !== 0){
        return -1;
    }
    
    var s1 = str.substr(0, len/2).split('');
    var s2 = str.substr(len/2).split('');
    
    for(var i = 0; i < len/2; i++){
        var k = s2.indexOf(s1[i]);
        if(k !== -1) { s2[k] = '';}
    }
    
    s2 = s2.join('');
    
    return s2.length;
}
