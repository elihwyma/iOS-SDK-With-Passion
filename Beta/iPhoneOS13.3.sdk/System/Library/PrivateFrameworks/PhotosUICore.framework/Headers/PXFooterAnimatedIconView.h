/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject;

@protocol OS_dispatch_queue;

@interface PXFooterAnimatedIconView : UIView

{
    unsigned long long _reasonsToPause;
    NSObject<OS_dispatch_queue> *_queue;
    AVPlayer *_player;
    CDStruct_1b6d18a9 _introStartTime;
    CDStruct_1b6d18a9 _loopStartTime;
    CDStruct_1b6d18a9 _loopEndTime;
    CDStruct_1b6d18a9 _outroEndTime;
    float _playerRateBeforePause;
    id _gridCycleTimeObservationToken;
    long long _waitingState;
    double _waitingStateStartTime;
    _Bool _wantsGridCycleTimeObservation;
    _Bool _isPlayerHidden;
    _Bool _isPlayerPaused;
    AVPlayerItem *_playerItem;
    long long _style;
    long long _desiredMode;
    AVPlayerLayer *_playerLayer;
}

@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) _Bool isPlayerHidden;
@property (nonatomic) _Bool isPlayerPaused;
@property (nonatomic) _Bool wantsGridCycleTimeObservation;
@property (nonatomic) long long style;
@property (nonatomic, readonly) _Bool isObscured;
@property (nonatomic, readonly) long long presentedState;
@property (nonatomic) long long desiredMode;

- (void)dealloc;
- (void)_update;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateStyle;
- (void)didMoveToWindow;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_transitionToState:(long long)arg1;
- (id)_movieURL;
- (void)_setNeedsUpdate;
- (void)_windowDidChange;
- (void)_addReasonToPause:(unsigned long long)arg1;
- (void)_removeReasonToPause:(unsigned long long)arg1;
- (void)_updateIsPlayerPaused;
- (void)_layoutPlayer;
- (void)_crossedGridCycleBoundary;
- (void)_hideVideo;
- (void)_createPlayerIfNeeded;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_didSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_playFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)_didSeekToPlayFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)_didPlayerToEndTime:(id)arg1;
- (void)_applicationDidEnterForeground:(id)arg1;

@end
