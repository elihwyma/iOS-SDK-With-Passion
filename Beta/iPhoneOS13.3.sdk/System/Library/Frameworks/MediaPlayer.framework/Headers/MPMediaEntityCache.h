/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaEntityCache : NSObject

{
    id <MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
    _Bool _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwlock;
    struct os_unfair_lock_s _entityCacheMapLock;
    NSObject<OS_dispatch_queue> *_deallocLaterQueue;
    struct __CFDictionary *_concreteEntitiesByDataProviderEntityClass;
    NSMutableArray *_entityTemporaryReferences;
}

- (id)itemWithIdentifier:(long long)arg1;
- (id)initWithMediaLibraryDataProvider:(id)arg1;
- (id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(CDUnknownBlockType)arg2;
- (id)collectionWithIdentifier:(long long)arg1 grouping:(long long)arg2 loadEntityBlock:(CDUnknownBlockType)arg3;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(_Bool)arg3;
- (void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2;
- (id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(long long)arg2 collectionGroupingType:(long long)arg3 loadEntityBlock:(CDUnknownBlockType)arg4;
- (map_2a6257c2 *)_entityMapForDataProviderEntityClass:(Class)arg1;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performWithSharedAccessForDataProviderEntityClass:(Class)arg1 block:(CDUnknownBlockType)arg2;

@end
