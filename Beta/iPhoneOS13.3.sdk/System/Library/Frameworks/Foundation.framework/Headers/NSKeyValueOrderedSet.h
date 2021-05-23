/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOrderedSet.h>

@class NSKeyValueNonmutatingOrderedSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueOrderedSet : NSOrderedSet

{
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingOrderedSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (CDStruct_a70f6672)_proxyLocator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
