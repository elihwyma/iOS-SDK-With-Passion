/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLAssetsdClientXPCConnection, PLAssetsdCloudClient, PLAssetsdCloudInternalClient, PLAssetsdDebugClient, PLAssetsdDemoClient, PLAssetsdDiagnosticsClient, PLAssetsdLibraryClient, PLAssetsdLibraryInternalClient, PLAssetsdLibraryManagementClient, PLAssetsdMigrationClient, PLAssetsdNotificationClient, PLAssetsdPhotoKitClient, PLAssetsdResourceClient, PLAssetsdResourceInternalClient, PLAssetsdResourceWriteOnlyClient, PLAssetsdSyncClient, PLAssetsdSystemLibraryURLReadOnlyClient, PLAutoBindingProxyFactory;

@protocol OS_dispatch_queue;

@interface PLAssetsdClient : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdClientXPCConnection *_nonBindingProxyFactory;
    PLAutoBindingProxyFactory *_autoBindingProxyFactory;
    PLAssetsdLibraryClient *_libraryClient;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdLibraryInternalClient *_libraryInternalClient;
    PLAssetsdPhotoKitClient *_photoKitClient;
    PLAssetsdResourceClient *_resourceClient;
    PLAssetsdResourceWriteOnlyClient *_resourceWriteOnlyClient;
    PLAssetsdResourceInternalClient *_resourceInternalClient;
    PLAssetsdCloudClient *_cloudClient;
    PLAssetsdCloudInternalClient *_cloudInternalClient;
    PLAssetsdMigrationClient *_migrationClient;
    PLAssetsdSyncClient *_syncClient;
    PLAssetsdNotificationClient *_notificationClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdDiagnosticsClient *_diagnosticsClient;
    PLAssetsdDebugClient *_debugClient;
}

@property (readonly) PLAssetsdDebugClient *debugClient;
@property (readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdNotificationClient *notificationClient;
@property (readonly) PLAssetsdSyncClient *syncClient;
@property (readonly) PLAssetsdMigrationClient *migrationClient;
@property (readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property (readonly) PLAssetsdCloudClient *cloudClient;
@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
@property (readonly) PLAssetsdResourceClient *resourceClient;
@property (readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property (readonly) PLAssetsdLibraryClient *libraryClient;

+ (id)sharedSystemLibraryAssetsdClient;

- (id)init;
- (id)resourceWriteOnlyClient;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (void)sendDaemonJob:(id)arg1 shouldRunSerially:(_Bool)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)waitUntilConnectionSendsAllMessages;
- (void)addPhotoLibraryUnavailabilityHandler:(CDUnknownBlockType)arg1;
- (id)initWithNonBindingProxyFactory:(id)arg1 autoBindingProxyFactory:(id)arg2;
- (id)_setupClientClass:(Class)arg1 proxyGetter:(SEL)arg2 autoBinding:(_Bool)arg3;
- (id)systemLibraryURLReadOnlyClient;
- (void)_updateLibraryStateConnectionInterrupted:(id)arg1;
- (void)prepareToShutdown;

@end
