/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueFastMutableOrderedSet.h>

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet

{
    NSKeyValueGetter *_valueGetter;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;

@end
