/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (PLAdditions)

- (id)pl_shortDescription;
- (id)_pl_indexSetByUpdatingWithChangedIndexes:(id)arg1 asInserts:(_Bool)arg2;
- (id)pl_indexSetAdjustedForDeletions:(id)arg1;
- (id)pl_indexSetAdjustedForInsertions:(id)arg1;
- (struct _NSRange)pl_rangeCoveringIndexSet;

@end
