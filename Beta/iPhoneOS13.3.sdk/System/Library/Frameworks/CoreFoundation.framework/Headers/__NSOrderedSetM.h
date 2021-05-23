/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSMutableOrderedSet.h>

__attribute__((visibility("hidden")))
@interface __NSOrderedSetM : NSMutableOrderedSet

{
    _Atomic struct __cow_state_t *cow;
    CDStruct_2595eaee storage;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)_mutate;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
