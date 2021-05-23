/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSPinyinString.h>

@interface PRPinyinString : NSPinyinString

{
    unsigned long long _originalLength;
    unsigned long long _originalCheckedLength;
    unsigned long long _modificationCount;
    unsigned long long *_modificationTypes;
    struct _NSRange *_originalRanges;
    struct _NSRange *_finalRanges;
    struct _NSRange *_originalSyllableRanges;
    struct _NSRange *_originalAdditionalSyllableRanges;
}

+ (id)alternativesForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;
+ (id)correctionsForInputString:(id)arg1;

- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
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
- (unsigned long long)numberOfModifications;
- (unsigned long long)typeOfModificationAtIndex:(unsigned long long)arg1;
- (struct _NSRange)originalRangeForModificationAtIndex:(unsigned long long)arg1;
- (struct _NSRange)finalRangeForModificationAtIndex:(unsigned long long)arg1;
- (struct _NSRange)originalSyllableRangeForModificationAtIndex:(unsigned long long)arg1;
- (struct _NSRange)originalAdditionalSyllableRangeForModificationAtIndex:(unsigned long long)arg1;
- (id)annotatedString;
- (unsigned long long)originalLength;
- (unsigned long long)originalCheckedLength;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(struct _NSRange)arg7 finalModificationRange:(struct _NSRange)arg8;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(struct _NSRange)arg7 finalModificationRange:(struct _NSRange)arg8 originalSyllableRange:(struct _NSRange)arg9;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(struct _NSRange)arg7 finalModificationRange:(struct _NSRange)arg8 originalSyllableRange:(struct _NSRange)arg9 originalAdditionalSyllableRange:(struct _NSRange)arg10;
- (id)initWithUncheckedString:(id)arg1 score:(unsigned long long)arg2 originalLength:(unsigned long long)arg3;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 originalCheckedLength:(unsigned long long)arg6 numberOfModifications:(unsigned long long)arg7 modificationTypes:(unsigned long long *)arg8 originalModificationRanges:(struct _NSRange *)arg9 finalModificationRanges:(struct _NSRange *)arg10 originalSyllableRanges:(struct _NSRange *)arg11 originalAdditionalSyllableRanges:(struct _NSRange *)arg12;
- (unsigned long long)finalCheckedLength;

@end
