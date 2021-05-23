/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPArtworkCatalog, MPMediaItem, MPMusicPlayerQueueDescriptor, MPRequestResponseController, MPVolumeController, NSMutableDictionary, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MPMusicPlayerController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_group> *_pendingRequestGroup;
    MPMusicPlayerQueueDescriptor *_pendingQueueDescriptor;
    _Bool _hasTracklistUIDChangedWhilePreparingToPlay;
    CDUnknownBlockType _pendingPrepareCompletion;
    NSMutableDictionary *_responseValidators;
    MPArtworkCatalog *_previousArtworkCatalog;
    _Bool _hasPreparedToPlay;
    MPMediaItem *_pendingNowPlayingItem;
    NSObject<OS_dispatch_queue> *_pendingPrepareCalloutQueue;
    _Bool _legacyClient;
    NSString *_clientIdentifier;
    MPMusicPlayerQueueDescriptor *_queueDescriptor;
    MPVolumeController *_volumeController;
    MPRequestResponseController *_requestController;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly, getter=isLegacyClient) _Bool legacyClient;
@property (retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (retain, nonatomic) MPVolumeController *volumeController;
@property (retain, nonatomic) MPRequestResponseController *requestController;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) float volume;
@property (copy, nonatomic) MPMediaItem *nowPlayingItem;
@property (nonatomic, readonly) unsigned long long indexOfNowPlayingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

+ (id)supportedProperties;
+ (id)systemMusicPlayer;
+ (_Bool)_isPlayerInstalled;
+ (id)applicationMusicPlayer;
+ (id)applicationQueuePlayer;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)iPodMusicPlayer;

- (void)pause;
- (void)stop;
- (void)shuffle;
- (void)play;
- (unsigned long long)numberOfItems;
- (void)prepareToPlay;
- (id)initWithClientIdentifier:(id)arg1;
- (long long)playbackSpeed;
- (void)setPlaybackSpeed:(long long)arg1;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (void)willBeginLoadingRequestForController:(id)arg1;
- (void)didFinishLoadingRequestForController:(id)arg1;
- (void)openToPlayQueueDescriptor:(id)arg1;
- (id)_initWithClientIdentifier:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithStoreIDs:(id)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)prependQueueDescriptor:(id)arg1;
- (void)appendQueueDescriptor:(id)arg1;
- (void)prepareToPlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (unsigned long long)currentChapterIndex;
- (_Bool)isGeniusAvailable;
- (_Bool)isGeniusAvailableForSeedItems:(id)arg1;
- (_Bool)isNowPlayingItemFromGeniusMix;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (void)prepareQueueForPlayback;
- (id)queueAsRadioStation;
- (_Bool)setQueueWithSeedItems:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setQueueWithRadioStation:(id)arg1;
- (void)skipToBeginningOrPreviousItem;
- (_Bool)userQueueModificationsDisabled;
- (void)setUserQueueModificationsDisabled:(_Bool)arg1;
- (void)adjustLoadedQueueRangeToReverseCount:(long long)arg1 forwardCount:(long long)arg2;
- (id)nowPlayingItemAtIndex:(unsigned long long)arg1;
- (id)queueAsQuery;
- (void)setVolumePrivate:(float)arg1;
- (void)_preflightRequestIfNeeded;
- (void)_queueDidChangeWithResponse:(id)arg1;

@end
