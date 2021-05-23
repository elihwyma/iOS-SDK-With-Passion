/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaItem, MPModelGenericObject, NSDictionary, NSNumber, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface MPMediaPlaybackItemMetadata : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _allowsCellularNetworking;
    _Bool _allowsInitiatingPlayWhileDownload;
    _Bool _isExplicitTrack;
    _Bool _requiresPlayWhileDownload;
    _Bool _showComposer;
    _Bool _shouldReportPlayEventsToStore;
    _Bool _shouldRememberBookmarkTime;
    _Bool _subscriptionRequired;
    _Bool _prefersStoreContentInfo;
    _Bool _offlineHLS;
    float _volumeNormalization;
    NSString *_albumArtistName;
    long long _albumStoreAdamID;
    NSString *_albumTitle;
    NSString *_artistName;
    long long _artistStoreAdamID;
    NSString *_buyParameters;
    NSString *_composerName;
    NSString *_contentTitle;
    unsigned long long _contentType;
    NSString *_copyrightText;
    long long _downloadIdentifier;
    long long _endpointType;
    double _expectedDuration;
    NSString *_genreTitle;
    NSURL *_localNetworkContentURL;
    MPMediaItem *_mediaItem;
    long long _mediaLibraryPersistentID;
    MPModelGenericObject *_modelGenericObject;
    NSURL *_protectedContentSupportStorageURL;
    double _bookmarkTime;
    NSString *_storeUbiquitousIdentifier;
    unsigned long long _storeAccountID;
    long long _storeAdamID;
    long long _storeSubscriptionAdamID;
    unsigned long long _storeSagaID;
    NSNumber *_iTunesStoreContentID;
    NSNumber *_iTunesStoreContentDSID;
    NSNumber *_rentalIdentifier;
    NSDictionary *_hlsOfflinePlaybackKeys;
    NSString *_hlsPlaylistURLString;
}

@property (nonatomic, readonly) _Bool prefersStoreContentInfo;
@property (nonatomic, readonly, getter=_rentalIdentifier) NSNumber *rentalIdentifier;
@property (nonatomic, readonly) NSDictionary *hlsOfflinePlaybackKeys;
@property (nonatomic, readonly, getter=isOfflineHLS) _Bool offlineHLS;
@property (copy, nonatomic, readonly) NSString *hlsPlaylistURLString;
@property (nonatomic, readonly) _Bool allowsCellularNetworking;
@property (nonatomic, readonly) _Bool allowsInitiatingPlayWhileDownload;
@property (copy, nonatomic, readonly) NSString *albumArtistName;
@property (nonatomic, readonly) long long albumStoreAdamID;
@property (copy, nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) _Bool allowsAssetCaching;
@property (copy, nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) long long artistStoreAdamID;
@property (nonatomic, readonly) NSString *buyParameters;
@property (copy, nonatomic, readonly) NSString *composerName;
@property (copy, nonatomic, readonly) NSString *contentTitle;
@property (nonatomic, readonly) unsigned long long contentType;
@property (copy, nonatomic, readonly) NSString *copyrightText;
@property (nonatomic, readonly) long long downloadIdentifier;
@property (nonatomic, readonly) long long endpointType;
@property (nonatomic, readonly) double expectedDuration;
@property (copy, nonatomic, readonly) NSString *genreTitle;
@property (copy, nonatomic, readonly) NSDictionary *additionalHTTPHeaderFields;
@property (nonatomic, readonly) _Bool isExplicitTrack;
@property (nonatomic, readonly) long long likedState;
@property (copy, nonatomic, readonly) NSURL *localNetworkContentURL;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic, readonly) long long mediaLibraryPersistentID;
@property (nonatomic, readonly) MPModelGenericObject *modelGenericObject;
@property (copy, nonatomic, readonly) NSURL *protectedContentSupportStorageURL;
@property (nonatomic, readonly) _Bool requiresPlayWhileDownload;
@property (nonatomic, readonly) _Bool showComposer;
@property (nonatomic, readonly) _Bool shouldReportPlayEventsToStore;
@property (nonatomic, readonly) double bookmarkTime;
@property (nonatomic, readonly) _Bool shouldRememberBookmarkTime;
@property (copy, nonatomic, readonly) NSString *storeUbiquitousIdentifier;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;
@property (nonatomic, readonly) unsigned long long storeSagaID;
@property (nonatomic, readonly, getter=isSubscriptionRequired) _Bool subscriptionRequired;
@property (nonatomic, readonly) float volumeNormalization;
@property (copy, nonatomic, readonly) NSNumber *iTunesStoreContentID;
@property (copy, nonatomic, readonly) NSString *iTunesStoreContentType;
@property (copy, nonatomic, readonly) NSString *iTunesStoreContentDownloadParameters;
@property (copy, nonatomic, readonly) NSNumber *iTunesStoreContentDSID;
@property (copy, nonatomic, readonly) NSString *iTunesStoreContentPurchasedMediaKind;
@property (copy, nonatomic, readonly) NSString *iTunesStoreContentUserAgent;

+ (_Bool)_shouldRespectStoreCellularDataSetting;
+ (_Bool)_shouldRespectMusicCellularDataSetting;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(_Bool *)arg3;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (long long)likedState:(id)arg1;
- (void)getNetworkConstraintsForDownloadKind:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLikedState:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setLikedState:(long long)arg1 forUserIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)streamingPlaybackPurchaseBundleDestinationFilePathForAssetFilePath:(id)arg1;
- (_Bool)_calculateAllowsCellularNetworking;
- (void)_setNeedsAllowsCellularNetworkingUpdate;
- (_Bool)_requiresPendingItemDownload;
- (id)_storeRedownloadProductItem;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (void)_musicCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_storeCellularNetworkingAllowedDidChangeNotification:(id)arg1;

@end
