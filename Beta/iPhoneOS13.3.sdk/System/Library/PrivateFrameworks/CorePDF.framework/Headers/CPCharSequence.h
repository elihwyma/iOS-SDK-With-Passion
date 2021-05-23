/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPMemoryOwner;

__attribute__((visibility("hidden")))
@interface CPCharSequence : NSObject

{
    unsigned int length;
    struct CPPDFChar **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    _Bool wasMerged;
}

- (void)dealloc;
- (unsigned int)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (struct CGRect)bounds;
- (void)dispose;
- (id)initSuper;
- (struct CPPDFChar *)charAtIndex:(unsigned int)arg1;
- (_Bool)map:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (id)newSubsequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)removeFrom:(unsigned int)arg1;
- (id)initWithSizeFor:(unsigned int)arg1;
- (void)addChar:(struct CPPDFChar *)arg1;
- (_Bool)wasMerged;
- (_Bool)removeSubsequences:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)splitToSubsequences:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)arg1;
- (_Bool)map:(CDUnknownFunctionPointerType)arg1 whereNeighborsWith:(id)arg2 passing:(void *)arg3;
- (void)removeAllChars;
- (void)resize:(unsigned int)arg1;
- (void)sortBy:(CDUnknownFunctionPointerType)arg1;
- (void)merge:(id)arg1 by:(CDUnknownFunctionPointerType)arg2;
- (struct CGRect)boundsFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (id)initWithChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2;
- (struct CPPDFChar **)charArray;
- (void)addChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2;
- (void)addChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2 ifTrue:(CDUnknownFunctionPointerType)arg3 passing:(void *)arg4;
- (void)addCharsFromSequence:(id)arg1;
- (void)removeChar;
- (void)replaceCharAtIndex:(unsigned int)arg1 withChar:(struct CPPDFChar *)arg2;
- (void)removeCharAtIndex:(unsigned int)arg1;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)arg1;
- (void)copyToSubsequence:(id)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)copyToSubsequence:(id)arg1 ifTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (_Bool)removeToSubsequence:(id)arg1 ifTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (_Bool)mapWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapWithIndex:(CDUnknownFunctionPointerType)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3 passing:(void *)arg4;
- (_Bool)mapToPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;

@end
