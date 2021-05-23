/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSSet.h>

__attribute__((visibility("hidden")))
@interface __NSFrozenSetM : NSSet

{
    CDStruct_af6d7307 storage;
    _Atomic struct __cow_state_t *cow;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (double)clumpingFactor;
- (double)clumpingInterestingThreshold;

@end
