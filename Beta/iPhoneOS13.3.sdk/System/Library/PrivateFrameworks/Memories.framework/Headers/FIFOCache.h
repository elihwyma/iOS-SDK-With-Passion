/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FIFOCache : NSObject

{
    NSMutableDictionary *m_cache;
    NSMutableArray *m_FIFO;
    int m_capacity;
}

+ (void)noteApplicationDidReceiveMemoryWarning;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(int)arg1;
- (long long)count;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addObjectsFromDictionary:(id)arg1;

@end
