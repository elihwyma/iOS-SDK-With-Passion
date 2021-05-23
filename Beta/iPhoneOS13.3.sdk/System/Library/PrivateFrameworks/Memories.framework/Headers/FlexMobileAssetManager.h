/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FlexCloudManager.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface FlexMobileAssetManager : FlexCloudManager

{
    NSString *_clientID;
    NSString *_mobileAssetTypeIdentifier;
    NSObject *_downloadThrottleLock;
    NSMutableOrderedSet *_pendingDownloadSet;
    NSMutableDictionary *_pendingDownloadMapping;
    NSMutableSet *_processedDownloadSet;
    NSMutableDictionary *_processedDownloadMapping;
    NSObject<OS_dispatch_queue> *_purgeQueue;
    NSObject<OS_dispatch_queue> *_downloadQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purgeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;

+ (id)assetWithNewestContentVersionInAssets:(id)arg1 preferInstalled:(_Bool)arg2;
+ (id)compatibilityFilterPredicate;

- (void)_purgeAsset:(id)arg1;
- (id)_metadataMappingForUUIDSet:(id)arg1;
- (void)_processResults:(id)arg1 metadataMapping:(id)arg2;
- (void)_loadBundledArtworkForSongID:(id)arg1;
- (void)cancelDownloadOfAsset:(id)arg1;
- (void)_loadBundledSongForSongID:(id)arg1;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;
- (id)loadCachedSongs;
- (void)fetchAllSongsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (void)requestDownloadOfAsset:(id)arg1 withOptions:(id)arg2;
- (void)cancelDownloadOfAllAssets;
- (void)requestPurgeOfAsset:(id)arg1;
- (unsigned long long)assetStatus:(id)arg1;
- (id)_queryAssetsWithClientIDForAssetType:(id)arg1 predicates:(id)arg2;
- (id)filteredResults:(id)arg1 forMetadataMapping:(id)arg2;
- (void)_updateWithLocalArtwork;
- (void)_makeBundledArtworkCloudBacked;
- (long long)_responseForError:(id)arg1;
- (id)_queryAssetsWithClientIDForAssetType:(id)arg1 songUID:(id)arg2 predicates:(id)arg3;
- (void)_runAsyncAssetDownloadQuery:(id)arg1 existingSong:(id)arg2 cloudAsset:(id)arg3;
- (id)_newQueryDictForQuery:(id)arg1 songUID:(id)arg2 existingSong:(id)arg3 asset:(id)arg4;
- (void)_runNextAsyncAssetDownloadQuery;
- (id)mobileAssetForSongAsset:(id)arg1;
- (unsigned long long)_statusForAssetState:(long long)arg1;
- (void)_processArtwork;
- (id)_queryLocalAssetInformation;
- (_Bool)_isCompatible:(id)arg1;

@end
