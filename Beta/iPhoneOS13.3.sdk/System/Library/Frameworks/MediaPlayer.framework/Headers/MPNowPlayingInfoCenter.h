/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPArtworkResizeUtility, MPMRNowPlayingPlayerPathWrapper, MPNowPlayingContentItem, MPNowPlayingInfoCenterArtworkContext, MSVLRUDictionary, MSVTimer, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@protocol MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDataSource, MPNowPlayingPlaybackQueueDelegate, OS_dispatch_queue;

@interface MPNowPlayingInfoCenter : NSObject

{
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPNowPlayingInfoCenterArtworkContext *_publishedContext;
    NSMutableDictionary *_mutatedContentItems;
    NSMutableDictionary *_mutatedPlaybackQueueRequests;
    struct _MSVSignedRange _loadedContentItemsRange;
    struct _MSVSignedRange _requestedContentItemsRange;
    NSMutableArray *_contentItemIdentifiers;
    MSVLRUDictionary *_contentItems;
    MPNowPlayingContentItem *_nowPlayingContentItem;
    unsigned long long _playbackState;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    MPArtworkResizeUtility *_artworkResizeUtility;
    MSVTimer *_contentItemInvalidationTimer;
    id <MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
    id <MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
    struct {
        void *createPlaybackQueue;
        void *createContentItem;
        void *createChildItem;
        void *metadata;
        void *artwork;
        void *info;
        void *languageOptions;
        void *lyrics;
    } _callbacks;
    void *_fallbackActivity;
    unsigned long long _stateHandle;
    MPMRNowPlayingPlayerPathWrapper *_playerPath;
    id <MPNowPlayingPlaybackQueueDelegate> _playbackQueueDelegate;
    NSString *_playerID;
    NSString *_representedApplicationBundleIdentifier;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
}

@property (nonatomic, readonly) MPMRNowPlayingPlayerPathWrapper *playerPath;
@property (nonatomic, readonly) _Bool supportsArtworkCatalogLoading;
@property (weak, nonatomic) id <MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate;
@property (nonatomic, readonly) NSString *playerID;
@property (copy, nonatomic) NSString *representedApplicationBundleIdentifier;
@property (weak, nonatomic) id <MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
@property (retain, nonatomic) MPNowPlayingContentItem *nowPlayingContentItem;
@property (weak, nonatomic) id <MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (nonatomic) unsigned long long playbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultCenter;
+ (id)serviceQueue;
+ (id)infoCenterForPlayerID:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_contentItemChangedNotification:(id)arg1;
- (CDUnknownBlockType)artworkCatalogBlockForContentItem:(id)arg1;
- (id)initWithPlayerID:(id)arg1;
- (void)becomeActive;
- (void)becomeActiveSystemFallback;
- (void)resignActiveSystemFallback;
- (void)invalidatePlaybackQueue;
- (void)invalidatePlaybackQueueWithCompletion:(CDUnknownBlockType)arg1;
- (id)_artworkCatalogForContentItem:(id)arg1;
- (void)_becomeActiveWithCompletion:(CDUnknownBlockType)arg1;
- (id)_childContentItemForContentItem:(id)arg1 index:(long long)arg2;
- (id)_contentItemIDsInRange:(CDStruct_912cb5d2)arg1 itemsRange:(CDStruct_912cb5d2 *)arg2;
- (id)_contentItemForIdentifier:(id)arg1;
- (id)_contentItemForIdentifier:(id)arg1 alreadyOnDataSourceQueue:(_Bool)arg2;
- (void *)_createPlaybackQueueForRequest:(void *)arg1;
- (void)_getMetadataForContentItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getTransportablePlaybackSessionRepresentationWithIdentifier:(id)arg1 preferredSessionType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidatePlaybackQueueImmediatelyWithCompletion:(CDUnknownBlockType)arg1;
- (id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg1;
- (void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
- (void)_onQueue_registerLyricsDelegateCallbacks:(id)arg1;
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg1;
- (void)_onQueue_pushContentItemsUpdate;
- (void)_onQueue_pushNowPlayingInfoAndRetry:(_Bool)arg1;
- (void)_initializeNowPlayingInfo;

@end
