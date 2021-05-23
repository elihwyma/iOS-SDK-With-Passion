/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface __NSOrderedSetArrayProxy : NSArray

{
    id _orderedSet;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithOrderedSet:(id)arg1;

@end
