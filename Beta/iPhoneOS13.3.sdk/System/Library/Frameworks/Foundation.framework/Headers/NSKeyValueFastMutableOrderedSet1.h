/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueFastMutableOrderedSet.h>

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet

{
    NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
