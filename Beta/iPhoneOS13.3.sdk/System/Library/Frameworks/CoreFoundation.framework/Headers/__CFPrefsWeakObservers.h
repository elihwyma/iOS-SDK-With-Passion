/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface __CFPrefsWeakObservers : NSObject

{
    struct __cfobservers_t values;
    unsigned long long count;
}

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned char)addObject:(id)arg1;
- (unsigned char)removeObject:(id)arg1;
- (unsigned long long)approximateCount;
- (unsigned long long)borrowObjects:(id *)arg1 count:(unsigned long long)arg2;

@end
