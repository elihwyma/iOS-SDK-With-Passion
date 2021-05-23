/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPQueueFeeder.h>

@class ICStoreRequestContext, ICUserIdentity, ICUserIdentityStore, MPAVItem, MPCModelRadioPersonalizationResponse, MPCModelRadioPlaybackQueue, MPCPlaybackRequestEnvironment, NSDictionary, NSObject, NSString, SSVPlayActivityController;

@protocol MPMutableIdentifierListSection, OS_dispatch_queue;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder

{
    id <MPMutableIdentifierListSection> _section;
    MPCModelRadioPlaybackQueue *_playbackQueue;
    NSObject<OS_dispatch_queue> *_diffQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    MPAVItem *_currentItem;
    _Bool _hasReachedTracklistEnd;
    NSString *_lastCleanPlayedIdentifier;
    NSString *_lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse *_lastResponse;
    _Bool _mayHaveRestrictedContent;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _queueGeneration;
    NSString *_siriAssetInfo;
    ICUserIdentityStore *_observedIdentityStore;
    ICUserIdentity *_proactiveCacheIdentity;
    ICStoreRequestContext *_storeRequestContext;
    SSVPlayActivityController *_playActivityController;
    CDUnknownBlockType _finalTracklistLoadingCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (nonatomic, readonly) _Bool containsLiveStream;
@property (nonatomic, readonly) _Bool containsTransportableContent;

+ (id)sharedQueue;

- (id)init;
- (void)dealloc;
- (long long)itemCount;
- (id)modelPlayEvent;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didSignificantlyChangeItem:(id)arg1;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)itemDidBeginPlayback:(id)arg1;
- (_Bool)canSkipItem:(id)arg1;
- (_Bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;
- (void)loadAdditionalItemsForSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;
- (void)_updateProactiveCaching;
- (void)_endObservingIdentityStoreForSignOut;
- (id)_startPlaybackRequestWithPlaybackContext:(id)arg1;
- (void)_loadTracksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;
- (void)_detectSignOutForIdentityStore:(id)arg1;
- (void)_responseDidInvalidate;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;
- (id)_errorForRequest:(id)arg1 withError:(id)arg2;
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_observePersonalizationResponse:(id)arg1;
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1;
- (void)_beginObservingIdentityStoreForSignOut;
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_removeRestrictedTracks;
- (void)_repersonalizeCurrentTracks;

@end
