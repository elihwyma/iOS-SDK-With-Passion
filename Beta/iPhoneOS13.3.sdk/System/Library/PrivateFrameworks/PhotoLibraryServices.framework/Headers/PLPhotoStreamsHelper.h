/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPhotoStreamsHelper : NSObject

{
    _Bool _appHasPolledOnceThisForegroundSession;
}

+ (id)iCloudServiceAccount;
+ (_Bool)photoStreamsEnabledForPhotoLibraryURL:(id)arg1;
+ (_Bool)_photoStreamsEnabled;
+ (id)sharedPhotoStreamsHelper;
+ (_Bool)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;
+ (void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg1 withReason:(id)arg2 jobStreamID:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)arg1;
- (void)clearCachedAccountState;
- (void)_clearPhotoStreamAccountSettings;
- (void)_appDidEnterBackground:(id)arg1;
- (id)photoStreamsPublishStreamID;
- (id)psHashForData:(id)arg1;
- (id)psHashAsString:(id)arg1;
- (id)lastPhotoStreamUpdateDate;
- (_Bool)removeBreadcrumbsForHashString:(id)arg1;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;
- (_Bool)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3;
- (_Bool)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id *)arg5;
- (_Bool)dequeueAssetsForPSPublishing:(id)arg1;
- (void)pollForNewSubscriptionContent;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (_Bool)shouldPublishScreenShots;
- (long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;
- (id)imageLimitsByAssetType;
- (long long)maxPixelSizeForDerivative;
- (long long)imageLimitForOwnStream;
- (long long)imageLimitForFriendStream;
- (long long)friendsLimit;
- (id)temporaryPathForConvertedAssetWithUUID:(id)arg1;
- (id)temporaryPathForRecentlyUploadedAsset:(id)arg1;
- (struct CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(_Bool)arg3;
- (void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2;
- (void)resetServerState;
- (id)pause_mstreamd;
- (void)resume_mstreamd:(id)arg1;
- (void)initiateDeletionOfPhotoStreamAssets:(id)arg1;
- (void)initiateDeletionOfOriginalAssets:(id)arg1;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)fetchMPSStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleMPSStateIfNecessary;

@end
