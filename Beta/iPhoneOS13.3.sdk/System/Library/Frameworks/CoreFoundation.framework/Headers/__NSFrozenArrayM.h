/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface __NSFrozenArrayM : NSArray

{
    _Atomic struct __cow_state_t *cow;
    CDStruct_a6934631 storage;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
