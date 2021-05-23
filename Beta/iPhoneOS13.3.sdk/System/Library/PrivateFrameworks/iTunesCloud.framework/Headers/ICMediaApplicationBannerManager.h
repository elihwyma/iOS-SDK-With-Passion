/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICMediaApplicationBannerStore, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;

@protocol OS_dispatch_queue;

@interface ICMediaApplicationBannerManager : NSObject

{
    NSOperationQueue *_operationQueue;
    ICMediaApplicationBannerStore *_bannerStore;
    _Bool _isSystemService;
    _Bool _resetNeeded;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (id)sharedSystemService;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)startSystemService;
- (void)stopSystemService;
- (id)initWithNotificationStore:(id)arg1 isSystemService:(_Bool)arg2;
- (void)serviceBannerStoreDidChange;
- (void)serviceResetWithCompletion:(CDUnknownBlockType)arg1;
- (void)serviceSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)serviceProcessSyncCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serviceAllBannersWithCompletion:(CDUnknownBlockType)arg1;
- (void)serviceBannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)serviceUpdateBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serviceUpdateBanners:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_schedulePeriodicTasks;
- (void)_handleUserIdentityStoreDidChange;
- (void)_postClientStoreDidChangeNotification;
- (id)_storePlatformRequestContextWithIdentity:(id)arg1;
- (void)_processSyncCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)processSyncCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allBannersWithCompletion:(CDUnknownBlockType)arg1;
- (void)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateBanners:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBanner:(id)arg1 withIncrementedDisplayCount:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end
