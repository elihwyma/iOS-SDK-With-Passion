/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray

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
- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)_mutate;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
