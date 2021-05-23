/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;

@end
