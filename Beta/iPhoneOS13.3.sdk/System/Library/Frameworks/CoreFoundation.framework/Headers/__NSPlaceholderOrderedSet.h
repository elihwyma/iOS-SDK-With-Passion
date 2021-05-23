/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSMutableOrderedSet.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
