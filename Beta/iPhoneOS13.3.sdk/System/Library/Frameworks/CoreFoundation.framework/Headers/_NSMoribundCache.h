/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSCache.h>

__attribute__((visibility("hidden")))
@interface _NSMoribundCache : NSCache

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (unsigned long long)totalCostLimit;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (_Bool)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWithDiscardedContent:(_Bool)arg1;

@end
