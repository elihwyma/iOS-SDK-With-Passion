/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, AVQueuePlayer, MPAVRoute, MPAVRoutingController, NSArray, NSError, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface MPQueuePlayer : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _allowsExternalPlaybackRevisionID;
    MPAVRoutingController *_routingController;
    AVPlayerItem *_currentItem;
    CDStruct_1b6d18a9 _currentTime;
    _Bool _isExternalPlaybackActive;
    _Bool _pausedForPlaybackQueueTransaction;
    MPAVRoute *_lastPickedRoute;
    CDUnknownBlockType _playbackQueueCommitHandler;
    long long _playbackQueueTransactionCount;
    AVQueuePlayer *_player;
    NSMutableArray *_queuedOperations;
    float _rate;
    float _rateBeforePlaybackQueueTransaction;
    _Bool _routeDidChangeDuringPlaybackQueueTransaction;
    long long _status;
    long long _defaultItemEQPresetType;
    _Bool _outputObscuredDueToInsufficientExternalProtection;
    unsigned long long _usesAudioOnlyModeForExternalPlaybackRevisionID;
    unsigned long long _usesExternalPlaybackWhileExternalScreenIsActiveRevisionID;
    float _rawRate;
}

@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) float rawRate;
@property (nonatomic) float rate;
@property (nonatomic) long long actionAtItemEnd;
@property (nonatomic, readonly) _Bool allowsExternalPlayback;
@property (nonatomic, readonly, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property (nonatomic, readonly) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property (nonatomic, readonly) _Bool usesAudioOnlyModeForExternalPlayback;
@property (nonatomic, readonly) long long externalPlaybackType;
@property (nonatomic) long long defaultItemEQPresetType;
@property (nonatomic, readonly) _Bool outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic, readonly) AVPlayerItem *currentItem;
@property (copy, nonatomic) CDUnknownBlockType playbackQueueCommitHandler;
@property (nonatomic, readonly) _Bool isPlaybackQueueTransactionActive;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) AVPlayer *_player;
@property (nonatomic, readonly) long long _externalProtectionStatus;
@property (copy, nonatomic) NSString *externalPlaybackVideoGravity;
@property (nonatomic, readonly) id playerAVAudioSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)removeItem:(id)arg1;
- (void)removeAllItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)advanceToNextItem;
- (void)play;
- (CDStruct_1b6d18a9)currentTime;
- (void)removeTimeObserver:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)prepareItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (float)_userVolume;
- (void)_setUserVolume:(float)arg1;
- (_Bool)_CALayerDestinationIsTVOut;
- (void)_setCALayerDestinationIsTVOut:(_Bool)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(_Bool)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)beginPlaybackQueueTransactionAndPause:(_Bool)arg1;
- (void)commitPlaybackQueueTransaction;
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(CDStruct_1b6d18a9)arg1;
- (void)setAllowsExternalPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)_currentItemDidChangeNotification:(id)arg1;
- (_Bool)_resumePlayback:(double)arg1;
- (void)_setExpectedAssetTypes:(id)arg1;

@end
