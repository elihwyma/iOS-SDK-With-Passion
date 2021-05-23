/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueMutableOrderedSet.h>

@class NSKeyValueMutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet

{
    NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;
}

- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
