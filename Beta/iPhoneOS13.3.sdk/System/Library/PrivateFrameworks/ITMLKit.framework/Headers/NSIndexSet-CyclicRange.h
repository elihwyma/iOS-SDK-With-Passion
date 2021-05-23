/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (CyclicRange)

+ (id)indexSetWithIndexesInCyclicRange:(struct _NSRange)arg1 itemCount:(unsigned long long)arg2;

- (struct _NSRange)cyclicRangeForItemCount:(unsigned long long)arg1 includeAllIndexes:(_Bool)arg2;
- (struct _NSRange)_allInclusiveCyclicRangeForItemCount:(unsigned long long)arg1;
- (struct _NSRange)_filteredCyclicRangeForItemCount:(unsigned long long)arg1;

@end
