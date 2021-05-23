/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUCache.h>

@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache

{
    TSUReadWriteQueue *mReadWriteQueue;
}

@property (nonatomic, readonly) TSUReadWriteQueue *readWriteQueue;

- (void)dealloc;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)unload;
- (_Bool)hasFlushableContent;
- (void)removeObjectForKey:(id)arg1 andWait:(_Bool)arg2;

@end
