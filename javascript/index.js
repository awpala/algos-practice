console.log('SECTION 1 - Arrays & Strings');
console.log('|------------------------------------------------|\n')

console.log('Problem 1A - Merging Meeting Times\n');
const { Meeting } = require('./01A-Meeting');
const meetings = [
    new Meeting(0, 1),
    new Meeting(3, 5),
    new Meeting(4, 8),
    new Meeting(10, 12),
    new Meeting(9, 10),
]
console.log('Meetings:\n', meetings);
const { mergeRanges } = require('./01A-mergeRanges');
const mergedRanges = mergeRanges(meetings);
console.log();
console.log('Merged Ranges:\n', mergedRanges);
console.log();

console.log('Problem 1B - Reverse String in Place\n');
const { reverseInPlace } = require('./01B-reverseInPlace');
let str = 'Hello World'.split('');
reverseInPlace(str);
console.log(`'Hello World' reversed is '${str.join('')}'`);
console.log();

console.log('Problem 1C - Reverse Words\n');
const { reverseWords } = require('./01C-reverseWords');
let message = 'cake pound steal'.split('');
reverseWords(message);
console.log(`'cake pound steal' reversed is '${message.join('')}'`);
console.log();

console.log('Problem 1D - Merge Sorted Arrays\n');
const { mergeArrays } = require('./01D-mergeSortedArrays');
let myArray = [3, 4, 6, 10, 11, 15];
let alicesArray = [1, 5, 8, 12, 14, 19];
console.log(`my orders: [ ${myArray.join(' ')} ]`);
console.log(`Alice's orders: [ ${alicesArray.join(' ')} ]`);
console.log();
let mergedArray = mergeArrays(myArray, alicesArray);
console.log(`merged orders: [ ${mergedArray.join(' ')} ]`);
console.log();

console.log('Problem 1E - Cafe Order Checker\n');
const { isFirstComeFirstServed } = require('./01E-cafeOrderChecker');
let takeOutOrders = [1, 3, 5];
let dineInOrders = [2, 4, 6];
let servedOrders = [1, 2, 4, 6, 5, 3]; 
console.log(`take-out orders: [ ${takeOutOrders.join(' ')} ]`);
console.log(`dine-in orders: [ ${dineInOrders.join(' ')} ]`);
console.log(`served orders: [ ${servedOrders.join(' ')} ]`);
console.log(`is first-come, first-served? ${isFirstComeFirstServed(takeOutOrders, dineInOrders, servedOrders)}`);
console.log();
takeOutOrders = [17, 8, 24];
dineInOrders = [12, 19, 2];
servedOrders = [17, 8, 12, 19, 24, 2];
console.log(`take-out orders: [ ${takeOutOrders.join(' ')} ]`);
console.log(`dine-in orders: [ ${dineInOrders.join(' ')} ]`);
console.log(`served orders: [ ${servedOrders.join(' ')} ]`);
console.log(`is first-come, first-served? ${isFirstComeFirstServed(takeOutOrders, dineInOrders, servedOrders)}`);
console.log();


console.log('\nSECTION 2 - Hashing & Hash Tables');
console.log('|------------------------------------------------|\n')

console.log('Problem 2A - Inflight Entertainment\n');
const { canTwoMoviesFillFlight } = require('./02A-inflightEntertainment');
let movieLengths = [90, 120, 180, 88, 60, 45, 140];
let flightLength = 240;
console.log(`movie selections (mins): [ ${movieLengths.join(' ')} ]`);
console.log(`total flight time (mins): ${flightLength}`);
console.log(`can watch two movies back-to-back taking up the exact total flight time: ${canTwoMoviesFillFlight(movieLengths, flightLength)}`);
console.log();
