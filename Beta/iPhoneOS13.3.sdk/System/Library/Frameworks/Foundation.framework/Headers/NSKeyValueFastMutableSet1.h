/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueFastMutableSet.h>

@class NSKeyValueNonmutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet1 : NSKeyValueFastMutableSet

{
    NSKeyValueNonmutatingSetMethodSet *_nonmutatingMethods;
}

- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
