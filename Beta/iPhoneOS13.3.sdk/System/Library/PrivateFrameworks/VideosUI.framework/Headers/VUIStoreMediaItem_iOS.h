/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryMediaItem_iOS.h>

@class NSDictionary, NSError, NSNumber, NSObject, NSString, NSURL, VUIStoreDownloadMonitor, VUIStoreFPSKeyLoader;

__attribute__((visibility("hidden")))
@interface VUIStoreMediaItem_iOS : VUILibraryMediaItem_iOS

{
    _Bool _needsRentalCheckin;
    NSNumber *_startTime;
    NSURL *_fpsCertificateURL;
    NSURL *_fpsKeyServerURL;
    NSDictionary *_fpsAdditionalServerParams;
    unsigned long long _loadingContext;
    NSDictionary *_sinfsDict;
    NSNumber *_fileSize;
    NSURL *_downloadDestinationURL;
    NSNumber *_downloadToken;
    VUIStoreFPSKeyLoader *_storeFPSKeyLoader;
    long long _playbackType;
    NSURL *_playbackURL;
    VUIStoreDownloadMonitor *_downloadMonitor;
    NSObject *_parentReportingToken;
    NSString *_alternateAssetURLString;
    NSError *_fpsKeyError;
}

@property (nonatomic) unsigned long long loadingContext;
@property (retain, nonatomic) NSDictionary *sinfsDict;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSURL *downloadDestinationURL;
@property (retain, nonatomic) NSNumber *downloadToken;
@property (retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader;
@property (nonatomic) long long playbackType;
@property (retain, nonatomic) NSURL *playbackURL;
@property (retain, nonatomic) VUIStoreDownloadMonitor *downloadMonitor;
@property (nonatomic) _Bool needsRentalCheckin;
@property (retain, nonatomic) NSObject *parentReportingToken;
@property (retain, nonatomic) NSString *alternateAssetURLString;
@property (retain, nonatomic) NSError *fpsKeyError;
@property (nonatomic) NSNumber *startTime;
@property (nonatomic, readonly, getter=isStreamingHLS) _Bool streamingHLS;
@property (copy, nonatomic) NSURL *fpsCertificateURL;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)_rentalExpirationDate;
- (id)mediaItemURL;
- (id)initWithAdamID:(long long)arg1;
- (id)initWithMPMediaItem:(id)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
- (_Bool)hasTrait:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (id)reportingDelegate;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForPlaybackInitiationWithCompletion:(CDUnknownBlockType)arg1;
- (id)replacementErrorForPlaybackError:(id)arg1;
- (void)mediaItemAllInitialLoadingComplete:(id)arg1 totalTime:(double)arg2 player:(id)arg3;
- (void)cleanUpMediaItem;
- (void)_externalPlaybackTypeDidChange:(id)arg1;
- (_Bool)_loadingCancelled:(unsigned long long)arg1;
- (void)_userPlaybackSettingsDidChange:(id)arg1;
- (_Bool)_allowedToPlayWhileOnCellularNetwork;
- (id)_adamIDString;
- (id)_iTunesStoreContentInfo;
- (id)_videoPlaybackTypeDescription;
- (void)_configureForStreamingPlaybackWithCompletion:(CDUnknownBlockType)arg1;
- (void)_configureForLocalPlaybackWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_downloadForThisMediaItemReturningDownloadManager:(id *)arg1;
- (void)_configureForPlaybackFromExistingDownload:(id)arg1 downloadManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_checkoutRentalWithCheckoutType:(unsigned long long)arg1 startPlaybackClock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_checkInRental;
- (void)_deleteDownloadKeyCookieForURL:(id)arg1;
- (void)_updateRentalPlaybackStartDate:(id)arg1;
- (id)_offlineKeyDataForKeyRequest:(id)arg1;
- (void)_persistOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2;
- (void)_setDownloadKeyCookieWithURL:(id)arg1 downloadKey:(id)arg2;
- (void)_performStreamingRedownloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)_iTunesStoreContentPurchasedMediaKind;
- (id)_rentalPlaybackEndDate;
- (id)_rentalEndDate;

@end
