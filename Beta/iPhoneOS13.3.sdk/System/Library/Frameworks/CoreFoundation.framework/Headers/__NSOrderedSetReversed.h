/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSOrderedSet.h>

__attribute__((visibility("hidden")))
@interface __NSOrderedSetReversed : NSOrderedSet

{
    id _orderedSet;
    unsigned long long _cnt;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithOrderedSet:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;

@end
