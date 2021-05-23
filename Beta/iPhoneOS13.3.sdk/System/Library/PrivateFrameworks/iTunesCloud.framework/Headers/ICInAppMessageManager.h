/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICInAppMessageStore, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;

@protocol OS_dispatch_queue;

@interface ICInAppMessageManager : NSObject

{
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_downloadOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICInAppMessageStore *_messageStore;
    _Bool _isSystemService;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)_init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (id)_storeRequestContext;
- (id)initWithMessageStore:(id)arg1;
- (void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg1;
- (void)_schedulePeriodicUpdate;
- (void)syncMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_xpcClientConnection;
- (void)allMessageEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)messageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_resourceCacheDirectoryPath;
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)flushEventsWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateShouldDownloadResources:(_Bool)arg1 onMessageWithIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getGlobalPropertyForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performCacheConsistencyCheck;
- (void)_loadConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processSyncResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_checkForMessageResourcesNeedingDownload;
- (void)_performSyncRetryIfPending;
- (void)startSystemService;
- (void)stopSystemService;
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
