/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableSet, NSOperationQueue, NSPersistentContainer, NSURLSession;

@protocol OS_dispatch_queue;

@interface STAppInfoCache : NSObject

{
    NSPersistentContainer *_persistentContainer;
    NSCache *_appInfoByBundleIdentifier;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSURLSession *_urlSession;
    NSMutableSet *_bundleIdentifiersWithPendingRequests;
    NSOperationQueue *_completionHandlerQueue;
}

@property (nonatomic, readonly) NSCache *appInfoByBundleIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lookupQueue;
@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, readonly) NSMutableSet *bundleIdentifiersWithPendingRequests;
@property (nonatomic, readonly) NSOperationQueue *completionHandlerQueue;
@property (retain) NSPersistentContainer *persistentContainer;

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (id)appInfoForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3;
- (id)appInfoForBundleIdentifier:(id)arg1 localOnly:(_Bool)arg2;
- (id)_appInfoForBundleIdentifier:(id)arg1;
- (id)_placeholderAppInfoWithBundleIdentifier:(id)arg1;
- (void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1;
- (void)fetchAppInfoForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_fetchAppInfoFromLaunchServicesWithBundleIdentifier:(id)arg1;
- (id)_preloadedAppInfoWithBundleIdentifier:(id)arg1;
- (id)_fetchSyncedInstalledAppInfoForBundleIdentifier:(id)arg1;
- (void)_handleiTunesResponseForBundleIdentifiers:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_finishedFetchingAppInfoByBundleIdentifier:(id)arg1;
- (id)_localAppNameForBundleIdentifier:(id)arg1;
- (void)fetchAppInfoForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
