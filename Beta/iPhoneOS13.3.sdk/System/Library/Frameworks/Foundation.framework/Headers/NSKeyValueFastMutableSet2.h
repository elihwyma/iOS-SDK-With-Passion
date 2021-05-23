/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueFastMutableSet.h>

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet

{
    NSKeyValueGetter *_valueGetter;
}

- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (id)_nonNilSetValueWithSelector:(SEL)arg1;

@end
