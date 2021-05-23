/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@class MPMediaItem, NSDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasValidMediaItemValuesForProperties;
    _Bool _hasEvaluatedOfflineHLS;
    _Bool _isOfflineHLS;
    MPMediaItem *_mediaItem;
    NSDictionary *_mediaItemValuesForProperties;
    NSDictionary *_playbackKeys;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (retain, nonatomic, getter=_writeQueue) NSObject<OS_dispatch_queue> *writeQueue;
@property (retain, nonatomic) MPMediaItem *mediaItem;

+ (id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7;
+ (id)_highQualityCachedAssetDestinationDirectory;
+ (id)_lowQualityCachedAssetDestinationDirectory;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)contentType;
- (long long)downloadIdentifier;
- (long long)endpointType;
- (id)artistName;
- (double)bookmarkTime;
- (_Bool)isExplicitTrack;
- (id)copyrightText;
- (long long)storeSubscriptionAdamID;
- (id)modelGenericObject;
- (unsigned long long)storeAccountID;
- (id)composerName;
- (_Bool)showComposer;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (_Bool)allowsInitiatingPlayWhileDownload;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)contentTitle;
- (double)expectedDuration;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (id)buyParameters;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)_mediaItemValuesForProperties;
- (id)initWithMediaItem:(id)arg1;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(_Bool *)arg3;
- (_Bool)prefersStoreContentInfo;
- (id)hlsPlaylistURLString;
- (id)hlsOfflinePlaybackKeys;
- (_Bool)isOfflineHLS;
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
- (float)volumeNormalization;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(_Bool)arg1 returningAssetQuality:(unsigned long long *)arg2 protectionType:(unsigned long long *)arg3 usesPurchaseBundle:(_Bool *)arg4;
- (void)_invalidateMediaItemProperties;
- (id)_onqueue_mediaItemValuesForProperties;

@end
