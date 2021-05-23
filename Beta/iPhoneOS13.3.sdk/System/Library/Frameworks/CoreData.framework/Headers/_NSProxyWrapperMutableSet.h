/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_NSNotifyingWrapperMutableSet.h>

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet

{
    _NSFaultingMutableSetMutationMethods *_mutationMethods;
}

- (void)dealloc;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 mutationMethods:(id)arg4;

@end
