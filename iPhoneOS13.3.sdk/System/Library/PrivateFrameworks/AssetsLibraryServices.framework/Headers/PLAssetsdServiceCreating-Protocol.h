//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol PLAssetsdServiceCreating <NSObject>
- (void)getDebugServiceWithReply:(void (^)(id <PLAssetsdDebugServiceProtocol>, NSError *))arg1;
- (void)getDiagnosticsServiceWithReply:(void (^)(id <PLAssetsdDiagnosticsServiceProtocol>, NSError *))arg1;
- (void)getDemoServiceWithReply:(void (^)(id <PLAssetsdDemoServiceProtocol>, NSError *))arg1;
- (void)getNotificationServiceWithReply:(void (^)(id <PLAssetsdNotificationServiceProtocol>, NSError *))arg1;
- (void)getSyncServiceWithReply:(void (^)(id <PLAssetsdSyncServiceProtocol>, NSError *))arg1;
- (void)getMigrationServiceWithReply:(void (^)(id <PLAssetsdMigrationServiceProtocol>, NSError *))arg1;
- (void)getCloudInternalServiceWithReply:(void (^)(id <PLAssetsdCloudInternalServiceProtocol>, NSError *))arg1;
- (void)getCloudServiceWithReply:(void (^)(id <PLAssetsdCloudServiceProtocol>, NSError *))arg1;
- (void)getResourceInternalServiceWithReply:(void (^)(id <PLAssetsdResourceInternalServiceProtocol>, NSError *))arg1;
- (void)getResourceWriteOnlyServiceWithReply:(void (^)(id <PLAssetsdResourceWriteOnlyServiceProtocol>, NSError *))arg1;
- (void)getResourceServiceWithReply:(void (^)(id <PLAssetsdResourceServiceProtocol>, NSError *))arg1;
- (void)getPhotoKitServiceWithReply:(void (^)(id <PLAssetsdPhotoKitServiceProtocol>, NSError *))arg1;
- (void)getLibraryManagementServiceWithReply:(void (^)(id <PLAssetsdLibraryManagementServiceProtocol>, NSError *))arg1;
- (void)getSystemLibraryURLReadOnlyServiceWithReply:(void (^)(id <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol>, NSError *))arg1;
- (void)getLibraryInternalServiceWithReply:(void (^)(id <PLAssetsdLibraryInternalServiceProtocol>, NSError *))arg1;
- (void)getLibraryServiceWithReply:(void (^)(id <PLAssetsdLibraryServiceProtocol>, NSError *))arg1;
@end

