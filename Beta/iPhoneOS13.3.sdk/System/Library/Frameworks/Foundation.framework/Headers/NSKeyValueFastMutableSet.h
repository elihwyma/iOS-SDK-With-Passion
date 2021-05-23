/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet

{
    NSKeyValueMutatingSetMethodSet *_mutatingMethods;
}

- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
