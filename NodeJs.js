var start = process.hrtime();

var elapsed_time = function(note){
    var precision = 3; // 3 decimal places
    var elapsed = process.hrtime(start)[1] / 1000000; // divide by a million to get nano to milli
    console.log('It Took '+ process.hrtime(start)[0] + " s, " + elapsed.toFixed(precision) + " ms - " + note); // print message + time
    start = process.hrtime(); // reset the timer
}
var array = [1, 9, 7, 4, 8];
cout("The elements are: { ");
var cbm = 0;
var count = sizeof(array)
array.forEach((zebra) => {
  if (cbm != count - 1) {
    cout(array[cbm]+", ");
    cbm++;
  }
})
cout(array[count - 1]+ " }\n")

var cnt = (count - 1) / 2;
cout(`The median of the array, is ${array[cnt]}\n`);
elapsed_time("To Run")
function sizeof(arr) {
  return arr.length;
}
function cout(txt) {
  process.stdout.write(txt.toString())
}
