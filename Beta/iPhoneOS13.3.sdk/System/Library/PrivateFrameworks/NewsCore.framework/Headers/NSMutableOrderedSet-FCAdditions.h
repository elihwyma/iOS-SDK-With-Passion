/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSMutableOrderedSet.h>

@interface NSMutableOrderedSet (FCAdditions)

- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)fc_removeAndReturnObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)fc_transformWithBlock:(CDUnknownBlockType)arg1;

@end
