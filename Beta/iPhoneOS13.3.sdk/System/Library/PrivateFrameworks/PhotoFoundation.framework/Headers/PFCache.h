/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSMapTable, PFCachePolicy, PFCacheStatistics;

@protocol OS_dispatch_queue;

@interface PFCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_contents;
    PFCachePolicy *_policy;
    PFCacheStatistics *_statistics;
    CDUnknownBlockType _willBeRemovedFromCacheHandler;
}

@property (copy) CDUnknownBlockType willBeRemovedFromCacheHandler;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)statistics;
- (id)initWithPolicy:(id)arg1;
- (void)_removeObjectForKey:(id)arg1 notify:(_Bool)arg2;
- (void)removeObjectForKeyWithoutNotification:(id)arg1;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)_setEntry:(id)arg1 forKey:(id)arg2;
- (id)setObject:(id)arg1 forKeyIfNotPresent:(id)arg2;
- (void)enumerateCacheEntriesUsingBlock:(CDUnknownBlockType)arg1;

@end
