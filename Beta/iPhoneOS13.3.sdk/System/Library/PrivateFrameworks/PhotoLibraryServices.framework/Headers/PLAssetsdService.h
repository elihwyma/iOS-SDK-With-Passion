/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSXPCConnection, PLAssetsdCPLResourceDownloader, PLAssetsdConnectionAuthorization, PLAssetsdInnerService, PLLibraryServicesManager, PLPhotoLibrary, PLPhotoLibraryBundle, PLPhotoLibraryBundleController;

@interface PLAssetsdService : NSObject

{
    PLAssetsdInnerService *_innerLibraryService;
    PLAssetsdInnerService *_innerLibraryInternalService;
    PLAssetsdInnerService *_innerSystemLibraryURLReadOnlyService;
    PLAssetsdInnerService *_innerLibraryManagementService;
    PLAssetsdInnerService *_innerPhotoKitService;
    PLAssetsdInnerService *_innerResourceService;
    PLAssetsdInnerService *_innerResourceWriteOnlyService;
    PLAssetsdInnerService *_innerResourceInternalService;
    PLAssetsdInnerService *_innerCloudService;
    PLAssetsdInnerService *_innerCloudInternalService;
    PLAssetsdInnerService *_innerMigrationService;
    PLAssetsdInnerService *_innerSyncService;
    PLAssetsdInnerService *_innerNotificationService;
    PLAssetsdInnerService *_innerDemoService;
    PLAssetsdInnerService *_innerDiagnosticsService;
    PLAssetsdInnerService *_innerDebugService;
    _Bool _readyForDaemonJobs;
    NSXPCConnection *_connection;
    int _remotePID;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
    NSURL *_libraryURL;
}

@property (nonatomic, readonly) NSURL *libraryURL;
@property (nonatomic, readonly) PLLibraryServicesManager *libraryServicesManager;
@property (nonatomic, readonly) _Bool isPhotosClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleInvalidation;
- (id)_photoLibrary;
- (id)clientDebugDescription;
- (void)runDaemonJob:(id)arg1 isSerial:(_Bool)arg2;
- (void)runDaemonJob:(id)arg1 isSerial:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)bindToPhotoLibraryURL:(id)arg1 bookmark:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)getLibraryServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getLibraryInternalServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getSystemLibraryURLReadOnlyServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getLibraryManagementServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getPhotoKitServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getResourceServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getResourceWriteOnlyServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getResourceInternalServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getCloudServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getCloudInternalServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getMigrationServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getSyncServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getNotificationServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getDemoServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getDiagnosticsServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getDebugServiceWithReply:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 libraryBundleController:(id)arg2;
- (void)initializeAllServices;
- (id)resourceDownloader;
- (void)logStatus;
- (void)handleInterruption;
- (id)serviceContextWithSelector:(SEL)arg1;
- (void)initializeLibraryService;
- (void)initializeLibraryInternalService;
- (void)initializeSystemLibraryURLReadOnlyService;
- (void)initializeLibraryManagementService;
- (void)initializePhotoKitService;
- (void)initializeResourceService;
- (void)initializeResourceWriteOnlyService;
- (void)initializeResourceInternalService;
- (void)initializeCloudService;
- (void)initializeCloudInternalService;
- (void)initializeMigrationService;
- (void)initializeSyncService;
- (void)initializeNotificationService;
- (void)initializeDemoService;
- (void)initializeDiagnosticsService;
- (void)initializeDebugService;
- (long long)requiredStateForLibraryService;
- (id)permissionsForLibraryService;
- (id)newLibraryService;
- (long long)requiredStateForLibraryInternalService;
- (id)permissionsForLibraryInternalService;
- (id)newLibraryInternalService;
- (long long)requiredStateForSystemLibraryURLReadOnlyService;
- (id)permissionsForSystemLibraryURLReadOnlyService;
- (id)newSystemLibraryURLReadOnlyService;
- (long long)requiredStateForLibraryManagementService;
- (id)permissionsForLibraryManagementService;
- (id)newLibraryManagementService;
- (long long)requiredStateForPhotoKitService;
- (id)permissionsForPhotoKitService;
- (id)newPhotoKitService;
- (long long)requiredStateForResourceService;
- (id)permissionsForResourceService;
- (id)newResourceService;
- (long long)requiredStateForResourceWriteOnlyService;
- (id)permissionsForResourceWriteOnlyService;
- (id)newResourceWriteOnlyService;
- (long long)requiredStateForResourceInternalService;
- (id)permissionsForResourceInternalService;
- (id)newResourceInternalService;
- (long long)requiredStateForCloudService;
- (id)permissionsForCloudService;
- (id)newCloudService;
- (long long)requiredStateForCloudInternalService;
- (id)permissionsForCloudInternalService;
- (id)newCloudInternalService;
- (long long)requiredStateForMigrationService;
- (id)permissionsForMigrationService;
- (id)newMigrationService;
- (long long)requiredStateForSyncService;
- (id)permissionsForSyncService;
- (id)newSyncService;
- (long long)requiredStateForNotificationService;
- (id)permissionsForNotificationService;
- (id)newNotificationService;
- (long long)requiredStateForDemoService;
- (id)permissionsForDemoService;
- (id)newDemoService;
- (long long)requiredStateForDiagnosticsService;
- (id)permissionsForDiagnosticsService;
- (id)newDiagnosticsService;
- (long long)requiredStateForDebugService;
- (id)permissionsForDebugService;
- (id)newDebugService;
- (id)_waitForLibraryServicesForDaemonJob;
- (_Bool)_prepareToRunDaemonJob:(id)arg1 error:(id *)arg2;
- (void)invalidateConnectionWithReason:(id)arg1;

@end
