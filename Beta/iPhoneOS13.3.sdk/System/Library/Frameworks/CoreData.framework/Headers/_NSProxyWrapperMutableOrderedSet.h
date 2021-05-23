/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_NSNotifyingWrapperMutableOrderedSet.h>

@class _NSFaultingMutableOrderedSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet

{
    _NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;
}

- (void)dealloc;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObjects:(id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)intersectOrderedSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 mutationMethods:(id)arg4;

@end
