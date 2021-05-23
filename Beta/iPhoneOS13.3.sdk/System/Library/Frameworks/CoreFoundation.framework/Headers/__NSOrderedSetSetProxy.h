/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSSet.h>

__attribute__((visibility("hidden")))
@interface __NSOrderedSetSetProxy : NSSet

{
    id _orderedSet;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (id)initWithOrderedSet:(id)arg1;

@end
