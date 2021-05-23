/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSDictionary, NSError, NSNumber, NSObject, NSString, NSURL, TVPPlayer, VUIMutableBookmark, VUIStoreFPSKeyLoader, VUIVideoManagedObject;

@interface VUIStoreAuxMediaItem : TVPBaseMediaItem

{
    _Bool _isAudioOnly;
    _Bool _disableResumeMenu;
    _Bool _disableScrubbing;
    _Bool _sharedPurchase;
    _Bool _ignoreExistingOfflineKeyData;
    _Bool _isHLS;
    _Bool _isForStartingDownload;
    NSURL *_fpsCertificateURL;
    NSURL *_fpsKeyServerURL;
    NSDictionary *_fpsAdditionalServerParams;
    NSString *_bookmarkID;
    NSNumber *_bookmarkOverrideTime;
    NSURL *_url;
    VUIMutableBookmark *_bookmark;
    TVPPlayer *_scrubPlayer;
    VUIStoreFPSKeyLoader *_storeFPSKeyLoader;
    NSError *_fpsKeyError;
    NSObject *_parentReportingToken;
    long long _playbackType;
    VUIVideoManagedObject *_videoManagedObject;
}

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) VUIMutableBookmark *bookmark;
@property (retain, nonatomic) TVPPlayer *scrubPlayer;
@property (retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader;
@property (retain, nonatomic) NSError *fpsKeyError;
@property (retain, nonatomic) NSObject *parentReportingToken;
@property (nonatomic) long long playbackType;
@property (nonatomic) _Bool isHLS;
@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (nonatomic) _Bool isForStartingDownload;
@property (copy, nonatomic) NSURL *fpsCertificateURL;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (nonatomic) _Bool isAudioOnly;
@property (copy, nonatomic) NSString *bookmarkID;
@property (copy, nonatomic) NSNumber *bookmarkOverrideTime;
@property (nonatomic) _Bool disableResumeMenu;
@property (nonatomic) _Bool disableScrubbing;
@property (nonatomic) _Bool sharedPurchase;
@property (nonatomic) _Bool ignoreExistingOfflineKeyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)mediaItemURL;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (_Bool)hasTrait:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateOfflineKeyWithIdentifier:(id)arg1 updatedOfflineKeyData:(id)arg2;
- (id)reportingDelegate;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (id)replacementErrorForPlaybackError:(id)arg1;
- (void)mediaItem:(id)arg1 errorDidOccur:(id)arg2 player:(id)arg3;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)cleanUpMediaItem;
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1;
- (id)initWithVideoManagedObject:(id)arg1 isForStartingDownload:(_Bool)arg2 externalBookmarkTime:(id)arg3 externalBookmarkTimeStamp:(id)arg4;
- (void)_userPlaybackSettingsDidChange:(id)arg1;
- (id)_offlineKeyDataForKeyRequest:(id)arg1;
- (void)_scrubPlayerItemDidLoad:(id)arg1;
- (id)_replacementErrorForSharedPurchasePlaybackError:(id)arg1;
- (id)_replacementErrorForPlaybackError:(id)arg1;
- (void)_keepKeyLoaderAlive:(id)arg1;

@end
