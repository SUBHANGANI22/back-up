console.log("this is tutorial 46");
function greet(names, gtext = "Greetings from java script") {
  let name1 = "name1";
  console.log(gtext + " " + names);
  console.log(names + " is a good boy");
}

function sum(a, b, c) {
  let d = a + b + c;
  return d;
  // this line will never execute (unreachable code)
  // console.log("function is returned")
}

let names = "Abhishek";
let name1 = "Nikki";
let name2 = "Anmol";
let name3 = "subham";
let gtext = "Good Morning";
greet(names, gtext);
greet(name1, gtext);
greet(name2, gtext);
greet(name3);

// let retval=greet(name3);
// console.log(retval)
let retval = sum(1, 2, 3);
console.log(retval);
// console.log(name+' is a good boy');
