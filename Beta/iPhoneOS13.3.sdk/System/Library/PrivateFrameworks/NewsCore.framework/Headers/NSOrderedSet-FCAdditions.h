/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSOrderedSet.h>

#import <NewsCore/Swift-Protocol.h>

@interface NSOrderedSet (FCAdditions) <Swift>

- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetByMinusingOrderedSet:(id)arg1;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)fc_isSortedUsingComparator:(CDUnknownBlockType)arg1;
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)fc_orderedSetByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1 withEqualityTest:(CDUnknownBlockType)arg2 identityValueProvider:(CDUnknownBlockType)arg3;
- (id)fc_indexesOfObjectsInOrderedSet:(id)arg1;
- (id)fc_orderedSetOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetWithObjectsInRange:(struct _NSRange)arg1;
- (id)fc_orderedSetWithObjectsAtIndexes:(id)arg1;
- (id)fc_orderedSetByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)fc_isEqualToOrderedSet:(id)arg1 inRange:(struct _NSRange)arg2;

@end
