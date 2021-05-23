/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMapTable;

@protocol OS_dispatch_queue;

@interface WBSCache : NSObject

{
    NSCache *_cache;
    NSMapTable *_weakObjectsTable;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_recacheObjectForKey:(id)arg1;

@end
