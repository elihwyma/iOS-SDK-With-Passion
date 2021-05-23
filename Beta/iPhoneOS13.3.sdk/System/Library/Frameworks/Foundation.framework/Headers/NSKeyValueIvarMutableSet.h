/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueMutableSet.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet

{
    struct objc_ivar *_ivar;
}

- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
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
