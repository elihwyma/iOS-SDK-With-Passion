/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAVController.h>

@class MPAVItem, MPCPlaybackEngine, NSMutableSet;

@interface _MPCAVController : MPAVController

{
    _Bool _playedSuccessfully;
    _Bool _allowsNewPlaybackErrorItem;
    MPCPlaybackEngine *_playbackEngine;
    MPAVItem *_firstPlaybackErrorItem;
    NSMutableSet *_failedItemsIdentifiers;
}

@property (nonatomic) _Bool allowsNewPlaybackErrorItem;
@property (weak, nonatomic) MPAVItem *firstPlaybackErrorItem;
@property (retain, nonatomic) NSMutableSet *failedItemsIdentifiers;
@property (weak, nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, getter=hasPlayedSuccessfully) _Bool playedSuccessfully;

+ (_Bool)prefersApplicationAudioSession;

- (void)_contentsChanged;
- (void)_setState:(long long)arg1;
- (void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;
- (void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;
- (void)endPlayback;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateStateForPlaybackPrevention;
- (void)_itemDidChange:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_configureAudioSession;
- (void)_connectAVPlayer;
- (void)playbackHasStartedForItem:(id)arg1;
- (void)handlePlaybackErrorWithUserInfo:(id)arg1;
- (void)_queueDidEndWithReason:(id)arg1 lastItem:(id)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1 options:(unsigned long long)arg2;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)updateAudioSession;
- (void)_queueDidEndWithReason:(id)arg1 skipCL:(_Bool)arg2 lastItem:(id)arg3;
- (void)_networkPolicyItemCellularRestrictedNotification:(id)arg1;

@end
