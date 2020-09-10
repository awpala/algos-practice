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
