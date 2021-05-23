/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCreationRequest.h>

@class NSXPCConnection, PLClientServerTransaction;

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest

{
    PLClientServerTransaction *_serverTransaction;
    long long _placeholderCreationMode;
    NSXPCConnection *_clientConnection;
}

@property (weak, nonatomic, readonly) NSXPCConnection *clientConnection;

+ (_Bool)_shouldCopySpatialOverCaptureResourcesMetadataCopyOptions:(id)arg1;
+ (_Bool)_shouldCopyTitleDescriptionAndKeywordsForMetadataCopyOptions:(id)arg1;
+ (_Bool)_shouldBakeInAdjustmentsAndFlattenLivePhoto:(_Bool *)arg1 forSourceAsset:(id)arg2 adjustmentBakeInOptions:(id)arg3;

- (void)changeFailedOnClientWithLibrary:(id)arg1 error:(id)arg2;
- (void)changeFailedOnDaemonWithLibrary:(id)arg1 error:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1;
- (void)_setDestinationAssetAvailabilityHandler:(CDUnknownBlockType)arg1;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id *)arg3;
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg1;

@end
