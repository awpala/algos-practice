console.log('SECTION 1 - Arrays & Strings\n\n');

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
