/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (TSUAdditions)

@property (nonatomic, readonly) _Bool tsu_isSingleContiguousRange;

+ (id)tsu_indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;

- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (_Bool)tsu_intersectsIndexesInIndexSet:(id)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)tsu_initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)tsu_indexSetByAddingIndex:(unsigned long long)arg1;
- (id)tsu_indexSetByIntersectingWithRange:(struct _NSRange)arg1;
- (id)tsu_indexSetByIntersectingWithIndexes:(id)arg1;
- (id)tsu_indexSetByExcludingIndexes:(id)arg1;
- (unsigned long long)tsu_indexAtPosition:(unsigned long long)arg1;
- (unsigned long long)tsu_positionOfIndex:(unsigned long long)arg1;
- (struct _NSRange)tsu_leadingRangeInRange:(struct _NSRange)arg1;
- (struct _NSRange)tsu_trailingRangeInRange:(struct _NSRange)arg1;
- (id)tsu_localizedDescription;

@end
