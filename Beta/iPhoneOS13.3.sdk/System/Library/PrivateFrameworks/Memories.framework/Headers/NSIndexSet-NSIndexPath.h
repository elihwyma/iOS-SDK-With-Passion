/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (NSIndexPath)

+ (id)unionOf:(id)arg1 with:(id)arg2;
+ (id)differenceOf:(id)arg1 with:(id)arg2;
+ (id)indexSetWithIndexesInRCRange:(CDStruct_eba65aba)arg1;
+ (id)intersectionOf:(id)arg1 with:(id)arg2;

- (long long)largestContiguousIndexGreaterThanOrEqualTo:(long long)arg1;
- (id)indexPathsWithSection:(unsigned long long)arg1;
- (_Bool)intersectsIndexesInRCRange:(CDStruct_eba65aba)arg1;
- (long long)lowestContiguousIndexLessThanOrEqualTo:(long long)arg1;
- (unsigned long long)nextToLastIndex;
- (id)indexesInRange:(struct _NSRange)arg1;
- (unsigned long long)nearestIndex:(unsigned long long)arg1;
- (id)indexArray;

@end
