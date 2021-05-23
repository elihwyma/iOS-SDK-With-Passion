/*
 Image: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
 */

#import <Foundation/NSObject.h>

@class NSThread, NSUbiquitousKeyValueStore;

@interface WiFiCloudSyncEngineCore : NSObject

{
    NSUbiquitousKeyValueStore *keyValueStore;
    void *context;
    CDUnknownFunctionPointerType callback;
    NSThread *clientThread;
    _Bool iCloudSyncingEnabled;
}

@property NSUbiquitousKeyValueStore *keyValueStore;
@property void *context;
@property CDUnknownFunctionPointerType callback;
@property NSThread *clientThread;
@property _Bool iCloudSyncingEnabled;

- (void)dealloc;
- (void)unSubscribeKVStoreNotfications;
- (void)synchronizeKVS;
- (void)relayReadStoreValueAction:(id)arg1;
- (id)readCompleteKVStore;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (void)relayCloudCleanUpEvent;
- (void)relayCloudEvent:(id)arg1;
- (void)subscribeKVStoreNotficationsForBundleId:(id)arg1;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1;
- (void)removeFromKVStore:(id)arg1;
- (void)relayPruneKVSStore:(id)arg1;
- (void)relayMergeNetworks:(id)arg1;
- (void)relayKeychainSyncState:(id)arg1;
- (void)initWithCallback:(CDUnknownFunctionPointerType)arg1 callbackContext:(void *)arg2;
- (void)addToKVStore:(id)arg1;
- (void)readStoreValueForKey:(id)arg1;
- (void)printCompleteKVStore;
- (void)clearKVS;
- (void)enableIcloudSyncing:(_Bool)arg1 ForBundleId:(id)arg2;
- (void)pruneKVSStore;
- (void)synchronizeAndCallMergeNetworks;
- (void)queryKeychainSyncState;

@end
