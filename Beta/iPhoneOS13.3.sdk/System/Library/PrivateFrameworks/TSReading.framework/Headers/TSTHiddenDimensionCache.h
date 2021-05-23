/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSIndexSet, NSMutableIndexSet;

@interface TSTHiddenDimensionCache : NSObject <Swift>

{
    unsigned long long mCount;
    NSMutableIndexSet *mCachedVisible;
    NSMutableIndexSet *mCachedUserVisible;
    NSMutableIndexSet *mInvalidRanges;
    unsigned long long mMarkIndex;
}

@property (nonatomic, readonly) NSIndexSet *visibleIndices;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate:(struct _NSRange)arg1;
- (void)setCount:(unsigned long long)arg1;
- (id)initWithUserHiddenInformation:(_Bool)arg1;
- (_Bool)isIndexHidden:(unsigned long long)arg1;
- (_Bool)isIndexUserHidden:(unsigned long long)arg1;
- (unsigned long long)numberHiddenIndicesInRange:(struct _NSRange)arg1;
- (unsigned long long)numberUserHiddenIndicesInRange:(struct _NSRange)arg1;
- (_Bool)anyHiddenIndicesInRange:(struct _NSRange)arg1;
- (_Bool)anyUserHiddenIndicesInRange:(struct _NSRange)arg1;
- (unsigned long long)findPreviousVisibleIndex:(unsigned long long)arg1;
- (unsigned long long)findNextVisibleIndex:(unsigned long long)arg1;
- (unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(unsigned long long)arg1;
- (void)setMarkIndex:(unsigned long long)arg1;
- (void)setAllValuesToZero;
- (void)setAllInvalidValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)moveRangeFrom:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;
- (void)deleteRange:(struct _NSRange)arg1;
- (void)insertRange:(struct _NSRange)arg1;

@end
