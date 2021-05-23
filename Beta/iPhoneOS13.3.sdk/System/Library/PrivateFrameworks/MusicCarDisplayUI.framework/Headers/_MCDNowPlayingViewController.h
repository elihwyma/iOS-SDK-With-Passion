/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIViewController.h>

@class MCDPlayModeControlView, MCDProgressView, MCDShadowImageView, MCDSongDetailsView, MCDTransportControlView, NSArray, NSMutableDictionary, NSString, UIColor, UIFocusContainerGuide, UIImageView, UILongPressGestureRecognizer, UINavigationBar, UITapGestureRecognizer;

@protocol MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate;

@interface _MCDNowPlayingViewController : UIViewController

{
    long long _heldAction;
    UINavigationBar *_navigationBar;
    UIColor *_navbarColor;
    double _scale;
    double _contentAspectRatio;
    _Bool _navbarHidesShadow;
    _Bool _highTouchMode;
    _Bool _handledWillAppear;
    _Bool _needsUpdate;
    _Bool _needsConstraintUpdate;
    NSMutableDictionary *_constraintCache;
    _Bool _albumArtAllowed;
    MCDTransportControlView *_transportControlView;
    MCDPlayModeControlView *_playModeControlView;
    MCDSongDetailsView *_songDetailsView;
    id <MCDNowPlayingViewControllerDelegate> _delegate;
    id <MCDNowPlayingViewControllerDataSource> _dataSource;
    MCDProgressView *_progressView;
    UIImageView *_artworkView;
    UITapGestureRecognizer *_knobPressRecognizer;
    UITapGestureRecognizer *_backPressRecognizer;
    UITapGestureRecognizer *_leftNudgePressRecognizer;
    UITapGestureRecognizer *_rightNudgePressRecognizer;
    UILongPressGestureRecognizer *_leftNudgeLongPressRecognizer;
    UILongPressGestureRecognizer *_rightNudgeLongPressRecognizer;
    UILongPressGestureRecognizer *_leftButtonLongPressRecognizer;
    UILongPressGestureRecognizer *_fastForwardButtonLongPressRecognizer;
    UIFocusContainerGuide *_controlsFocusContainerGuide;
    NSString *_previousTransportButtonImageIdentifier;
    NSString *_forwardTransportButtonImageIdentifier;
    NSString *_playPauseTransportButtonImageIdentifier;
    long long _layoutType;
    MCDShadowImageView *_artworkViewBrick;
    NSArray *_activeConstraints;
    struct CGRect _nowPlayingContentRect;
}

@property (nonatomic, readonly) MCDProgressView *progressView;
@property (nonatomic, readonly) UIImageView *artworkView;
@property (nonatomic, readonly) UITapGestureRecognizer *knobPressRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *backPressRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *leftNudgePressRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *rightNudgePressRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *leftButtonLongPressRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer;
@property (retain, nonatomic) UIFocusContainerGuide *controlsFocusContainerGuide;
@property (retain, nonatomic) NSString *previousTransportButtonImageIdentifier;
@property (retain, nonatomic) NSString *forwardTransportButtonImageIdentifier;
@property (retain, nonatomic) NSString *playPauseTransportButtonImageIdentifier;
@property (nonatomic) struct CGRect nowPlayingContentRect;
@property (nonatomic) long long layoutType;
@property (nonatomic, readonly) MCDShadowImageView *artworkViewBrick;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic, readonly) MCDTransportControlView *transportControlView;
@property (nonatomic, readonly) MCDPlayModeControlView *playModeControlView;
@property (nonatomic, readonly) MCDSongDetailsView *songDetailsView;
@property (weak, nonatomic) id <MCDNowPlayingViewControllerDelegate> delegate;
@property (weak, nonatomic) id <MCDNowPlayingViewControllerDataSource> dataSource;
@property (nonatomic, getter=isAlbumArtAllowed) _Bool albumArtAllowed;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateViewConstraints;
- (_Bool)isCompactHeight;
- (_Bool)isCompactWidth;
- (void)_handleWillAppear;
- (void)updateLayoutStyle;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_moreButtonTouchUp:(id)arg1;
- (void)_addToLibraryButtonTouchUp:(id)arg1;
- (void)_playbackButtonTouchUp:(id)arg1;
- (void)_leftNudgePress:(id)arg1;
- (void)_rightNudgePress:(id)arg1;
- (void)_leftButtonLongPress:(id)arg1;
- (void)_fastForwardButtonLongPress:(id)arg1;
- (void)_updateBackgroundEffect;
- (void)_initializeTransportControls;
- (void)_recalculateLayout:(_Bool)arg1;
- (_Bool)_showsButtonSelectionsForTouch;
- (id)constraintsForLayoutType:(long long)arg1;
- (void)updatePlayControls;
- (double)_artBrickScale;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (void)_updatePlayModesState;
- (void)_updateShuffleStateWithType:(long long)arg1;
- (void)_updateRepeatStateWithType:(long long)arg1;
- (void)_updatePlaybackRate;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)_respondToHeldAction;
- (void)_sendHeldAction;
- (void)_playPauseButtonTouchDown:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)updateLayoutStyle:(_Bool)arg1;
- (void)setNowPlayingLayout:(long long)arg1 forceChange:(_Bool)arg2;
- (void)layoutStyleDidChange;
- (void)_invalidateConstraintCache;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;

@end
