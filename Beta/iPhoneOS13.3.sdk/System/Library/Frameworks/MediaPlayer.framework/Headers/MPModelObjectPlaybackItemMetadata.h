/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@class MPModelFileAsset, MPModelHomeSharingAsset, MPModelPlaybackPosition, MPModelStoreAsset, NSObject;

@protocol MPModelObjectPlaybackItemMetadataDelegate, OS_dispatch_queue;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata

{
    NSObject<OS_dispatch_queue> *_writeQueue;
    id <MPModelObjectPlaybackItemMetadataDelegate> _modelObjectDelegate;
    MPModelPlaybackPosition *_playbackPosition;
}

@property (nonatomic, readonly) MPModelFileAsset *localFileAsset;
@property (nonatomic, readonly) MPModelHomeSharingAsset *homeSharingAsset;
@property (nonatomic, readonly) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, readonly) MPModelStoreAsset *storeAsset;
@property (weak, nonatomic) id <MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate;

+ (id)requiredProperties;
+ (_Bool)_shouldRespectStoreCellularDataSetting;
+ (_Bool)_shouldRespectMusicCellularDataSetting;
+ (id)requiredHomeSharingAssetProperties;
+ (id)requiredLocalFileAssetProperties;
+ (id)requiredPlaybackPositionProperties;
+ (id)requiredStoreAssetProperties;

- (id)init;
- (void)dealloc;
- (long long)downloadIdentifier;
- (long long)endpointType;
- (double)bookmarkTime;
- (unsigned long long)storeAccountID;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)buyParameters;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(_Bool *)arg3;
- (_Bool)isSubscriptionRequired;
- (id)iTunesStoreContentID;
- (id)iTunesStoreContentDSID;
- (id)localNetworkContentURL;
- (long long)mediaLibraryPersistentID;
- (id)protectedContentSupportStorageURL;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldRememberBookmarkTime;
- (_Bool)shouldReportPlayEventsToStore;
- (id)storeUbiquitousIdentifier;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(_Bool)arg1 returningAssetQuality:(unsigned long long *)arg2 protectionType:(unsigned long long *)arg3 usesPurchaseBundle:(_Bool *)arg4;
- (_Bool)allowsAssetCaching;
- (void)loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
