/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (TSUAdditions)

@property (nonatomic, readonly) _Bool tsu_isSingleContiguousRange;

+ (id)tsu_indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;

- (id)initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (_Bool)tsu_intersectsIndexesInIndexSet:(id)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;

@end
