/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPQueueFeeder.h>

@class ICUserIdentity, MPAVItem, MPCModelGenericAVItemUserIdentityPropertySet, MPCModelPlaybackContext, MPCPlaybackRequestEnvironment, MPIdentifierSet, MPModelGenericObject, MPModelRequest, MPModelResponse, MPRequestResponseController, NSDictionary, NSHashTable, NSLock, NSObject, NSString;

@protocol MPCModelPlaybackRequest, MPCModelPlaybackResponse, MPMutableIdentifierListSection, OS_dispatch_queue;

@interface MPCModelQueueFeeder : MPQueueFeeder

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_diffQueue;
    NSLock *_diffLock;
    NSHashTable *_activeModelGenericAVItems;
    NSDictionary *_assetStoreFronts;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    NSDictionary *_endTimeModifications;
    CDUnknownBlockType _loadingCompletionHandler;
    MPRequestResponseController *_requestController;
    MPModelRequest<MPCModelPlaybackRequest> *_request;
    MPModelResponse<MPCModelPlaybackResponse> *_response;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    _Bool _isSiriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    ICUserIdentity *_proactiveCacheIdentity;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    id <MPMutableIdentifierListSection> _section;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPAVItem *_currentItem;
    MPCModelPlaybackContext *_playbackContext;
    MPModelGenericObject *_fallbackSectionRepresentation;
}

@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (nonatomic, readonly) _Bool containsLiveStream;
@property (nonatomic, readonly) _Bool containsTransportableContent;

+ (id)requiredPropertiesForStaticMediaClips;

- (id)init;
- (void)dealloc;
- (id)uniqueIdentifier;
- (id)modelPlayEvent;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)playbackInfoForItem:(id)arg1;
- (_Bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)willBeginLoadingRequestForController:(id)arg1;
- (void)didFinishLoadingRequestForController:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)itemDidBeginPlayback:(id)arg1;
- (_Bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
- (id)firstItemIntersectingIdentifierSet:(id)arg1;
- (void)_updateProactiveCaching;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)arg1;
- (id)_supplementalLibraryRequest;
- (id)updatedPlaybackContext;

@end
