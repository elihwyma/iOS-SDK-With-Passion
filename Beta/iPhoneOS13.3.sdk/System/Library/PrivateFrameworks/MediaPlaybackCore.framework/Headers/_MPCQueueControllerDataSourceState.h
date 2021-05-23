/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPPlaceholderAVItem, MPPlaybackContext, NSString;

@protocol MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring;

@interface _MPCQueueControllerDataSourceState : NSObject <Swift>

{
    struct {
        unsigned int dataSourcePlaceholderItemForLoadingAdditionalItemsInSection:1;
        unsigned int dataSourceSupplementalPlaybackContextWithReason:1;
        unsigned int dataSourceSupplementalPlaybackContextBehavior:1;
        unsigned int dataSourceCanSkipItem:1;
        unsigned int dataSourceFirstItemIntersectingIdentifierSet:1;
        unsigned int dataSourceItemDidBeginPlayback:1;
        unsigned int dataSourceShouldRequestAdditionalItemsWhenReachingTailOfSection:1;
        unsigned int dataSourceShouldUsePlaceholderForItemInSection:1;
        unsigned int dataSourceSectionShouldShuffleExcludeItem:1;
        unsigned int dataSourceUpdatedPlaybackContext:1;
    } _supportedMethods;
    _Bool _frozen;
    struct os_unfair_lock_s _stateLock;
    MPPlaceholderAVItem *_tailPlaceholderItem;
    id <MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring> _dataSource;
    MPPlaybackContext *_playbackContext;
    MPPlaybackContext *_originalPlaybackContext;
    long long _state;
    NSString *_sectionIdentifier;
    NSString *_preferredStartItemIdentifier;
    long long _supplementalPlaybackContextBehavior;
    MPPlaybackContext *_supplementalPlaybackContext;
}

@property (nonatomic, readonly) struct os_unfair_lock_s stateLock;
@property (nonatomic, readonly) long long supplementalPlaybackContextBehavior;
@property (nonatomic, readonly) MPPlaybackContext *supplementalPlaybackContext;
@property (nonatomic, readonly) id <MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring> dataSource;
@property (nonatomic, readonly) MPPlaybackContext *playbackContext;
@property (nonatomic, readonly) _Bool shouldAddOriginalPlaybackContextAfterReplacement;
@property (nonatomic, readonly) MPPlaybackContext *originalPlaybackContext;
@property (nonatomic) long long state;
@property (nonatomic, getter=isFrozen) _Bool frozen;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) NSString *preferredStartItemIdentifier;
@property (nonatomic, readonly) MPPlaceholderAVItem *tailPlaceholderItem;
@property (nonatomic, readonly) _Bool containsLiveStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;
- (id)initWithPlaybackContext:(id)arg1;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)itemDidBeginPlayback:(id)arg1;
- (_Bool)canSkipItem:(id)arg1;
- (_Bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
- (id)firstItemIntersectingIdentifierSet:(id)arg1;
- (_Bool)shouldRequestAdditionalItemsAtTail;
- (void)_buildPlaceholder;
- (void)_inLock_buildPlaceholder;
- (_Bool)shouldShowPlaceholderAtTail;
- (void)loadAdditionalItemsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePlaybackContext;

@end
