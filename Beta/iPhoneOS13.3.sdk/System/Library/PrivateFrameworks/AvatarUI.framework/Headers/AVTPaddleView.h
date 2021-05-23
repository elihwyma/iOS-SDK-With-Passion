/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLooper, AVPlayerViewController, AVTCircularButton, AVTTouchDownGestureRecognizer, AVTUILogger, NSArray;

@protocol AVTPaddleViewDelegate;

@interface AVTPaddleView : UIView

{
    _Bool _automaticallyStartsPlaying;
    double _padding;
    id <AVTPaddleViewDelegate> _delegate;
    UIView *_videoViewContainer;
    UIView *_addButtonViewContainer;
    AVTCircularButton *_addButton;
    AVPlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerViewController *_videoController;
    NSArray *_activeConstraints;
    long long _layoutDirection;
    AVTTouchDownGestureRecognizer *_tapGestureRecognizer;
    AVTTouchDownGestureRecognizer *_dismissGestureRecognizer;
    AVTUILogger *_logger;
    CDUnknownBlockType _preCommitBlock;
}

@property (retain, nonatomic) UIView *videoViewContainer;
@property (retain, nonatomic) UIView *addButtonViewContainer;
@property (retain, nonatomic) AVTCircularButton *addButton;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLooper *looper;
@property (retain, nonatomic) AVPlayerViewController *videoController;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic, readonly) long long layoutDirection;
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *dismissGestureRecognizer;
@property (retain, nonatomic) AVTUILogger *logger;
@property (copy, nonatomic) CDUnknownBlockType preCommitBlock;
@property (nonatomic) _Bool automaticallyStartsPlaying;
@property (nonatomic) double padding;
@property (weak, nonatomic) id <AVTPaddleViewDelegate> delegate;

+ (double)defaultPadding;
+ (id)videoItem;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isRTL;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dismissAnimated:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleTapGesture;
- (void)playVideo;
- (id)initWithLayoutDirection:(long long)arg1 symbolConfiguration:(id)arg2;
- (void)_configureWithSymbolConfiguration:(id)arg1;
- (void)stopPlayingIfNecessary;
- (void)startPlayingIfNecessary;
- (void)handleDismissGesture;
- (struct CGRect)frameForVideoInCoordinateSpace:(id)arg1;
- (struct CGRect)frameForAddButtonInCoordinateSpace:(id)arg1;
- (_Bool)isPointInsideTransparentRegion:(struct CGPoint)arg1;
- (id)initWithLayoutDirection:(long long)arg1;
- (void)updateLayoutFromPlusButtonView:(id)arg1 videoView:(id)arg2;
- (void)handleTapAddButton;
- (void)attachVideoController:(id)arg1 looper:(id)arg2;
- (void)showAnimated:(_Bool)arg1;
- (void)pauseVideo;

@end
