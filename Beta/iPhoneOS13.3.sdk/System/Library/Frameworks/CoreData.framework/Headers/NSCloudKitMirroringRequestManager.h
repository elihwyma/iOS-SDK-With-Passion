/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCloudKitMirroringDelegateResetRequest, NSCloudKitMirroringDelegateSerializationRequest, NSCloudKitMirroringDelegateSetupRequest, NSCloudKitMirroringExportProgressRequest, NSCloudKitMirroringExportRequest, NSCloudKitMirroringFetchRecordsRequest, NSCloudKitMirroringImportRequest, NSCloudKitMirroringInitializeSchemaRequest, NSCloudKitMirroringRequest, NSCloudKitMirroringResetMetadataRequest, NSCloudKitMirroringResetZoneRequest;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringRequestManager : NSObject

{
    NSCloudKitMirroringImportRequest *_pendingImportRequest;
    NSCloudKitMirroringExportRequest *_pendingExportRequest;
    NSCloudKitMirroringDelegateSetupRequest *_pendingSetupRequest;
    NSCloudKitMirroringDelegateResetRequest *_pendingDelegateResetRequest;
    NSCloudKitMirroringResetZoneRequest *_pendingResetRequest;
    NSCloudKitMirroringFetchRecordsRequest *_pendingFetchRecordsRequest;
    NSCloudKitMirroringResetMetadataRequest *_pendingResetMetadataRequest;
    NSCloudKitMirroringDelegateSerializationRequest *_pendingSerializationRequest;
    NSCloudKitMirroringInitializeSchemaRequest *_pendingInitializeSchemaRequest;
    NSCloudKitMirroringExportProgressRequest *_pendingExportProgressRequest;
    NSCloudKitMirroringRequest *_activeRequest;
}

@property (nonatomic, readonly) NSCloudKitMirroringImportRequest *pendingImportRequest;
@property (nonatomic, readonly) NSCloudKitMirroringExportRequest *pendingExportRequest;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateSetupRequest *pendingSetupRequest;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateResetRequest *pendingDelegateResetRequest;
@property (nonatomic, readonly) NSCloudKitMirroringResetZoneRequest *pendingResetRequest;
@property (nonatomic, readonly) NSCloudKitMirroringFetchRecordsRequest *pendingFetchRecordsRequest;
@property (nonatomic, readonly) NSCloudKitMirroringResetMetadataRequest *pendingResetMetadataRequest;
@property (nonatomic, readonly) NSCloudKitMirroringRequest *activeRequest;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateSerializationRequest *pendingSerializationRequest;
@property (nonatomic, readonly) NSCloudKitMirroringInitializeSchemaRequest *pendingInitializeSchemaRequest;
@property (nonatomic, readonly) NSCloudKitMirroringExportProgressRequest *pendingExportProgressRequest;

- (void)dealloc;
- (id)duplicateRequestErrorForRequest:(id)arg1;
- (_Bool)enqueueRequest:(id)arg1 error:(id *)arg2;
- (id)dequeueNextRequest;
- (void)requestFinished:(id)arg1;
- (id)dequeueAllPendingRequests;

@end
