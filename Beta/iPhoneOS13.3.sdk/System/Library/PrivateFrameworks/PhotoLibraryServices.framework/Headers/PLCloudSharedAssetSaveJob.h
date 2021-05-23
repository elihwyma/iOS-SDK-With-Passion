/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, MSASAssetCollection, NSArray, NSDictionary, NSMutableArray, NSString;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob

{
    _Bool _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    NSMutableArray *_pendingDownloadNotifications;
    _Bool _isVideo;
    _Bool _isPhotoIris;
    NSString *_currentFilePath;
    NSString *_currentCloudAssetGUID;
    unsigned long long _currentCloudAssetMediaAssetType;
    NSString *_cloudAlbumGUID;
    NSString *_cloudPersonID;
    MSASAssetCollection *_currentCloudAssetCollection;
    NSArray *_assetCollectionInfos;
    NSArray *_cloudAssetGUIDsToDelete;
    long long _jobType;
    NSDictionary *_mstreamdInfoDictionary;
}

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;
@property (retain, nonatomic) NSString *currentFilePath;
@property (retain, nonatomic) NSString *currentCloudAssetGUID;
@property (nonatomic) unsigned long long currentCloudAssetMediaAssetType;
@property (retain, nonatomic) NSString *cloudAlbumGUID;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection;
@property (retain, nonatomic) NSArray *assetCollectionInfos;
@property (nonatomic) _Bool isVideo;
@property (nonatomic) _Bool isPhotoIris;
@property (retain, nonatomic) NSArray *cloudAssetGUIDsToDelete;

+ (id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned long long)arg2;
+ (_Bool)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3 assetUUID:(id)arg4;
+ (id)newCloudSharedAssetSaveJobFromAProcessThatIsNotAssetsd;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
+ (void)assetsdProcessMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5;
+ (void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 mediaAssetType:(unsigned long long)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(_Bool)arg7;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (id)_dcimDirectoryForFileURL:(id)arg1;

- (void)dealloc;
- (void)run;
- (id)description;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (id)initWithAssetsdClient:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (void)setupSaveAssetMetadataForCollectionsJobForAssetCollections:(id)arg1 album:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (id)_lowPriorityOperationQueue;
- (id)_highPriorityOperationQueue;
- (_Bool)isProcessingThumbnail;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)arg1;
- (void)executeDaemonOperationSaveAssetJobType;
- (id)_createPlaceHolderInSharedAlbum:(id)arg1;
- (_Bool)_parseISO6709String:(id)arg1 outLatitude:(double *)arg2 outLongitude:(double *)arg3;
- (void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3;
- (_Bool)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2;
- (void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (short)attemptLightweightReimportAssetData;
- (void)_addDownloadNotification:(id)arg1;
- (void)_performSaveTransactionAndWaitOnLibrary:(id)arg1 transaction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (_Bool)_processInflightAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2;
- (void)_prefetchLimitForDerivatives:(long long *)arg1 thumbnails:(long long *)arg2;
- (void)_incrementDerivativesCount:(long long)arg1 thumbnailsCount:(long long)arg2;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (unsigned long long)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;

@end
