/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSHashTable, NSString;

@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject

{
    id <FBApplicationDataStoreRepository> _dataStore;
    NSCountedSet *_prefetchedKeys;
    struct NSMutableDictionary *_prefetchedKeyValues;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observersLock_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (id)_observers;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addPrefetchedKeys:(id)arg1;
- (_Bool)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id *)arg3;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (id)availableDataStores;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithDataStore:(id)arg1;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_valueChanged:(id)arg1;
- (void)_prefetchQueue_updateNotificationListeners;
- (id)_prefetchQueue_prefetchedKeysForApplication:(id)arg1;
- (void)_invalidateCacheIfObjectIsNotEqual:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)_updateCacheIfNecessaryWithObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)_updateNotificationListeners;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;

@end
