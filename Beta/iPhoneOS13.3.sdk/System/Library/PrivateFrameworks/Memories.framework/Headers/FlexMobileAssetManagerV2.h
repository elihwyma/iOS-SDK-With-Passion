/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FlexCloudManager.h>

@class NSMapTable, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface FlexMobileAssetManagerV2 : FlexCloudManager

{
    NSString *_clientID;
    NSString *_mobileAssetTypeIdentifier;
    NSObject *_downloadThrottleLock;
    NSObject *_mobileAssetCacheLock;
    NSMutableOrderedSet *_pendingDownloadSet;
    NSMutableSet *_processingDownloadSet;
    NSMapTable *_dowloadOptionsMapping;
    NSMutableOrderedSet *_pendingPurgeSet;
    NSMutableSet *_processingPurgeSet;
    _Bool _includeArtworkInQueries;
    _Bool _XMLPresent;
    NSObject<OS_dispatch_queue> *_purgeQueue;
    NSObject<OS_dispatch_queue> *_triggerDownloadAndPurgeQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purgeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *triggerDownloadAndPurgeQueue;
@property (nonatomic) _Bool includeArtworkInQueries;
@property (nonatomic) _Bool XMLPresent;

+ (id)assetWithNewestContentVersionInAssets:(id)arg1 preferInstalled:(_Bool)arg2;
+ (id)_assetURLForMobileAsset:(id)arg1;
+ (id)compatibilityFilterPredicate;

- (void)_purgeAsset:(id)arg1;
- (id)mobileAssetsForAssetPropertyType:(id)arg1 songUID:(id)arg2;
- (_Bool)_mobileAssetIsPurging:(id)arg1;
- (_Bool)_mobileAssetIsDownloading:(id)arg1;
- (void)_requeryForMobileAssetTypes:(unsigned long long)arg1 forUUIDs:(id)arg2;
- (id)_mobileAssetQueryResultStringValue:(long long)arg1;
- (id)_metadataMappingForUUIDSet:(id)arg1;
- (void)_updateMetadataOnExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3;
- (void)_requeryForMobileAssetTypes:(unsigned long long)arg1;
- (id)mobileAssetsForAssetPropertyType:(id)arg1;
- (id)_newestContentSetFromAssets:(id)arg1 metadataMapping:(id)arg2;
- (id)filterByClientIDForAssets:(id)arg1 forMetadataMapping:(id)arg2;
- (void)_processResults:(id)arg1 metadataMapping:(id)arg2;
- (id)_mobileAssetDownloadOptionsForClientOptions:(id)arg1;
- (id)_mobileAssetDownloadResultStringValue:(long long)arg1;
- (long long)_responseForDownloadResult:(long long)arg1;
- (void)_updateExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3 forceUpdate:(_Bool)arg4;
- (id)_assetIDForMobileAsset:(id)arg1;
- (id)_existingSongForUID:(id)arg1;
- (void)_updateExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3;
- (void)_loadBundledArtworkForSongID:(id)arg1;
- (void)_runNextAsyncAssetDownloadAndPurge;
- (void)_runAsyncAssetDownloadForMobileAsset:(id)arg1;
- (void)_dispatchNextAsyncAssetDownloadAndPurge;
- (id)_mobileAssetCancelDownloadResultStringValue:(long long)arg1;
- (void)cancelDownloadOfAsset:(id)arg1;
- (void)_loadBundledSongForSongID:(id)arg1;
- (id)_mobileAssetPurgeResultStringValue:(long long)arg1;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;
- (id)loadCachedSongs;
- (void)fetchAllSongsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (void)requestDownloadOfAsset:(id)arg1 withOptions:(id)arg2;
- (void)cancelDownloadOfAllAssets;
- (void)requestPurgeOfAsset:(id)arg1;
- (unsigned long long)assetStatus:(id)arg1;

@end
