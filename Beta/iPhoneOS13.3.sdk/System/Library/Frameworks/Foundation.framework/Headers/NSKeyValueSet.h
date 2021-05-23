/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSSet.h>

@class NSKeyValueNonmutatingSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueSet : NSSet

{
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (void)dealloc;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (CDStruct_a70f6672)_proxyLocator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
