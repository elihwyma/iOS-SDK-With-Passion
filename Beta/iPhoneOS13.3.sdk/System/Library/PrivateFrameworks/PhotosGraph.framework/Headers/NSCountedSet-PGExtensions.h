/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSCountedSet.h>

@interface NSCountedSet (PGExtensions)

- (id)pg_objectWithMaxCount;
- (id)pg_objectWithMinCount;
- (id)pg_sortedArrayByCountAscending:(_Bool)arg1;
- (unsigned long long)pg_countForRange:(struct _NSRange)arg1;
- (unsigned long long)pg_accumulatedCount;

@end
