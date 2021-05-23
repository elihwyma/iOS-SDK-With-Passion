/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSWPRangeArray;

@interface TSWPDeletionRangeMap : NSObject

{
    unsigned long long _subRangeStart;
    TSWPRangeArray *_removedRanges;
}

- (void)dealloc;
- (void)adjustByDelta:(long long)arg1;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (id)initWithSubRange:(struct _NSRange)arg1 removeRanges:(id)arg2;
- (id)inverseRangesInStorageRange:(struct _NSRange)arg1;
- (_Bool)containsCharIndex:(unsigned long long)arg1;

@end
