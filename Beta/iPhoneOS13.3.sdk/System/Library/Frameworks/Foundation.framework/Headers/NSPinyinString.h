/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

@interface NSPinyinString : NSString

{
    NSString *_string;
    unsigned long long _syllableCount;
    unsigned long long _score;
    unsigned long long _rangeCount;
    unsigned long long _replacementCount;
    unsigned long long _transpositionCount;
    unsigned long long _insertionCount;
    unsigned long long _deletionCount;
    unsigned long long _firstModificationIndex;
    struct _NSRange *_ranges;
    _Bool _lastSyllableIsPartial;
}

+ (id)alternativesForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;

- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(struct _NSRange *)arg11;
- (unsigned long long)syllableCount;
- (_Bool)lastSyllableIsPartial;
- (unsigned long long)score;
- (unsigned long long)numberOfNonPinyinRanges;
- (unsigned long long)numberOfReplacements;
- (unsigned long long)numberOfTranspositions;
- (unsigned long long)numberOfInsertions;
- (unsigned long long)numberOfDeletions;
- (unsigned long long)indexOfFirstModification;
- (struct _NSRange)nonPinyinRangeAtIndex:(unsigned long long)arg1;
- (id)nonPinyinIndexSet;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(struct _NSRange *)arg10;

@end
