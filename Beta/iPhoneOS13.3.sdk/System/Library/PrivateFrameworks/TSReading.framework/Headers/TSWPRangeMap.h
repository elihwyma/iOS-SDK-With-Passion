/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPRangeMap : NSObject

{
    struct _NSRange _subRange;
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity>> _unmappedIndexes;
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity>> _mappedIndexes;
}

- (id).cxx_construct;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedPairIndexes:(const vector_06e666a8 *)arg2;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const vector_06e666a8 *)arg2 affinity:(int)arg3;
- (void)adjustByDelta:(long long)arg1;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1;
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1;

@end
