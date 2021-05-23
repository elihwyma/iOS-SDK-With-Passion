/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@class NSCountedSet, NSHashTable, NSMutableDictionary, NSString;

@interface FBSApplicationDataStoreRepositoryClient : FBSServiceFacilityClient

{
    struct os_unfair_lock_s _prefetchedDataLock;
    NSCountedSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeyValues;
    NSMutableDictionary *_pendingChangesToPrefetchedKeys;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
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
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)addPrefetchedKeys:(id)arg1;
- (void)_sendPrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (_Bool)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id *)arg3;
- (void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setChangeInFlight:(_Bool)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3;
- (void)_handleValueChanged:(id)arg1;
- (void)_handleStoreInvalidated:(id)arg1;
- (_Bool)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2;
- (id)clientCallbackQueue;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (id)availableDataStores;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_allPrefetchedChangesInFlightForApplication:(id)arg1;
- (void)fireCompletion:(CDUnknownBlockType)arg1 result:(id)arg2 error:(id)arg3;

@end
